// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUPARALLAXLAYERSTACKVIEWMODEL_H
#define PUPARALLAXLAYERSTACKVIEWMODEL_H

@class PXObservable, NSString, PFParallaxLayerStack, PFParallaxLayout, PIParallaxStyle;
@protocol PUParallaxLayerStackMutableViewModel, NSCopying, PISegmentationItem;


#import "PUParallaxLayerStackViewManager.h"

@interface PUParallaxLayerStackViewModel : PXObservable <PUParallaxLayerStackMutableViewModel, NSCopying>



@property (readonly, nonatomic) NSInteger backlightLuminance; // ivar: _backlightLuminance
@property (readonly, nonatomic) BOOL canApplyParallax;
@property (readonly, nonatomic) BOOL canEnableDepthEffect;
@property (readonly, nonatomic) BOOL clockAppearsAboveForeground;
@property (readonly, nonatomic) NSUInteger clockIntersection; // ivar: _clockIntersection
@property (retain, nonatomic) NSString *clockLayerOrder; // ivar: _clockLayerOrder
@property (readonly, nonatomic) CGRect containerFrame; // ivar: _containerFrame
@property (readonly, nonatomic) PFParallaxLayerStack *currentLayerStack; // ivar: _currentLayerStack
@property (readonly, nonatomic) PFParallaxLayout *currentLayout; // ivar: _currentLayout
@property (nonatomic) CGRect currentNormalizedVisibleFrame; // ivar: _currentNormalizedVisibleFrame
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) BOOL depthEnabled;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL didSetContainerFrame; // ivar: _didSetContainerFrame
@property (readonly, nonatomic) NSInteger environment;
@property (readonly, nonatomic) BOOL hasEnoughRoomForParallax;
@property (readonly, nonatomic) BOOL hasMatte;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CGRect inactiveFrame;
@property (nonatomic) CGRect landscapeVisibleFrame; // ivar: _landscapeVisibleFrame
@property (retain, nonatomic) PFParallaxLayout *lastPortraitLayout; // ivar: _lastPortraitLayout
@property (readonly, nonatomic) NSInteger layoutOrder; // ivar: _layoutOrder
@property (readonly, nonatomic) CGRect normalizedVisibleFrame;
@property (readonly, nonatomic) BOOL parallaxDisabled;
@property (readonly, nonatomic) CGPoint parallaxVector; // ivar: _parallaxVector
@property (nonatomic) CGRect portraitVisibleFrame; // ivar: _portraitVisibleFrame
@property (retain, nonatomic) NSObject<PISegmentationItem> *segmentationItem; // ivar: _segmentationItem
@property (readonly, nonatomic) PIParallaxStyle *style; // ivar: _style
@property (readonly) Class superclass;
@property (readonly, nonatomic) PUParallaxLayerStackViewManager *viewManager; // ivar: _viewManager
@property (readonly, nonatomic) CGFloat visibilityAmount; // ivar: _visibilityAmount
@property (readonly, nonatomic) CGRect visibleFrame;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithLayerStack:(id)arg0 ;
-(id)initWithSegmentationItem:(id)arg0 initialStyle:(id)arg1 layerStack:(id)arg2 ;
-(struct CGRect )_layoutRectForViewRect:(struct CGRect )arg0 ;
-(struct CGRect )_viewRectForLayoutRect:(struct CGRect )arg0 ;
-(void)_updateVisibleFrameWithContainerFrameSetFirstTime:(BOOL)arg0 ;
-(void)performChanges:(id)arg0 ;
-(void)setClockAreaLuminance:(CGFloat)arg0 ;
-(void)updateLayerStack:(id)arg0 ;


@end


#endif