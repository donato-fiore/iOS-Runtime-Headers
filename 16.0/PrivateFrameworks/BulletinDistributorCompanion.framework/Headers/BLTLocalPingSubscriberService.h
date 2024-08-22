// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTLOCALPINGSUBSCRIBERSERVICE_H
#define BLTLOCALPINGSUBSCRIBERSERVICE_H

@class NSString;
@protocol BLTPingService;

#import <Foundation/Foundation.h>

#import "BLTBulletinDistributorSubscriber.h"

@interface BLTLocalPingSubscriberService : NSObject <BLTPingService>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) BLTBulletinDistributorSubscriber *subscriber; // ivar: _subscriber
@property (readonly) Class superclass;


-(void)getWillNanoPresentNotificationForSectionID:(id)arg0 subsectionIDs:(id)arg1 completion:(id)arg2 ;
-(void)sendBulletinSummary:(id)arg0 ;
-(void)subscribeToSectionID:(id)arg0 forFullBulletins:(BOOL)arg1 withAck:(BOOL)arg2 ackAllowedOnLocalConnection:(BOOL)arg3 ;
-(void)subscribeWithMachServiceName:(id)arg0 ;
-(void)unsubscribeFromSectionID:(id)arg0 ;


@end


#endif