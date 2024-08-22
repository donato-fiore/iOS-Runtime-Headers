// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SGNLEVENTSUGGESTIONSMETRICS_H
#define SGNLEVENTSUGGESTIONSMETRICS_H


#import <Foundation/Foundation.h>

#import "SGMDDLinkShown.h"
#import "SGMNLEventInBanner.h"

@interface SGNLEventSuggestionsMetrics : NSObject

@property (retain, nonatomic) SGMDDLinkShown *ddLinkShown; // ivar: _ddLinkShown
@property (retain, nonatomic) SGMNLEventInBanner *nlEvent; // ivar: _nlEvent


+(CGFloat)round:(CGFloat)arg0 toSignificantFigures:(NSInteger)arg1 ;
+(NSUInteger)bucketizeInteger:(NSUInteger)arg0 withBucketSize:(NSUInteger)arg1 limit:(NSUInteger)arg2 ;
+(id)getAddedAttendeesCountFromEKEvent:(id)arg0 ;
+(id)instance;
+(struct SGMEventDateAdj_ )diffEventStartDateChangedFrom:(id)arg0 oldTimeZone:(id)arg1 to:(id)arg2 newTimeZone:(id)arg3 ;
+(struct SGMEventDurationAdj_ )diffEventDurationChangedFrom:(CGFloat)arg0 to:(CGFloat)arg1 ;
+(struct SGMEventLocationAdj_ )diffEventLocationFrom:(id)arg0 to:(id)arg1 ;
+(struct SGMEventStringAdj_ )diffEventTitleChangedFrom:(id)arg0 to:(id)arg1 ;
+(void)recordInteractionForEventWithInterface:(unsigned short)arg0 actionType:(unsigned short)arg1 eventType:(id)arg2 extractionLevel:(struct SGMNLEventExtractionLevel_ )arg3 harvestedEKEvent:(id)arg4 curatedEKEvent:(id)arg5 ;
+(void)recordInteractionForEventWithInterface:(unsigned short)arg0 actionType:(unsigned short)arg1 eventType:(id)arg2 languageID:(id)arg3 startDate:(id)arg4 confidenceScore:(float)arg5 participantCount:(char)arg6 significantSender:(struct SGMBoolOption_ )arg7 extractionLevel:(struct SGMNLEventExtractionLevel_ )arg8 usedBubblesCount:(char)arg9 titleSource:(struct SGMEventTitleSource_ )arg10 titleAdj:(struct SGMEventStringAdj_ )arg11 dateAdj:(struct SGMEventDateAdj_ )arg12 duraAdj:(struct SGMEventDurationAdj_ )arg13 locationAdj:(struct SGMEventLocationAdj_ )arg14 addedAttendeesCount:(id)arg15 calendarAppUsageLevel:(float)arg16 mailAppUsageLevel:(char)arg17 messagesAppUsageLevel:(char)arg18 ;
+(void)recordInteractionForEventWithInterface:(unsigned short)arg0 actionType:(unsigned short)arg1 harvestedEKEvent:(id)arg2 curatedEKEvent:(id)arg3 ;
+(void)recordInteractionForEventWithInterface:(unsigned short)arg0 actionType:(unsigned short)arg1 harvestedSGEvent:(id)arg2 curatedEKEvent:(id)arg3 ;
+(void)recordUserInteraction:(NSUInteger)arg0 withLinkInApplication:(NSInteger)arg1 eventPrefillMode:(NSUInteger)arg2 eventTypeClassification:(id)arg3 proposedEvent:(id)arg4 confirmedEvent:(id)arg5 ;
+(void)shownViaDataDetectorsLinkInApp:(NSInteger)arg0 ;
-(id)init;


@end


#endif