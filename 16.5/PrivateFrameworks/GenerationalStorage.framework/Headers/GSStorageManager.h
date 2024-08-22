// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GSSTORAGEMANAGER_H
#define GSSTORAGEMANAGER_H


#import <Foundation/Foundation.h>


@interface GSStorageManager : NSObject



+(BOOL)_isPermanentStorageSupportedForFD:(int)arg0 error:(*id)arg1 ;
+(BOOL)_isPermanentStorageSupportedForStatFSInfo:(struct statfs *)arg0 error:(*id)arg1 ;
+(id)manager;
+(void)initialize;
-(BOOL)deallocateDocumentIDOfItemAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)isItemAtURLInsidePermanentStorage:(id)arg0 error:(*id)arg1 ;
-(BOOL)isItemAtURLValidInsidePermanentStorage:(id)arg0 error:(*id)arg1 ;
-(BOOL)isPermanentStorageSupportedAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)mayPermanentStorageBeSupportedAtURL:(id)arg0 error:(*id)arg1 ;
-(BOOL)mayPermanentStorageBeSupportedWithFD:(int)arg0 error:(*id)arg1 ;
-(BOOL)removeTemporaryStorage:(id)arg0 error:(*id)arg1 ;
-(id)additionForItemAtURL:(id)arg0 forPersistentIdentifier:(id)arg1 error:(*id)arg2 ;
-(id)permanentStorageForItemAtURL:(id)arg0 allocateIfNone:(BOOL)arg1 error:(*id)arg2 ;
-(id)persistentIdentifierInStorage:(id)arg0 forAdditionNamed:(id)arg1 inNameSpace:(id)arg2 ;
-(id)stagingPrefixForDocumentID:(id)arg0 ;
-(id)temporaryStorageForItemAtURL:(id)arg0 locatedAtURL:(id)arg1 error:(*id)arg2 ;
-(void)_connectionWithDaemonWasLost;


@end


#endif