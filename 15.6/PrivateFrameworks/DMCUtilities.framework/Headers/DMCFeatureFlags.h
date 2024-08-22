// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMCFEATUREFLAGS_H
#define DMCFEATUREFLAGS_H


#import <Foundation/Foundation.h>


@interface DMCFeatureFlags : NSObject



+(BOOL)hasT2;
+(BOOL)isAppleInternal;
+(BOOL)isBYOD3rdPartyEnabled;
+(BOOL)isBYODAppleEnabled;
+(BOOL)isBYODEnabled;
+(BOOL)isBYODRestoreFromBackupEnabled;
+(BOOL)isBYODSpyglassEnabled;
+(BOOL)isClassCIdentitiesEnabled;
+(BOOL)isDeviceManagementAndVPNUIEnabled;
+(BOOL)isHRNEnabled;
+(BOOL)isManagedRestoreEnabled;
+(BOOL)isORGODeviceSubscriptionEnabled;
+(BOOL)isORGOEnabled;
+(BOOL)isORGOUserSubscriptionEnabled;
+(BOOL)isRMDMEnabled;
+(BOOL)isSecondaryAccountListUIEnabled;
+(BOOL)isUAORGOEnabled;
+(BOOL)isUserEnrollmentShowsManagedAccountEnabled;


@end


#endif