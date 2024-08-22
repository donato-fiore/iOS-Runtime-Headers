// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LIVEFSFPENUMERATORDATACONTAINER_H
#define LIVEFSFPENUMERATORDATACONTAINER_H

@class NSPointerArray, NSString, LiveFSRBTree;
@protocol LiveFSVolumeClientUpdate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "LiveFSFPExtensionHelper.h"
#import "LiveFSFPItemHelper.h"

@interface LiveFSFPEnumeratorDataContainer : NSObject <LiveFSVolumeClientUpdate>

 {
    LiveFSFPExtensionHelper *ext;
    BOOL historyReset;
    BOOL isActive;
    NSPointerArray *ourEnumerators;
    NSObject<OS_dispatch_queue> *updateQueue;
}


@property BOOL addParent; // ivar: _addParent
@property BOOL addedToExtension; // ivar: _addedToExtension
@property (readonly, retain) NSString *containerID; // ivar: _containerID
@property (readonly, retain) LiveFSRBTree *contentsSortedByDate; // ivar: _contentsSortedByDate
@property (readonly, retain) LiveFSRBTree *contentsSortedByName; // ivar: _contentsSortedByName
@property (readonly) LiveFSFPItemHelper *enumeratedItem; // ivar: _enumeratedItem
@property (retain) NSString *enumeratedItemID; // ivar: _enumeratedItemID
@property (readonly) BOOL hasPersistentIDs; // ivar: _hasPersistentIDs
@property (readonly) BOOL isDir; // ivar: _isDir
@property (readonly) BOOL isVolumeWide; // ivar: _isVolumeWide
@property int state; // ivar: _state


-(id)ensureConnectedForUpdates;
-(id)initForExtension:(id)arg0 item:(id)arg1 ;
-(id)initWithEnumeratedItem:(id)arg0 fileHandle:(id)arg1 extension:(id)arg2 ;
-(id)loadContents;
// -(id)readDirBuffersForBufferBlock:(id)arg0 andEntryBlock:(unk)arg1  ;
-(void)addEnumerator:(id)arg0 ;
-(void)applyAddAcrossEnumerators:(id)arg0 newName:(id)arg1 forSelf:(BOOL)arg2 ;
-(void)applyDeleteAcrossEnumerators:(id)arg0 newTombstone:(id)arg1 toSelf:(BOOL)arg2 ;
-(void)applyParentUpdateAcrossEnumerators;
-(void)dealloc;
-(void)deletedItem:(id)arg0 name:(id)arg1 how:(int)arg2 interestedItem:(id)arg3 ;
-(void)deletedName:(id)arg0 item:(id)arg1 how:(int)arg2 interestedItem:(id)arg3 ;
-(void)dispatchOntoUpdateQueue:(id)arg0 ;
-(void)doProcessItemDeleted:(id)arg0 ;
-(void)doProcessItemUpdated:(id)arg0 ;
-(void)doShutdown;
-(void)doShutdownOnEnumeratorHelperQueue;
-(void)dropEnumerator:(id)arg0 ;
-(void)dropInterestForEnumeratedItem:(id)arg0 ;
-(void)handleEnumeratedItemChanged;
-(void)historyResetItem:(id)arg0 interestedItem:(id)arg1 ;
-(void)historyResetName:(id)arg0 interestedItem:(id)arg1 ;
-(void)invalidate;
-(void)makeAllEnumeratorsDead;
-(void)renamedItem:(id)arg0 named:(id)arg1 fromDirectory:(id)arg2 intoDirectory:(id)arg3 newName:(id)arg4 atopItem:(id)arg5 ;
-(void)resetAllEnumerators;
-(void)updatedItem:(id)arg0 name:(id)arg1 interestedItem:(id)arg2 ;
-(void)updatedName:(id)arg0 interestedItem:(id)arg1 ;
-(void)updatesDoneFor:(id)arg0 ;
-(void)volumeWideDeletedName:(id)arg0 interestedItem:(id)arg1 ;
-(void)volumeWideUpdatedName:(id)arg0 interestedItem:(id)arg1 ;


@end


#endif