// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKMAPSSNAPSHOTMANAGER_H
#define PKMAPSSNAPSHOTMANAGER_H

@class NSURL, NSFileManager, NSMutableArray, NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKMapsSnapshotManager : NSObject {
    NSURL *_cacheURL;
    NSFileManager *_fileManager;
    NSMutableArray *_snapshotsKeysToPerform;
    NSMutableDictionary *_snapshotOptionsByKey;
    NSMutableDictionary *_completionBlockByKey;
    NSMutableArray *_snapshotCacheKeys;
    NSMutableDictionary *_snapshotCache;
    BOOL _isSnapshotting;
    os_unfair_lock_s _cacheLock;
    os_unfair_lock_s _fileLock;
    NSObject<OS_dispatch_queue> *_snapshotQueue;
}




-(id)_iconForCacheKey:(id)arg0 ;
-(id)_iconFromDiskForCacheKey:(id)arg0 ;
-(id)init;
-(id)placeholderWithTraitCollection:(id)arg0 completion:(id)arg1 ;
-(id)snapshotForDisplayRegion:(struct ? )arg0 size:(struct CGSize )arg1 traitCollection:(id)arg2 completion:(id)arg3 ;
-(void)_processNextRequest;


@end


#endif