// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTRLEVELCONTROLCLUSTERSTEPPARAMS_H
#define MTRLEVELCONTROLCLUSTERSTEPPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface MTRLevelControlClusterStepParams : NSObject

@property (retain, nonatomic) NSNumber *optionMask; // ivar: _optionMask
@property (retain, nonatomic) NSNumber *optionOverride; // ivar: _optionOverride
@property (retain, nonatomic) NSNumber *stepMode; // ivar: _stepMode
@property (retain, nonatomic) NSNumber *stepSize; // ivar: _stepSize
@property (retain, nonatomic) NSNumber *timedInvokeTimeoutMs; // ivar: _timedInvokeTimeoutMs
@property (retain, nonatomic) NSNumber *transitionTime; // ivar: _transitionTime


-(id)description;
-(id)init;


@end


#endif