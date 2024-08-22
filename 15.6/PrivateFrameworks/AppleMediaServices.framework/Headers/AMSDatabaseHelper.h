// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSDATABASEHELPER_H
#define AMSDATABASEHELPER_H


#import <Foundation/Foundation.h>


@interface AMSDatabaseHelper : NSObject



+(BOOL)_addSkipBackupAttribute:(BOOL)arg0 forURL:(id)arg1 ;
+(BOOL)removeDatabaseForCachePath:(id)arg0 ;
+(BOOL)removeDatabaseForDataVaultPath:(id)arg0 ;
+(id)_cachesURLForCachePath:(id)arg0 ;
+(id)_dataVaultURLForDataVaultPath:(id)arg0 ;
+(id)_databaseNameForType:(NSInteger)arg0 ;
+(id)databaseFolderNameForType:(NSInteger)arg0 ;
+(id)databasePathForCachePath:(id)arg0 type:(NSInteger)arg1 ;
+(id)databasePathForDataVaultPath:(id)arg0 type:(NSInteger)arg1 ;
+(void)_applyProtectionClassForDirectoryAtURL:(id)arg0 ;


@end


#endif