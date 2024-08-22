// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMBMUTABLECLOUDDATABASECONFIGURATION_H
#define HMBMUTABLECLOUDDATABASECONFIGURATION_H

@class CKOperationConfiguration, NSString;


#import "HMBCloudDatabaseConfiguration.h"

@interface HMBMutableCloudDatabaseConfiguration : HMBCloudDatabaseConfiguration

@property (copy) CKOperationConfiguration *defaultOperationConfiguration;
@property (getter=isManateeContainer) BOOL manateeContainer;
@property (nonatomic) BOOL registerForDBNotifications;
@property (copy) NSString *sourceApplicationBundleIdentifier;
@property NSInteger subscriptionPushRegistrationAction;


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif