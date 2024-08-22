// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BLTSUBSCRIBERREMOTECLIENT_H
#define BLTSUBSCRIBERREMOTECLIENT_H

@class NSXPCConnection, NSString;
@protocol BLTPingSubscribing;

#import <Foundation/Foundation.h>


@interface BLTSubscriberRemoteClient : NSObject <BLTPingSubscribing>



@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)initWithConnection:(id)arg0 ;
-(id)sectionIDs;
-(id)sectionIDsForBulletins;
-(id)subscriptionInfos;
-(void)dealloc;
-(void)pingSubscriberDidLoad;
-(void)pingWithBulletin:(id)arg0 ;
-(void)pingWithBulletin:(id)arg0 ack:(id)arg1 ;
-(void)pingWithRecordID:(id)arg0 forSectionID:(id)arg1 ;
-(void)pingWithRecordID:(id)arg0 forSectionID:(id)arg1 ack:(id)arg2 ;


@end


#endif