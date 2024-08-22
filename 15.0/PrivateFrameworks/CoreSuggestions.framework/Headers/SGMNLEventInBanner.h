// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGMNLEVENTINBANNER_H
#define SGMNLEVENTINBANNER_H

@class PETScalarEventTracker;

#import <Foundation/Foundation.h>


@interface SGMNLEventInBanner : NSObject

@property (readonly, nonatomic) PETScalarEventTracker *tracker; // ivar: _tracker


-(id)init;
-(void)trackEventWithScalar:(NSUInteger)arg0 interface:(struct SGMNLEventInterface_ )arg1 actionType:(struct SGMNLEventActionType_ )arg2 eventType:(id)arg3 languageID:(id)arg4 daysFromStartDate:(NSUInteger)arg5 confidenceScore:(NSUInteger)arg6 significantSender:(struct SGMBoolOption_ )arg7 participantCount:(NSUInteger)arg8 extractionLevel:(struct SGMNLEventExtractionLevel_ )arg9 usedBubblesCount:(NSUInteger)arg10 titleSource:(struct SGMEventTitleSource_ )arg11 titleAdj:(struct SGMEventStringAdj_ )arg12 dateAdj:(struct SGMEventDateAdj_ )arg13 duraAdj:(struct SGMEventDurationAdj_ )arg14 locationAdj:(struct SGMEventLocationAdj_ )arg15 addedAttendeesCount:(id)arg16 calendarAppUsageLevel:(id)arg17 mailAppUsageLevel:(struct SGMAppUsageLevel_ )arg18 messagesAppUsageLevel:(struct SGMAppUsageLevel_ )arg19 ;


@end


#endif