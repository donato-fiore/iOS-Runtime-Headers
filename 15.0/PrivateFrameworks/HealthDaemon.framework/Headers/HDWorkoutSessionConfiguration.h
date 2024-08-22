// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HDWORKOUTSESSIONCONFIGURATION_H
#define HDWORKOUTSESSIONCONFIGURATION_H

@class NSString, NSUUID, HKWorkoutConfiguration;

#import <Foundation/Foundation.h>

#import "HDHealthStoreClient.h"

@interface HDWorkoutSessionConfiguration : NSObject

@property (readonly, nonatomic) HDHealthStoreClient *client; // ivar: _client
@property (readonly, copy, nonatomic) NSString *clientApplicationIdentifier; // ivar: _clientApplicationIdentifier
@property (readonly, copy, nonatomic) NSString *clientProcessBundleIdentifier; // ivar: _clientProcessBundleIdentifier
@property (readonly, nonatomic) BOOL requiresCoreLocationAssertion; // ivar: _requiresCoreLocationAssertion
@property (readonly, copy, nonatomic) NSUUID *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) BOOL supports3rdPartyAOT; // ivar: _supports3rdPartyAOT
@property (readonly, nonatomic) BOOL supportsAppRelaunchForRecovery; // ivar: _supportsAppRelaunchForRecovery
@property (readonly, copy, nonatomic) HKWorkoutConfiguration *workoutConfiguration; // ivar: _workoutConfiguration


-(id)initWithSessionIdentifier:(id)arg0 workoutConfiguration:(id)arg1 client:(id)arg2 processBundleIdentifier:(id)arg3 applicationIdentifier:(id)arg4 requiresCoreLocationAssertion:(BOOL)arg5 supportsAppRelaunchForRecovery:(BOOL)arg6 supports3rdPartyAOT:(BOOL)arg7 ;


@end


#endif