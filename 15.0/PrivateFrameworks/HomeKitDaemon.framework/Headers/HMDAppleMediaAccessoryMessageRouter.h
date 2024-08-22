// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMDAPPLEMEDIAACCESSORYMESSAGEROUTER_H
#define HMDAPPLEMEDIAACCESSORYMESSAGEROUTER_H

@class HMFObject, NSString, NSUUID, HMFMessageDispatcher;
@protocol HMFLogging, HMDMessageRouter, HMDAppleMediaAccessoryMessageRouterDataSource;



@interface HMDAppleMediaAccessoryMessageRouter : HMFObject <HMFLogging, HMDMessageRouter>



@property (weak) NSObject<HMDAppleMediaAccessoryMessageRouterDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *identifier; // ivar: _identifier
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithIdentifier:(id)arg0 messageDispatcher:(id)arg1 ;
-(id)logIdentifier;
-(void)relayMessage:(id)arg0 device:(id)arg1 ;
-(void)routeMessage:(id)arg0 localHandler:(id)arg1 ;


@end


#endif