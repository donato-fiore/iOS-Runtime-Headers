// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NRDATAFILEPATHS_H
#define NRDATAFILEPATHS_H


#import <Foundation/Foundation.h>


@interface NRDataFilePaths : NSObject



+(id)_pathToDevicePropertiesFile;
+(id)_pathToNanoRegistryPairingStorePathDirectory;
+(id)_pathToNanoRegistryStateDirectory;
+(id)_pathToNanoRegistryUnpairTriggerFileDirectory;
+(id)_pathToRecoveryStateFile;
+(id)_pathToSecureDevicePropertiesFile;
+(id)_pathToUnpairTriggerFile;
+(id)pathToNanoRegistryClassAFile;
+(id)pathToNanoRegistryHistoryFile;
+(id)pathToNanoRegistryHistoryRecoveryManagerFile:(id)arg0 ;
+(id)pathToNanoRegistryHistorySecurePropertiesFile;
+(id)pathToNanoRegistryMigrationRoutingSlip;
+(id)pathToNanoRegistryStateDirectory;
+(id)pathToNanoRegistryUDIDFile;


@end


#endif