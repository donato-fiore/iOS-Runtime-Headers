// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HRATRIALFIBRILLATIONCONFIRMATIONCYCLEMETRIC_H
#define HRATRIALFIBRILLATIONCONFIRMATIONCYCLEMETRIC_H

@class NSMutableDictionary, NSDictionary;

#import <Foundation/Foundation.h>


@interface HRAtrialFibrillationConfirmationCycleMetric : NSObject

@property (retain, nonatomic) NSMutableDictionary *eventPayload; // ivar: _eventPayload
@property (readonly, copy, nonatomic) NSDictionary *payload;


-(id)initWithAgeBin:(NSUInteger)arg0 numberOfPositiveTachograms:(NSInteger)arg1 numberOfNegativeTachograms:(NSInteger)arg2 algorithmVersion:(NSInteger)arg3 biologicalSex:(NSInteger)arg4 userShouldBeAlerted:(BOOL)arg5 cycleDuration:(CGFloat)arg6 additionalMetrics:(id)arg7 ;


@end


#endif