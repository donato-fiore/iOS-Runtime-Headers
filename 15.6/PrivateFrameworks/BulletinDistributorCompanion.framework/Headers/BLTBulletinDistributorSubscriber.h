// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BLTBULLETINDISTRIBUTORSUBSCRIBER_H
#define BLTBULLETINDISTRIBUTORSUBSCRIBER_H

@class NSMutableDictionary, NSXPCConnection, NSString, NSSet;
@protocol BLTPingService, OS_dispatch_queue, BLTPingSubscribing, BLTBulletinDistributorSubscriberDelegate, BLTBulletinDistributorSubscriberDeviceDelegate;

#import <Foundation/Foundation.h>


@interface BLTBulletinDistributorSubscriber : NSObject <BLTPingService>

 {
    NSMutableDictionary *_subscriptions;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSObject<BLTPingSubscribing> *client; // ivar: _client
@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (weak) NSObject<BLTBulletinDistributorSubscriberDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak) NSObject<BLTBulletinDistributorSubscriberDeviceDelegate> *deviceDelegate; // ivar: _deviceDelegate
@property (readonly) NSUInteger hash;
@property (copy) NSString *machServiceName; // ivar: _machServiceName
@property (readonly, nonatomic) NSSet *sectionIDs;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithClient:(id)arg0 ;
-(void)_connectIfNecessary;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg0 completion:(id)arg1 ;
-(void)getWillNanoPresentNotificationForSectionID:(id)arg0 subsectionIDs:(id)arg1 completion:(id)arg2 ;
-(void)pingWithBulletin:(id)arg0 ack:(id)arg1 ;
-(void)pingWithRecordID:(id)arg0 forSectionID:(id)arg1 ;
-(void)sendBulletinSummary:(id)arg0 ;
-(void)subscribeToSectionID:(id)arg0 forFullBulletins:(BOOL)arg1 withAck:(BOOL)arg2 ackAllowedOnLocalConnection:(BOOL)arg3 ;
-(void)subscribeWithMachServiceName:(id)arg0 ;
-(void)unsubscribeFromSectionID:(id)arg0 ;


@end


#endif