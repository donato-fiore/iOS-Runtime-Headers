// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PSGBACKUPUTILS_H
#define PSGBACKUPUTILS_H


#import <Foundation/Foundation.h>


@interface PSGBackupUtils : NSObject



+(BOOL)hasValidDisplayNameOfDomain:(id)arg0 ;
+(BOOL)isDomainNameIgnored:(id)arg0 ;
+(BOOL)isDomainWhitelisted:(id)arg0 ;
+(BOOL)isiCloudPhotosEnabled;
+(BOOL)shouldIgnoreBundleId:(id)arg0 ;
+(id)alertBodyForBackupDisabledAppsInfo:(id)arg0 ofType:(NSUInteger)arg1 ;
+(id)alertTitleForBackupDisabledAppsInfo:(id)arg0 ;
+(id)bundleIdForDomainInfo:(id)arg0 ;
+(id)displayNameForDomainInfo:(id)arg0 ;
+(void)configureAlertMessageOfType:(NSUInteger)arg0 AndTitleForBackUpDisabledApps:(id)arg1 completion:(id)arg2 ;
+(void)fetchBackupDisabledAppsWithBackupManager:(id)arg0 completion:(id)arg1 ;


@end


#endif