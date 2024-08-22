// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SNTHRESHOLDBASEDSECONDPASSCONTROLLER_H
#define SNTHRESHOLDBASEDSECONDPASSCONTROLLER_H

@class NSString;
@protocol SNSecondPassController;

#import <Foundation/Foundation.h>


@interface SNThresholdBasedSecondPassController : NSObject <SNSecondPassController>

 {
    CGFloat _secondPassBeginThreshold;
    CGFloat _secondPassEndThreshold;
    CGFloat _secondPassHangoverPeriod;
    ? _secondPassTriggerTime;
    ? _firstResultBelowEndThresholdStartTime;
    BOOL _secondPassIsActive;
    id *_firstPassResultToComparableFunction;
    id *_secondPassResultToComparableFunction;
}


@property (copy) id *beginSecondPassHandler; // ivar: _beginSecondPassHandler
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) id *endSecondPassHandler; // ivar: _endSecondPassHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


// -(id)initWithSecondPassBeginThreshold:(CGFloat)arg0 secondPassEndThreshold:(CGFloat)arg1 secondPassHangoverPeriod:(CGFloat)arg2 firstPassResultToComparableFunction:(id)arg3 secondPassResultToComparableFunction:(unk)arg4  ;
-(void)firstPassDidProduceResult:(id)arg0 ;
-(void)secondPassDidProduceResult:(id)arg0 ;


@end


#endif