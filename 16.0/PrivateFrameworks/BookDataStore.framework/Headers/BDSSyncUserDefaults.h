// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BDSSYNCUSERDEFAULTS_H
#define BDSSYNCUSERDEFAULTS_H


#import <Foundation/Foundation.h>


@interface BDSSyncUserDefaults : NSObject



+(BOOL)_isBundleIdentifierInArray:(struct __CFArray *)arg0 ;
+(BOOL)_isServiceDisabledAlternative:(struct __CFString *)arg0 ;
+(BOOL)_isServiceEnabledAlternative:(struct __CFString *)arg0 ;
+(BOOL)isCloudKitSyncOptedIn;
+(BOOL)isGlobalICloudDriveSyncOptedIn;
+(BOOL)isICloudDriveSyncOptedIn;
+(BOOL)isSignedIntoICloud;
+(id)_stateForLog;
+(id)iCloudIdentity;
+(id)makeOSStateHandler;
+(void)_setService:(struct __CFString *)arg0 enabled:(BOOL)arg1 ;


@end


#endif