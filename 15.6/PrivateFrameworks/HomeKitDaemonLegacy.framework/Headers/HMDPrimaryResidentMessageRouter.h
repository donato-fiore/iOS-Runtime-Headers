// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDPRIMARYRESIDENTMESSAGEROUTER_H
#define HMDPRIMARYRESIDENTMESSAGEROUTER_H

@class HMFObject, NSString, HMFMessageDispatcher;
@protocol HMFLogging, HMDMessageRouter, HMDPrimaryResidentMessageRouterDataSource;


#import "HMDPrimaryResidentMessageRouterMetricsDispatcher.h"

@interface HMDPrimaryResidentMessageRouter : HMFObject <HMFLogging, HMDMessageRouter>



@property (weak) NSObject<HMDPrimaryResidentMessageRouterDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly) HMDPrimaryResidentMessageRouterMetricsDispatcher *metricsDispatcher; // ivar: _metricsDispatcher
@property (readonly) Class superclass;


+(id)logCategory;
-(id)dataSourcePrimaryResidentDeviceWithMessage:(id)arg0 ;
-(id)initWithMessageDispatcher:(id)arg0 metricsDispatcher:(id)arg1 ;
-(void)relayMessage:(id)arg0 device:(id)arg1 ;
-(void)routeMessage:(id)arg0 allowRemoteRelayFromPrimary:(BOOL)arg1 localHandler:(id)arg2 ;
-(void)routeMessage:(id)arg0 localHandler:(id)arg1 ;


@end


#endif