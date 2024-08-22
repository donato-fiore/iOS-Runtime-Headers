// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HMACCESSORYSETTINGSMESSENGER_H
#define HMACCESSORYSETTINGSMESSENGER_H

@class NSArray, NSString, HMFMessageDispatcher, NSUUID;
@protocol HMFLogging, HMFObject;

#import <Foundation/Foundation.h>

#import "HMAccessorySettingsMetricsDispatcher.h"

@interface HMAccessorySettingsMessenger : NSObject <HMFLogging, HMFObject>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) HMFMessageDispatcher *messageDispatcher; // ivar: _messageDispatcher
@property (readonly, copy) NSUUID *messageTargetUUID; // ivar: _messageTargetUUID
@property (readonly) HMAccessorySettingsMetricsDispatcher *metricsDispatcher; // ivar: _metricsDispatcher
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;


+(id)logCategory;
+(id)messageTargetUUIDWithHomeUUID:(id)arg0 ;
-(id)initWithMessageDispatcher:(id)arg0 messageTargetUUID:(id)arg1 metricsDispatcher:(id)arg2 ;
-(id)logIdentifier;
-(void)sendFetchAccessorySettingsRequestWithAccessoryUUID:(id)arg0 keyPaths:(id)arg1 completionHandler:(id)arg2 ;
-(void)sendUpdateAccessorySettingRequestWithAccessoryUUID:(id)arg0 keyPath:(id)arg1 settingValue:(id)arg2 completionHandler:(id)arg3 ;
-(void)submitMetricEventWithMessage:(id)arg0 error:(id)arg1 ;


@end


#endif