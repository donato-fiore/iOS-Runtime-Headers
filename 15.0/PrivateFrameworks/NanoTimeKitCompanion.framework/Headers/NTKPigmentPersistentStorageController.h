// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKPIGMENTPERSISTENTSTORAGECONTROLLER_H
#define NTKPIGMENTPERSISTENTSTORAGECONTROLLER_H

@class NSString;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NTKPigmentPersistentStorageController : NSObject {
    NSObject<OS_dispatch_queue> *_privateQueue;
    NSString *_rootDirectory;
}




+(id)faceColorRootFolder;
+(id)globalStoresFolder;
+(id)perDeviceFolder;
+(id)syncStoresFolder;
-(BOOL)createColorSyncFolderIfNeededForDeviceUUID:(id)arg0 ;
-(BOOL)createFolderIfNeeded:(id)arg0 ;
-(id)_sharedCollections;
-(id)colorDomainFilePath:(id)arg0 deviceUUID:(id)arg1 ;
-(id)colorSyncFolderPathWithDeviceUUID:(id)arg0 ;
-(id)device;
-(id)facePigmentSetForDomain:(id)arg0 sharedCollections:(id)arg1 ;
-(id)init;
-(id)initWithRootDirectory:(id)arg0 ;
-(id)readPigmentSetFromData:(id)arg0 sharedCollections:(id)arg1 ;
-(id)readSharedCollectionsFromData:(id)arg0 ;
-(id)serializeFacePigmentSet:(id)arg0 ;
-(id)sharedCollections;
-(id)transactionLockerFileNameForDeviceUUID:(id)arg0 ;
-(void)_writeData:(id)arg0 toFile:(id)arg1 ;
-(void)closeTransactionForDeviceUUID:(id)arg0 ;
-(void)deleteContent;
-(void)persistFacePigmentSet:(id)arg0 deviceUUID:(id)arg1 ;
-(void)persistFacePigmentSetData:(id)arg0 domain:(id)arg1 deviceUUID:(id)arg2 ;
-(void)persistSharedCollections:(id)arg0 deviceUUID:(id)arg1 ;
-(void)persistSharedCollectionsData:(id)arg0 deviceUUID:(id)arg1 ;
-(void)resetCache;
-(void)startTransactionForDeviceUUID:(id)arg0 ;


@end


#endif