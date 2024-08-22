// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CUIKSPANDECISIONINFO_H
#define CUIKSPANDECISIONINFO_H


#import <Foundation/Foundation.h>


@interface CUIKSpanDecisionInfo : NSObject

@property (nonatomic) BOOL proposeFuture; // ivar: _proposeFuture
@property (nonatomic) NSInteger recurringEventCount; // ivar: _recurringEventCount
@property (nonatomic) BOOL shouldRequestSpan; // ivar: _shouldRequestSpan


+(BOOL)_allowSlicingEvent:(id)arg0 diffSummary:(id)arg1 ;
+(BOOL)_shouldRequestForSpanWithDiffSummary:(id)arg0 recurringEventCount:(NSInteger)arg1 significantlyDetachedRecurringEventCount:(NSInteger)arg2 ;
+(id)spanDecisionInfoForEvents:(id)arg0 diffSummary:(id)arg1 ;


@end


#endif