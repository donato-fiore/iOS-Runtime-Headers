// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDSIRIENDPOINTPROFILEMESSAGEHANDLER_H
#define HMDSIRIENDPOINTPROFILEMESSAGEHANDLER_H

@class NSString, NSUUID;
@protocol HMFLogging, HMDSiriEndpointProfileMessageHandlerDataSource;

#import <Foundation/Foundation.h>


@interface HMDSiriEndpointProfileMessageHandler : NSObject <HMFLogging>



@property (weak) NSObject<HMDSiriEndpointProfileMessageHandlerDataSource> *dataSource; // ivar: _dataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSUUID *homeUUID; // ivar: _homeUUID
@property (readonly) Class superclass;


+(id)logCategory;
-(id)deleteHistoryForAccessoryUUID:(id)arg0 onHubAccessories:(id)arg1 ;
-(id)deleteHistoryForAccessoryUUID:(id)arg0 onHubAccessory:(id)arg1 ;
-(id)initWithHomeUUID:(id)arg0 ;
-(id)logIdentifier;
-(void)handleSiriEndpointApplyOnboardingSelectionsRequestMessage:(id)arg0 ;
-(void)handleSiriEndpointDeleteSiriHistoryRequestMessage:(id)arg0 ;


@end


#endif