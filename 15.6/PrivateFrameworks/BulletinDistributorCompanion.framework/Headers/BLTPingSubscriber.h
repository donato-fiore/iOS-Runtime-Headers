// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTPINGSUBSCRIBER_H
#define BLTPINGSUBSCRIBER_H

@class NSString, NSMutableDictionary;
@protocol BLTPingSubscribing, BLTPingService;

#import <Foundation/Foundation.h>


@interface BLTPingSubscriber : NSObject <BLTPingSubscribing>

 {
    _opaque_pthread_mutex_t _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *pingHandlers; // ivar: _pingHandlers
@property (retain, nonatomic) NSObject<BLTPingService> *service; // ivar: _service
@property (readonly) Class superclass;


-(id)init;
-(id)initWithService:(id)arg0 ;
-(id)sectionIDs;
-(id)sectionIDsForBulletins;
-(id)subscriptionInfos;
-(void)_subscribeToSectionID:(id)arg0 pingHandler:(id)arg1 ackType:(NSUInteger)arg2 forFullBulletins:(BOOL)arg3 ;
-(void)_subscribeToSectionID:(id)arg0 pingHandler:(id)arg1 ackType:(NSUInteger)arg2 forFullBulletins:(BOOL)arg3 forNotifications:(BOOL)arg4 ;
-(void)dealloc;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg0 completion:(id)arg1 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg0 subsectionIDs:(id)arg1 completion:(id)arg2 ;
-(void)pingSubscriberDidLoad;
-(void)pingWithBulletin:(id)arg0 ;
-(void)pingWithBulletin:(id)arg0 ack:(id)arg1 ;
-(void)pingWithRecordID:(id)arg0 forSectionID:(id)arg1 ;
-(void)pingWithRecordID:(id)arg0 forSectionID:(id)arg1 ack:(id)arg2 ;
-(void)sendBulletinSummary:(id)arg0 forBulletin:(id)arg1 destinations:(NSUInteger)arg2 ;
-(void)subscribeToSectionID:(id)arg0 withBulletinAckForwardForAnyConnectionHandler:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg0 withBulletinAckForwardHandler:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg0 withBulletinAckHandler:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg0 withBulletinHandler:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg0 withNotificationAckForwardForAnyConnectionHandler:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg0 withNotificationAckForwardHandler:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg0 withNotificationAckHandler:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg0 withNotificationHandler:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg0 withPingAckForwardHandler:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg0 withPingAckHandler:(id)arg1 ;
-(void)subscribeToSectionID:(id)arg0 withPingHandler:(id)arg1 ;
-(void)subscribeWithMachServiceName:(id)arg0 ;
-(void)unsubscribeFromSectionID:(id)arg0 ;


@end


#endif