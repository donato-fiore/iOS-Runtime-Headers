// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDREMOTEMESSAGENOTIFICATIONS_H
#define HMDREMOTEMESSAGENOTIFICATIONS_H

@class HMFObject, NSMapTable;
@protocol HMFLocking;



@interface HMDRemoteMessageNotifications : HMFObject {
    id<HMFLocking> *_lock;
}


@property (retain, nonatomic) NSMapTable *sessionNotificationPayloads; // ivar: _sessionNotificationPayloads


+(BOOL)messageExpectsNotificationResponse:(id)arg0 ;
+(id)messagesWithNotificationResponses;
+(void)initialize;
-(id)_notificationPayloadsForDevice:(id)arg0 ;
-(id)description;
-(id)init;
-(id)notificationPayloadWithIdentifier:(id)arg0 device:(id)arg1 ;
-(void)addNotificationPayload:(id)arg0 identifier:(id)arg1 device:(id)arg2 ;
-(void)clearNotificationsForDevice:(id)arg0 ;
-(void)removeNotificationPayloadWithIdentifier:(id)arg0 device:(id)arg1 ;


@end


#endif