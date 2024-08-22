// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef JFXCOMPOSITIONPLAYERVIEWCONTROLLERANIMATIONPROPERTIES_H
#define JFXCOMPOSITIONPLAYERVIEWCONTROLLERANIMATIONPROPERTIES_H

@protocol UITimingCurveProvider;

#import <Foundation/Foundation.h>


@interface JFXCompositionPlayerViewControllerAnimationProperties : NSObject

@property (nonatomic) CGFloat animationDuration; // ivar: _animationDuration
@property (nonatomic) BOOL shouldScale; // ivar: _shouldScale
@property (retain, nonatomic) NSObject<UITimingCurveProvider> *timingParameters; // ivar: _timingParameters




@end


#endif