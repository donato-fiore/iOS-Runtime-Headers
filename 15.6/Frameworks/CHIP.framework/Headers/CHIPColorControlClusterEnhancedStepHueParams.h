// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPCOLORCONTROLCLUSTERENHANCEDSTEPHUEPARAMS_H
#define CHIPCOLORCONTROLCLUSTERENHANCEDSTEPHUEPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPColorControlClusterEnhancedStepHueParams : NSObject

@property (retain, nonatomic) NSNumber *optionsMask; // ivar: _optionsMask
@property (retain, nonatomic) NSNumber *optionsOverride; // ivar: _optionsOverride
@property (retain, nonatomic) NSNumber *stepMode; // ivar: _stepMode
@property (retain, nonatomic) NSNumber *stepSize; // ivar: _stepSize
@property (retain, nonatomic) NSNumber *transitionTime; // ivar: _transitionTime


-(id)init;


@end


#endif