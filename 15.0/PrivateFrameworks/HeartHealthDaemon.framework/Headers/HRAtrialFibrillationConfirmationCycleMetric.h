// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HRATRIALFIBRILLATIONCONFIRMATIONCYCLEMETRIC_H
#define HRATRIALFIBRILLATIONCONFIRMATIONCYCLEMETRIC_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface HRAtrialFibrillationConfirmationCycleMetric : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventPayload; // ivar: _eventPayload
@property (readonly, copy, nonatomic) NSDictionary *payload;


-(id)initWithAgeBin:(NSUInteger)arg0 numberOfPositiveTachograms:(NSInteger)arg1 numberOfNegativeTachograms:(NSInteger)arg2 biologicalSex:(NSInteger)arg3 userShouldBeAlerted:(BOOL)arg4 cycleDuration:(CGFloat)arg5 additionalMetrics:(id)arg6 ;


@end


#endif