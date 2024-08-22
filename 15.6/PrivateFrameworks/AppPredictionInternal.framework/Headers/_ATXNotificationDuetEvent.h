// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _ATXNOTIFICATIONDUETEVENT_H
#define _ATXNOTIFICATIONDUETEVENT_H

@class NSString, NSDate, NSTimeZone;
@protocol ATXTimedEventProtocol;

#import <Foundation/Foundation.h>


@interface _ATXNotificationDuetEvent : NSObject <ATXTimedEventProtocol>



@property (readonly, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *eventTime; // ivar: _eventTime
@property (readonly, nonatomic) NSInteger eventType; // ivar: _eventType
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *notificationId; // ivar: _notificationId
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSTimeZone *timeZone; // ivar: _timeZone


-(BOOL)isAcceptEvent;
-(BOOL)isReceiveEvent;
-(BOOL)isRejectEvent;
-(id)init;
-(id)initWithBundleId:(id)arg0 notificationId:(id)arg1 eventTime:(id)arg2 timeZone:(id)arg3 eventType:(id)arg4 ;
-(id)prettyRepresentation;


@end


#endif