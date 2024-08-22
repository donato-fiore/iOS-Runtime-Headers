// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXFAKECOREANALYTICSLOGGER_H
#define ATXFAKECOREANALYTICSLOGGER_H

@class NSMutableArray;

#import <Foundation/Foundation.h>


@interface ATXFakeCoreAnalyticsLogger : NSObject {
    NSMutableArray *_loggedEvents;
}




+(BOOL)hasReceivedEventWithMetricName:(id)arg0 partialDictionary:(id)arg1 ;
+(id)sharedInstance;
+(void)resetEvents;
-(BOOL)hasReceivedEventWithMetricName:(id)arg0 partialDictionary:(id)arg1 ;
-(BOOL)partialDictionaryMatches:(id)arg0 eventDictionary:(id)arg1 ;
-(CGFloat)numberOfReceivedEvents;
-(id)init;
-(void)resetEvents;
-(void)sendEventWithMetricName:(id)arg0 eventDictionary:(id)arg1 ;


@end


#endif