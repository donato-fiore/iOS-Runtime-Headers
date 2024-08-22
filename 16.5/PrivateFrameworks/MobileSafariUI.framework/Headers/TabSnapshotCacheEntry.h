// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef TABSNAPSHOTCACHEENTRY_H
#define TABSNAPSHOTCACHEENTRY_H

@class NSMutableSet, NSUUID, UIImage;
@protocol TabSnapshotCacheEntryStateObserving;

#import <Foundation/Foundation.h>


@interface TabSnapshotCacheEntry : NSObject

@property (nonatomic) BOOL fitsInCache; // ivar: _fitsInCache
@property (readonly, nonatomic, getter=isGroup) BOOL group; // ivar: _group
@property (readonly, nonatomic) NSMutableSet *groupMembers; // ivar: _groupMembers
@property (readonly, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, nonatomic) BOOL isPendingUpdate;
@property (retain, nonatomic) UIImage *snapshot; // ivar: _snapshot
@property (nonatomic) NSInteger state; // ivar: _state
@property (weak, nonatomic) NSObject<TabSnapshotCacheEntryStateObserving> *stateObserver; // ivar: _stateObserver
@property (nonatomic) BOOL stateUpdateCancelled; // ivar: _stateUpdateCancelled
@property (nonatomic, getter=isUpdatingState) BOOL updatingState; // ivar: _updatingState


-(id)debugDescription;
-(id)initWithIdentifier:(id)arg0 isGroup:(BOOL)arg1 ;


@end


#endif