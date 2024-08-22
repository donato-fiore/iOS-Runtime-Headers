// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLFILESYSTEMVOLUMEMANAGER_H
#define PLFILESYSTEMVOLUMEMANAGER_H

@class NSFileManager, NSMutableDictionary, NSMapTable;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PLFileSystemVolumeManager : NSObject {
    NSObject<OS_dispatch_queue> *_synchronizationQueue;
    NSFileManager *_fileManager;
    NSMutableDictionary *_mountedVolumeURLsByUuid;
    NSMutableDictionary *_registeredFileSystemVolumesByUuid;
    NSMapTable *_mocsByVolume;
}




+(id)sharedFileSystemVolumeManager;
-(id)initSharedVolumeManager;
-(id)volumeForURL:(id)arg0 context:(id)arg1 ;
-(void)_updateMountedVolumeURLs;
-(void)_updateOfflineStates;
-(void)dealloc;
-(void)registerPLFileSystemVolume:(id)arg0 ;
-(void)unregisterPLFileSystemVolume:(id)arg0 ;


@end


#endif