// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CHIPLEVELCONTROLCLUSTERSTEPPARAMS_H
#define CHIPLEVELCONTROLCLUSTERSTEPPARAMS_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface CHIPLevelControlClusterStepParams : NSObject

@property (retain, nonatomic) NSNumber *optionMask; // ivar: _optionMask
@property (retain, nonatomic) NSNumber *optionOverride; // ivar: _optionOverride
@property (retain, nonatomic) NSNumber *stepMode; // ivar: _stepMode
@property (retain, nonatomic) NSNumber *stepSize; // ivar: _stepSize
@property (retain, nonatomic) NSNumber *transitionTime; // ivar: _transitionTime


-(id)init;


@end


#endif