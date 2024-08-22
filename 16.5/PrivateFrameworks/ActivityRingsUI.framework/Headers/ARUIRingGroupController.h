// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ARUIRINGGROUPCONTROLLER_H
#define ARUIRINGGROUPCONTROLLER_H



#import "ARUIAnimatableObject.h"
#import "ARUIRingGroup.h"
#import "ARUISpriteSheet.h"

@interface ARUIRingGroupController : ARUIAnimatableObject

@property (nonatomic) CGFloat additionalSpacingAtIndex; // ivar: _additionalSpacingAtIndex
@property (nonatomic) CGFloat backingOrigin; // ivar: _backingOrigin
@property (nonatomic) CGPoint center;
@property (nonatomic) float emptyOpacity;
@property (readonly, nonatomic) NSInteger numberOfRings;
@property (nonatomic) float opacity;
@property (nonatomic) float ringDiameter;
@property (readonly, nonatomic) ARUIRingGroup *ringGroup; // ivar: _ringGroup
@property (nonatomic) float ringIconSize; // ivar: _ringIconSize
@property (nonatomic) float ringInterspacing;
@property (nonatomic) float ringScale;
@property (nonatomic) float ringThickness;
@property (retain, nonatomic) ARUISpriteSheet *spriteSheet;
@property (nonatomic) float trackOpacity;
@property (nonatomic) float zRotation;


+(CGFloat)defaultAnimationDuration;
+(id)animationTimingFunction;
+(id)ringGroupControllerConfiguredForCompanionWithRingType:(NSInteger)arg0 withIcon:(BOOL)arg1 ;
+(id)ringGroupControllerConfiguredForWatchWithRingType:(NSInteger)arg0 withIcon:(BOOL)arg1 ;
-(float)diameterForRingAtIndex:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithNumberOfRings:(NSInteger)arg0 ;
-(id)initWithRingGroup:(id)arg0 ;
-(void)addAnimation:(id)arg0 forRingGroupPropertyType:(NSUInteger)arg1 ;
-(void)addCelebration:(id)arg0 toRingAtIndex:(NSInteger)arg1 ;
-(void)addOpacityAnimation:(id)arg0 forRingAtIndex:(NSInteger)arg1 ;
-(void)removeCelebration:(id)arg0 fromRingAtIndex:(NSInteger)arg1 ;
-(void)setActiveEnergyPercentage:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setActiveEnergyPercentage:(CGFloat)arg0 briskPercentage:(CGFloat)arg1 movingHoursPercentage:(CGFloat)arg2 animated:(BOOL)arg3 completion:(id)arg4 ;
-(void)setBriskPercentage:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setDotPercentage:(CGFloat)arg0 ofRingAtIndex:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)setIconDotTextureOrigin:(struct CGPoint )arg0 ofRingAtIndex:(NSInteger)arg1 ;
-(void)setIconFirstFrameOrigin:(struct CGPoint )arg0 frameSize:(struct CGSize )arg1 frameCount:(NSInteger)arg2 columns:(NSInteger)arg3 ofRingAtIndex:(NSInteger)arg4 ;
-(void)setMovingHoursPercentage:(CGFloat)arg0 animated:(BOOL)arg1 ;
-(void)setPercentage:(CGFloat)arg0 ofRingAtIndex:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)setPercentage:(CGFloat)arg0 ofRingAtIndex:(NSInteger)arg1 animated:(BOOL)arg2 completion:(id)arg3 ;
-(void)setPercentage:(CGFloat)arg0 ofRingAtIndex:(NSInteger)arg1 animated:(BOOL)arg2 duration:(CGFloat)arg3 timingFunction:(id)arg4 completion:(id)arg5 ;
-(void)setRingIconPosition:(struct CGPoint )arg0 ofRingAtIndex:(NSInteger)arg1 animated:(BOOL)arg2 ;
-(void)setTopColor:(id)arg0 bottomColor:(id)arg1 ;
-(void)setTopColor:(id)arg0 bottomColor:(id)arg1 contrastColor:(id)arg2 ofRingAtIndex:(NSInteger)arg3 ;
-(void)setTopColor:(id)arg0 bottomColor:(id)arg1 ofRingAtIndex:(NSInteger)arg2 ;


@end


#endif