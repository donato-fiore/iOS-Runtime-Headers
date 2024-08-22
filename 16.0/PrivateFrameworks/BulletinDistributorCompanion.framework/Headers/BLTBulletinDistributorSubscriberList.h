// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BLTBULLETINDISTRIBUTORSUBSCRIBERLIST_H
#define BLTBULLETINDISTRIBUTORSUBSCRIBERLIST_H

@class NSString, NSMutableArray;
@protocol BLTBulletinDistributorSubscriberDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface BLTBulletinDistributorSubscriberList : NSObject <BLTBulletinDistributorSubscriberDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (retain, nonatomic) NSMutableArray *subscribers; // ivar: _subscribers
@property (readonly) Class superclass;


-(BOOL)hasSubscribersForSectionID:(id)arg0 ;
-(id)init;
-(id)subscribedSectionIDs;
-(void)_removeSubscribersWithMachServiceName:(id)arg0 exceptFor:(id)arg1 ;
-(void)addSubscriber:(id)arg0 ;
-(void)pingWithBulletin:(id)arg0 ack:(id)arg1 ;
-(void)pingWithRecordID:(id)arg0 forSectionID:(id)arg1 ;
-(void)removeSubscriber:(id)arg0 ;
-(void)subscriber:(id)arg0 subscribedWithMachServiceName:(id)arg1 ;


@end


#endif