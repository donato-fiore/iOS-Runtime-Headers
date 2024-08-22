// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMDDELEGATINGMESSAGEROUTER_H
#define HMDDELEGATINGMESSAGEROUTER_H

@class NSString, HMFMessageDispatcher, NSArray;
@protocol HMFLogging, HMDMessageRouter, HMDDelegatingMessageRouterDataSource;

#import <Foundation/Foundation.h>


@interface HMDDelegatingMessageRouter : NSObject <HMFLogging, HMDMessageRouter>



@property (weak) NSObject<HMDDelegatingMessageRouterDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly) NSArray *routers; // ivar: _routers
@property (readonly) Class superclass;


+(id)logCategory;
-(id)initWithMessageDispatcher:(id)arg0 routers:(id)arg1 ;
-(void)routeMessage:(id)arg0 allowRemoteRelayFromPrimary:(BOOL)arg1 localHandler:(id)arg2 ;
-(void)routeMessage:(id)arg0 localHandler:(id)arg1 ;


@end


#endif