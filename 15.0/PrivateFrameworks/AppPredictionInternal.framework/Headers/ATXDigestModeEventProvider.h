// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXDIGESTMODEEVENTPROVIDER_H
#define ATXDIGESTMODEEVENTPROVIDER_H

@protocol ATXNotificationSettingsReaderProtocol;


#import "ATXModeTransitionModeEventProvider.h"

@interface ATXDigestModeEventProvider : ATXModeTransitionModeEventProvider {
    id<ATXNotificationSettingsReaderProtocol> *_notificationSettingsReader;
}




-(BOOL)isEventFromProvider:(id)arg0 ;
-(id)_digestTimes;
-(id)_removeOverlapFromSessions:(id)arg0 ;
-(id)aggregationEventsFromEvent:(id)arg0 ;
-(id)biomePublisherWithBookmark:(id)arg0 ;
-(id)dateIntervalFromEvent:(id)arg0 ;
-(id)init;
-(id)initWithMode:(NSUInteger)arg0 ;
-(id)initWithMode:(NSUInteger)arg0 notificationSettingsReader:(id)arg1 ;
-(void)_addDigestSessionForDate:(id)arg0 deliveryComponents:(id)arg1 mode:(NSUInteger)arg2 toArray:(id)arg3 ;


@end


#endif