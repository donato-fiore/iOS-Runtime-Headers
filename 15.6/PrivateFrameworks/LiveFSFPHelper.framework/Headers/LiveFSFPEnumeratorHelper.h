// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LIVEFSFPENUMERATORHELPER_H
#define LIVEFSFPENUMERATORHELPER_H

@class NSMutableSet, NSString;
@protocol NSFileProviderEnumerator;

#import <Foundation/Foundation.h>

#import "LiveFSFPExtensionHelper.h"
#import "LiveFSFPEnumeratorDataContainer.h"
#import "LiveFSFPItemHelper.h"

@interface LiveFSFPEnumeratorHelper : NSObject <NSFileProviderEnumerator>

 {
    LiveFSFPExtensionHelper *ext;
    BOOL historyReset;
    BOOL isActive;
    BOOL _sortedByDate;
    NSMutableSet *deletedItems;
    NSMutableSet *updatedItems;
    BOOL postedSelfUpdate;
    BOOL postedSelfDelete;
}


@property BOOL addParent; // ivar: _addParent
@property (readonly, retain) LiveFSFPEnumeratorDataContainer *dc; // ivar: _dc
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) LiveFSFPItemHelper *enumeratedItem; // ivar: _enumeratedItem
@property (readonly) BOOL hasPersistentIDs; // ivar: _hasPersistentIDs
@property (readonly) NSUInteger hash;
@property (readonly) BOOL isDir; // ivar: _isDir
@property (readonly) BOOL isVolumeWide; // ivar: _isVolumeWide
@property int state; // ivar: _state
@property (readonly) Class superclass;


+(id)newWithEnumeratedItem:(id)arg0 extension:(id)arg1 error:(*id)arg2 ;
+(void)applyParentUpdateAcrossEnumerators:(id)arg0 ;
-(id)ensureConnectedForUpdates;
-(id)getDirContents;
-(id)getItemsFromTree:(id)arg0 inRange:(struct _NSRange )arg1 error:(*id)arg2 ;
-(id)initForExtension:(id)arg0 item:(id)arg1 ;
-(id)initWithEnumeratedItem:(id)arg0 container:(id)arg1 extension:(id)arg2 ;
-(void)addInterestedItem:(id)arg0 newName:(id)arg1 forSelf:(BOOL)arg2 ;
-(void)applyDelete:(id)arg0 newTombstone:(id)arg1 toSelf:(BOOL)arg2 ;
-(void)currentSyncAnchorWithCompletionHandler:(id)arg0 ;
-(void)doShutdown;
-(void)enumerateChangesForObserver:(id)arg0 fromSyncAnchor:(id)arg1 ;
-(void)enumerateFileItemsForObserver:(id)arg0 startingAtPage:(id)arg1 ;
-(void)enumerateItemsForObserver:(id)arg0 startingAtPage:(id)arg1 ;
-(void)invalidate;
-(void)reallyEnumerateItemsForObserver:(id)arg0 startingAtPage:(id)arg1 ;
-(void)resetHistory;
-(void)signalEnumeratedItemChanged;
-(void)synchronizedEnumerateChangesForObserver:(id)arg0 fromSyncAnchor:(id)arg1 ;


@end


#endif