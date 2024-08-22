// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HMDPERSISTENTSTORE_H
#define HMDPERSISTENTSTORE_H

@class HMFObject, NSString;
@protocol HMDPersistentStore;



@interface HMDPersistentStore : HMFObject <HMDPersistentStore>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)archiveMetadata:(id)arg0 ;
+(BOOL)deserializeHomeData:(*id)arg0 localStorage:(BOOL)arg1 fromData:(id)arg2 ;
+(BOOL)deserializeHomeData:(*id)arg0 usingLocalStorage:(BOOL)arg1 fromData:(id)arg2 forHH2Migration:(BOOL)arg3 ;
+(BOOL)hasControllerKeyWithUsername:(id)arg0 error:(*id)arg1 ;
+(BOOL)removeLegacyHomeArchive:(*id)arg0 ;
+(BOOL)writeDictionary:(id)arg0 toStorePath:(id)arg1 ;
+(id)_writeData:(id)arg0 toStorePath:(id)arg1 dataLabel:(id)arg2 ;
+(id)archiveCloudServerTokenData:(id)arg0 ;
+(id)archiveDataStoreWithPath:(id)arg0 serializedData:(id)arg1 forKey:(id)arg2 ;
+(id)archiveHomeData:(id)arg0 toLocation:(id)arg1 ;
+(id)archiveHomeDataForTransaction:(id)arg0 ;
+(id)archiveHomeDataLegacy:(id)arg0 ;
+(id)archiveHomeDataLegacy:(id)arg0 toLocation:(id)arg1 ;
+(id)archiveIDSDataSyncJournal:(id)arg0 ;
+(id)controllerUsernameForPairingIdentity:(id)arg0 error:(*id)arg1 ;
+(id)decryptData:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
+(id)decryptDataWithControllerKey:(id)arg0 totalKeysFound:(*NSUInteger)arg1 deleteExtraKeys:(BOOL)arg2 allowControllerIdentifierToChange:(BOOL)arg3 controllerIdentifierChanged:(*BOOL)arg4 successfulKeyUserName:(*id)arg5 error:(*id)arg6 ;
+(id)encryptData:(id)arg0 withKey:(id)arg1 error:(*id)arg2 ;
+(id)encryptDataWithControllerKey:(id)arg0 error:(*id)arg1 ;
+(id)loadBuiltinPlainMetadataDictionary;
+(id)loadPlainMetadataDictionary;
+(id)serializeHomeData:(id)arg0 localStorage:(BOOL)arg1 remoteDeviceOnSameAccount:(BOOL)arg2 ;
+(id)unarchiveBulletinBoard;
+(id)unarchiveDataStoreWithPath:(id)arg0 forKey:(id)arg1 ;
+(id)unarchiveHomeData:(*id)arg0 decryptionFailed:(*BOOL)arg1 fromLocation:(id)arg2 successfulKeyUserName:(*id)arg3 forHH2Migration:(BOOL)arg4 ;
+(id)unarchiveHomeData:(*id)arg0 decryptionFailed:(*BOOL)arg1 successfulKeyUserName:(*id)arg2 ;
+(id)unarchiveIDSDataSyncJournal;
+(id)unarchiveVendorStore;
+(id)writeData:(id)arg0 toStorePath:(id)arg1 dataLabel:(id)arg2 ;
+(void)archiveBulletinBoard:(id)arg0 ;
+(void)archiveVendorStore:(id)arg0 ;
+(void)cleanupKeysInStore;
+(void)removeServerTokenDataFile;
+(void)removeTransactionJournal;
+(void)resetConfiguration:(NSUInteger)arg0 ;


@end


#endif