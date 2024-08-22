// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ADINTERSESSIONFILTERPARAMETERS_H
#define ADINTERSESSIONFILTERPARAMETERS_H


#import <Foundation/Foundation.h>


@interface ADInterSessionFilterParameters : NSObject

@property (nonatomic) unsigned int capacity; // ivar: _capacity
@property (nonatomic) BOOL isStepDetectionActive; // ivar: _isStepDetectionActive
@property (nonatomic) float maximalWeight; // ivar: _maximalWeight
@property (nonatomic) unsigned int minStepIndex; // ivar: _minStepIndex
@property (nonatomic) unsigned int minStepSize; // ivar: _minStepSize
@property (nonatomic) unsigned int minimalEntriesForResult; // ivar: _minimalEntriesForResult
@property (nonatomic) float minimalWeight; // ivar: _minimalWeight
@property (nonatomic) unsigned int outlierNumber; // ivar: _outlierNumber
@property (nonatomic) float outlierWeight; // ivar: _outlierWeight
@property (nonatomic) float stepDetectionThreshold; // ivar: _stepDetectionThreshold


-(id)init;


@end


#endif