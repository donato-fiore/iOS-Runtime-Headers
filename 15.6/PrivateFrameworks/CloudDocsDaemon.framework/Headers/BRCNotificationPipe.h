// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BRCNOTIFICATIONPIPE_H
#define BRCNOTIFICATIONPIPE_H

@class BRNotificationQueue, NSMutableDictionary, NSString, NSMutableSet, NSSet, NSHashTable, BRFileObjectID;
@protocol BRItemNotificationSending, BRCListOperationDelegate, BRItemNotificationReceiving, OS_dispatch_group, BRCNotificationPipeDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "BRCXPCClient.h"
#import "BRCDataOrDocsScopeGatherer.h"
#import "BRCListDirectoryContentsOperation.h"
#import "BRCNotificationManager.h"
#import "BRCItemGlobalID.h"

@interface BRCNotificationPipe : NSObject <BRItemNotificationSending, BRCListOperationDelegate>

 {
    id<BRItemNotificationReceiving> *_receiver;
    BRNotificationQueue *_notifs;
    id *_boostReply;
    BRCXPCClient *_client;
    BRCDataOrDocsScopeGatherer *_gatherer;
    NSObject<OS_dispatch_group> *_gatherGroup;
    BOOL _hasUpdatesInFlight;
    BOOL _volumeIsCaseSensitive;
    NSMutableDictionary *_pendingProgressUpdatesByID;
    BOOL _hasProgressUpdatesInFlight;
    BRCListDirectoryContentsOperation *_listOp;
    unsigned short _watchItemOptions;
    int _watchKind;
    NSString *_watchNamePrefix;
    NSString *_watchForBundleID;
    NSMutableSet *_externalAppLibraries;
    NSSet *_watchedAppLibraries;
    NSHashTable *_recursiveScopeListOps;
    NSSet *_watchedAppLibraryIDs;
    NSUInteger _watchedAppLibrariesFlags;
    NSUInteger _initialGatherMaxRank;
    NSUInteger _secondaryGatherMaxRank;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<BRCNotificationPipeDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) BRCNotificationManager *manager; // ivar: _manager
@property (retain) BRCItemGlobalID *oldWatchedAncestorItemGlobalID; // ivar: _oldWatchedAncestorItemGlobalID
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (retain) BRFileObjectID *watchedAncestorFileObjectID; // ivar: _watchedAncestorFileObjectID
@property (retain) NSString *watchedAncestorFilenameToItem; // ivar: _watchedAncestorFilenameToItem
@property (retain) BRCItemGlobalID *watchedAncestorItemGlobalID; // ivar: _watchedAncestorItemGlobalID


-(BOOL)isWatchingGlobalItemID:(id)arg0 ;
-(id)_initWithManager:(id)arg0 startingRank:(NSUInteger)arg1 ;
-(id)initWithReceiver:(id)arg0 manager:(id)arg1 startingRank:(NSUInteger)arg2 ;
-(id)initWithXPCReceiver:(id)arg0 client:(id)arg1 manager:(id)arg2 startingRank:(NSUInteger)arg3 ;
-(int)_isInterestingUpdate:(id)arg0 ;
-(void)__flush;
-(void)_addIntraContainerUpdatesFromInterContainerUpdate:(id)arg0 toArray:(id)arg1 ;
-(void)_flushProgressUpdates;
-(void)_gatherIfNeededAndFlushAsync;
-(void)_prepareForSecondGatherWithRank:(NSUInteger)arg0 ;
-(void)_processProgressUpdates:(id)arg0 ;
-(void)_registerAsWatcherIfNeeded;
-(void)_stopWatchingItems;
-(void)_triggerImmediateReadOfDocumentIfNeeded;
-(void)addDequeueCallback:(id)arg0 ;
-(void)addNotification:(id)arg0 asDead:(BOOL)arg1 ;
-(void)boostPriority:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateIfWatchingAppLibraryIDs:(id)arg0 ;
-(void)invalidateReceiverIfWatchingAppLibraryIDs:(id)arg0 ;
-(void)listOperation:(id)arg0 wasReplacedByOperation:(id)arg1 ;
-(void)processProgressUpdates:(id)arg0 ;
-(void)processUpdates:(id)arg0 withRank:(NSUInteger)arg1 ;
-(void)watchItemAtURL:(id)arg0 lookup:(id)arg1 options:(unsigned short)arg2 gatherReply:(id)arg3 ;
-(void)watchItemAtURL:(id)arg0 options:(unsigned short)arg1 gatherReply:(id)arg2 ;
-(void)watchItemInProcessAtURL:(id)arg0 options:(unsigned short)arg1 gatherReply:(id)arg2 ;
-(void)watchItemsNamesPrefixedBy:(id)arg0 inScopes:(unsigned short)arg1 appLibraryIDs:(id)arg2 gatherReply:(id)arg3 ;
-(void)watchScopes:(unsigned short)arg0 appLibraryIDs:(id)arg1 gatherReply:(id)arg2 ;
-(void)watchScopes:(unsigned short)arg0 gatherReply:(id)arg1 ;
-(void)watchScopes:(unsigned short)arg0 trustedAppLibraryIDs:(id)arg1 gatherReply:(id)arg2 ;


@end


#endif