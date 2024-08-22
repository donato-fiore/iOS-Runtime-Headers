// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUIRINGSVIEW_H
#define ARUIRINGSVIEW_H

@class UIView, NSArray, NSString, UIImage, CAMetalLayer;
@protocol ARUIRingGroupDelegate;


#import "ARUIRenderContext.h"
#import "ARUIRenderer.h"
#import "ARUIRingGroup.h"
#import "ARUIRingGroupController.h"

@interface ARUIRingsView : UIView <ARUIRingGroupDelegate>

 {
    ARUIRenderContext *_renderContext;
    BOOL _backgrounded;
    BOOL _inViewHierarchy;
    NSArray *_ringGroups;
    NSArray *_ringGroupControllers;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL discardBackBuffers; // ivar: _discardBackBuffers
@property (nonatomic) CGFloat emptyRingAlpha; // ivar: _emptyRingAlpha
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *iconSpriteImage; // ivar: _iconSpriteImage
@property (nonatomic) NSUInteger iconTextureColumns; // ivar: _iconTextureColumns
@property (nonatomic) NSUInteger iconTextureRows; // ivar: _iconTextureRows
@property (readonly, nonatomic) CAMetalLayer *metalLayer;
@property (nonatomic, getter=isPaused) BOOL paused; // ivar: _paused
@property (nonatomic) NSInteger preferredFramesPerSecond; // ivar: _preferredFramesPerSecond
@property (readonly, nonatomic) ARUIRenderer *renderer; // ivar: _renderer
@property (readonly, nonatomic) ARUIRingGroup *ringGroup;
@property (readonly, nonatomic) ARUIRingGroupController *ringGroupController;
@property (readonly, nonatomic) NSArray *ringGroupControllers;
@property (nonatomic) BOOL shouldBypassApplicationStateChecking; // ivar: _shouldBypassApplicationStateChecking
@property (nonatomic) BOOL shouldCheckDrawableAvailable; // ivar: _shouldCheckDrawableAvailable
@property (nonatomic) BOOL shouldRenderOnLayout; // ivar: _shouldRenderOnLayout
@property (readonly, nonatomic) UIImage *snapshot;
@property (readonly) Class superclass;
@property (nonatomic) BOOL synchronizesWithCA;
@property (readonly, nonatomic) BOOL viewIsVisible; // ivar: _viewIsVisible


+(Class)layerClass;
+(id)ringsViewConfiguredForCompanionOfType:(NSInteger)arg0 withRenderer:(id)arg1 ;
+(id)ringsViewConfiguredForOneRingOnCompanionOfType:(NSInteger)arg0 ;
+(id)ringsViewConfiguredForOneRingOnWatchOfType:(NSInteger)arg0 ;
+(id)ringsViewConfiguredForOneRingOnWatchOfType:(NSInteger)arg0 withIcon:(BOOL)arg1 ;
+(id)ringsViewConfiguredForOneRingOnWatchOfType:(NSInteger)arg0 withRenderer:(id)arg1 ;
+(id)ringsViewConfiguredForThreeRingsOnCompanion;
+(id)ringsViewConfiguredForThreeRingsOnCompanionWithRenderer:(id)arg0 ;
+(id)ringsViewConfiguredForThreeRingsOnWatch;
+(id)ringsViewConfiguredForThreeRingsOnWatchWithRenderer:(id)arg0 ;
+(id)ringsViewConfiguredForWatchOfType:(NSInteger)arg0 withIcon:(BOOL)arg1 renderer:(id)arg2 ;
+(void)clearSharedCaches;
-(BOOL)_shouldAllowRendering;
-(id)_allRings;
-(id)_anySpriteSheet;
-(id)initWithRingGroup:(id)arg0 ;
-(id)initWithRingGroup:(id)arg0 renderer:(id)arg1 ;
-(id)initWithRingGroupController:(id)arg0 ;
-(id)initWithRingGroupController:(id)arg0 renderer:(id)arg1 ;
-(id)initWithRingGroupControllers:(id)arg0 ;
-(id)initWithRingGroupControllers:(id)arg0 renderer:(id)arg1 ;
-(id)initWithRingGroups:(id)arg0 ;
-(id)initWithRingGroups:(id)arg0 renderer:(id)arg1 ;
-(void)_didEnterBackground:(id)arg0 ;
-(void)_sharedInitWithRingGroups:(id)arg0 renderer:(id)arg1 ;
-(void)_sharedInitWithWithRingGroupControllers:(id)arg0 renderer:(id)arg1 ;
-(void)_updateRenderContext;
-(void)_updateRingGroupPauseState;
-(void)_willEnterForeground:(id)arg0 ;
-(void)layoutSubviews;
-(void)ringGroupHasUpdated:(id)arg0 ;
-(void)setActiveEnergyPercentage:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setActiveEnergyPercentage:(CGFloat)arg0 briskPercentage:(CGFloat)arg1 movingHoursPercentage:(CGFloat)arg2 animated:(BOOL)arg3 completion:(id)arg4 ;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setBriskPercentage:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setContentMode:(NSInteger)arg0 ;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setMovingHoursPercentage:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setOpaque:(BOOL)arg0 ;
-(void)willMoveToWindow:(id)arg0 ;


@end


#endif