// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXGANIMATION_H
#define PXGANIMATION_H

@class CASpringAnimation, NSDictionary;
@protocol PXGAnimationDelegate;

#import <Foundation/Foundation.h>

#import "PXGLayout.h"
#import "PXGTransition.h"

@interface PXGAnimation : NSObject

@property (nonatomic) NSInteger curve; // ivar: _curve
@property (nonatomic) float dampingRatio; // ivar: _dampingRatio
@property (retain, nonatomic) NSObject<PXGAnimationDelegate> *delegate; // ivar: _delegate
@property (nonatomic) CGFloat duration; // ivar: _duration
@property (readonly, nonatomic) CGFloat effectiveDuration;
@property (nonatomic) unsigned int highFrameRateReason; // ivar: _highFrameRateReason
@property (nonatomic, setter=setDoubleSided:) BOOL isDoubleSided; // ivar: _isDoubleSided
@property (readonly, weak, nonatomic) PXGLayout *layout; // ivar: _layout
@property (nonatomic) CGFloat maximumDistance; // ivar: _maximumDistance
@property (nonatomic) NSInteger numberOfOscillations; // ivar: _numberOfOscillations
@property (nonatomic) NSInteger scope; // ivar: _scope
@property (retain, nonatomic) CASpringAnimation *springAnimation; // ivar: _springAnimation
@property (nonatomic) float springAnimationInitialProgress; // ivar: _springAnimationInitialProgress
@property (nonatomic) float springAnimationProgressMultiplier; // ivar: _springAnimationProgressMultiplier
@property (nonatomic) BOOL supportsPresentationAdjustment; // ivar: _supportsPresentationAdjustment
@property (nonatomic) BOOL supportsSpriteTransfer; // ivar: _supportsSpriteTransfer
@property (weak, nonatomic) PXGTransition *transition; // ivar: _transition
@property (retain, nonatomic) NSDictionary *userData; // ivar: _userData


-(id)description;
-(id)init;
-(id)initWithLayout:(id)arg0 ;
-(void)noteDidComplete;


@end


#endif