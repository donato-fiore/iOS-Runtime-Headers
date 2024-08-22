// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKMANAGER_H
#define SKMANAGER_H

@class NSMutableSet, NSMutableDictionary, NSSet, NSXPCConnection, NSHashTable, NSArray, NSString;
@protocol SKManagerListener, OS_dispatch_queue;


#import "SKBaseManager.h"

@interface SKManager : SKBaseManager <SKManagerListener>

 {
    BOOL diskQueueStuck;
    BOOL _shouldBeBindingsSafe;
    NSMutableSet *allDisks;
    NSMutableDictionary *_diskOperationMap;
    NSSet *visibleRoles;
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_diskNotificationQueue;
    NSHashTable *_listeners;
    NSMutableDictionary *_listenersAppearedDisks;
    NSObject<OS_dispatch_queue> *_waitingForDiskQueue;
    NSMutableSet *_waitingForDiskSet;
    NSArray *_filesystems;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)isMountPointWithPath:(id)arg0 ;
+(id)defaultVisibleRoles;
+(id)sharedManager;
+(id)sharedManagerWithBindingsSafety:(BOOL)arg0 ;
+(id)syncSharedManager;
-(BOOL)isBusy;
-(id)_diskForPath:(id)arg0 ;
-(id)_diskForString:(id)arg0 ;
-(id)allDisks;
-(id)allDisksSet;
-(id)childDisksForWholeDisk:(id)arg0 ;
-(id)diskForBSDname:(id)arg0 ;
-(id)diskForPath:(id)arg0 ;
-(id)diskForString:(id)arg0 ;
-(id)diskForUUID:(id)arg0 ;
-(id)diskForVolumeName:(id)arg0 ;
-(id)filesystemWithSKType:(id)arg0 isCaseSensitive:(BOOL)arg1 isEncrypted:(BOOL)arg2 ;
-(id)filesystems;
-(id)formatableFileSystems;
-(id)initWithBindingSafety:(BOOL)arg0 ;
-(id)knownDiskForDictionary:(id)arg0 ;
-(id)knownDiskForDictionary:(id)arg0 waitingForDaemon:(BOOL)arg1 ;
-(id)knownDiskForDictionary:(id)arg0 waitingForDaemon:(BOOL)arg1 fromSet:(id)arg2 ;
-(id)knownDisksForDictionaries:(id)arg0 ;
-(id)knownDisksForDictionaries:(id)arg0 waitingForDaemon:(BOOL)arg1 ;
-(id)knownDisksForDictionaries:(id)arg0 waitingForDaemon:(BOOL)arg1 fromSet:(id)arg2 ;
-(id)newDiskWithDictionary:(id)arg0 ;
-(id)physicalStoresForAPFSVolume:(id)arg0 ;
-(id)visibleDisks;
-(id)visibleRoles;
-(id)volumesForAPFSPS:(id)arg0 ;
-(id)wholeDiskForDisk:(id)arg0 ;
-(void)_disksAppeared:(id)arg0 toListener:(id)arg1 ;
-(void)_initialPopulateCompleteForListener:(id)arg0 ;
-(void)addListener:(id)arg0 ;
-(void)disksAppeared:(id)arg0 ;
-(void)disksChanged:(id)arg0 ;
-(void)disksDisappeared:(id)arg0 ;
-(void)initialPopulateComplete;
// -(void)knownDiskForDictionary:(id)arg0 notify:(id)arg1 onQueue:(unk)arg2  ;
-(void)managerResumed;
-(void)managerStalled;
-(void)removeListener:(id)arg0 ;
-(void)setVisibleRoles:(id)arg0 ;
-(void)syncAllDisks;


@end


#endif