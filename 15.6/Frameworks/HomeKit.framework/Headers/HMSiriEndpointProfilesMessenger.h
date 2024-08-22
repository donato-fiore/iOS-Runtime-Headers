// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMSIRIENDPOINTPROFILESMESSENGER_H
#define HMSIRIENDPOINTPROFILESMESSENGER_H

@class NSString, HMFMessageDispatcher, NSUUID;
@protocol HMFLogging;

#import <Foundation/Foundation.h>


@interface HMSiriEndpointProfilesMessenger : NSObject <HMFLogging>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, copy) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (readonly) Class superclass;


+(id)logCategory;
+(id)messageTargetUUIDWithHomeUUID:(id)arg0 ;
-(id)initWithMessageTargetUUID:(id)arg0 messageDispatcher:(id)arg1 ;
-(id)logIdentifier;
-(void)sendApplyOnboardingSelectionsRequestWithAccessoryUUID:(id)arg0 onboardingSelections:(id)arg1 completionHandler:(id)arg2 ;
-(void)sendDeleteSiriHistoryRequestWithAccessoryUUID:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif