// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MBAPP_H
#define MBAPP_H

@class NSString, NSArray, NSDictionary;


#import "MBContainer.h"

@interface MBApp : MBContainer

@property (readonly, nonatomic) NSString *bundleDir;
@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) NSString *bundleVersion;
@property (readonly, nonatomic) NSArray *containers;
@property (readonly, nonatomic) NSDictionary *entitlements;
@property (readonly, nonatomic) NSString *entitlementsRelativePath;
@property (readonly, nonatomic) NSArray *groups;
@property (readonly, nonatomic) BOOL isAppUpdating;
@property (readonly, nonatomic) BOOL isPlaceholder;
@property (readonly, nonatomic) BOOL isSystemApp;
@property (readonly, nonatomic) NSArray *plugins;


+(BOOL)unzipPlaceholderDomainZipFile:(id)arg0 atDirectory:(id)arg1 temporaryPath:(id)arg2 ;
+(id)appWithBundleID:(id)arg0 ;
+(id)appWithPropertyList:(id)arg0 ;
+(id)safeHarborWithPath:(id)arg0 ;
-(BOOL)_writeDeviceAppropriateIconToPath:(id)arg0 fromBundlePath:(id)arg1 ;
-(id)_placeholderRelativePathsToBackupAndRestoreWithCache:(id)arg0 ;
-(id)_resourceRelativePathsToBackupAndRestoreForRootDir:(id)arg0 relativePath:(id)arg1 ;
-(id)domain;
-(id)placeholderDomainWithCache:(id)arg0 ;
-(id)zipPlaceholderDomainWithDirectory:(id)arg0 ;


@end


#endif