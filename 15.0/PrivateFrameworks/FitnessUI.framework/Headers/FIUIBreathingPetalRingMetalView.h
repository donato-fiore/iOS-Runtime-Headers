// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FIUIBREATHINGPETALRINGMETALVIEW_H
#define FIUIBREATHINGPETALRINGMETALVIEW_H

@class UIView, NSString, MTKView;
@protocol FIUIBreathingPetalRingViewDrawable, FIUIDeepBreathingPetalRingViewDelegate;


#import "FIUIBreathingPetalRingMetalRenderer.h"

@interface FIUIBreathingPetalRingMetalView : UIView <FIUIBreathingPetalRingViewDrawable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) MTKView *mtkView; // ivar: _mtkView
@property (readonly, nonatomic) NSInteger numberOfPetals; // ivar: _numberOfPetals
@property (readonly, nonatomic) NSInteger numberOfVisiblePetals;
@property (weak, nonatomic) NSObject<FIUIDeepBreathingPetalRingViewDelegate> *petalRingDelegate; // ivar: _petalRingDelegate
@property (nonatomic) float preferredFramesPerSecond;
@property (retain, nonatomic) FIUIBreathingPetalRingMetalRenderer *renderer; // ivar: _renderer
@property (nonatomic) CGPoint ringCenter;
@property (nonatomic) float ringRadius;
@property (readonly, nonatomic) BOOL showBlurTrails; // ivar: _showBlurTrails
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIView *view;


-(id)initWithFrame:(struct CGRect )arg0 numberOfPetals:(NSInteger)arg1 showBlurTrails:(BOOL)arg2 device:(id)arg3 ;
-(id)initWithFrame:(struct CGRect )arg0 petalColor:(NSInteger)arg1 numberOfPetals:(NSInteger)arg2 showBlurTrails:(BOOL)arg3 device:(id)arg4 ;
-(void)importDataFromPetalRing:(id)arg0 ;
-(void)setBlurTrailAtIndex:(NSInteger)arg0 center:(struct CGPoint )arg1 radius:(float)arg2 blurriness:(float)arg3 alpha:(float)arg4 ;
-(void)setGradientRotationAngle:(float)arg0 ;
-(void)setPetalAtIndex:(NSInteger)arg0 center:(struct CGPoint )arg1 radius:(float)arg2 alpha:(float)arg3 ;


@end


#endif