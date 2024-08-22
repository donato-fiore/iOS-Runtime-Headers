// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLAPPDELETION_H
#define PLAPPDELETION_H


#import <Foundation/Foundation.h>


@interface PLAppDeletion : NSObject



+(BOOL)changeClassProtection:(int)arg0 ;
+(BOOL)changePermissionForDirectory:(id)arg0 withProtectionLevel:(id)arg1 ;
+(BOOL)changePermissionsForFilesInDirectory:(id)arg0 withProtectionLevel:(id)arg1 ;
+(BOOL)deferXPCActivity:(id)arg0 ;
+(BOOL)finishXPCActivity:(id)arg0 ;
+(BOOL)setFileProtectionForPath:(id)arg0 withLevel:(id)arg1 ;
+(id)appDeletionCriteria;
+(id)constructUpdateQueries;
+(id)filePermissionCriteria;
+(id)getProtectionLevel:(int)arg0 ;
+(id)pluginsForBundleID:(id)arg0 ;
+(id)processNameForBundleID:(id)arg0 ;
+(void)addFilesToList:(id)arg0 ;
+(void)constructAppReferenceMapping;
+(void)constructAppReferenceTableList;
+(void)constructFileNames;
+(void)decompressFile:(id)arg0 withDirPath:(id)arg1 ;
+(void)deleteAppReferenceMapping;
+(void)deleteAppReferences:(id)arg0 ;
+(void)deleteAppReferencesFromCompressedFiles:(id)arg0 ;
+(void)deleteAppReferencesInCurrentPowerlog;
+(void)handleAppDeletionXPCActivityCallback:(id)arg0 ;
+(void)handleFilePermissionXPCActivityCallback:(id)arg0 ;
+(void)iterateAgents;
+(void)iterateServices;
+(void)maskAssociatedPlugins:(id)arg0 withMaskedDictionary:(id)arg1 ;
+(void)maskProcessName:(id)arg0 withMaskedDictionary:(id)arg1 ;
+(void)populateIdentifiers:(id)arg0 ;
+(void)registerAppDeletionActivity;
+(void)registerFilePermissionActivity;
+(void)resetStateVariables;
+(void)setup;
+(void)traverseVersionDirectory:(id)arg0 withBlock:(id)arg1 ;
+(void)updateQuery:(id)arg0 ;


@end


#endif