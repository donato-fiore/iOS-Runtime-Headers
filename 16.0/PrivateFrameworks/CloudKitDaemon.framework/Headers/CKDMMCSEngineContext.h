// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKDMMCSENGINECONTEXT_H
#define CKDMMCSENGINECONTEXT_H

@class NSString, NSMutableIndexSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CKDMMCS.h"

@interface CKDMMCSEngineContext : NSObject {
    NSObject<OS_dispatch_queue> *_mmcsQueue;
    uint8_t _serializedThread;
}


@property (weak, nonatomic) CKDMMCS *MMCS; // ivar: _MMCS
@property (nonatomic) *_mmcs_engine MMCSEngine; // ivar: _MMCSEngine
@property (retain, nonatomic) NSString *applicationBundleID; // ivar: _applicationBundleID
@property (retain, nonatomic) NSMutableIndexSet *inMemoryItemsIDs; // ivar: _inMemoryItemsIDs
@property (nonatomic) unsigned int maxChunkCountForSection; // ivar: _maxChunkCountForSection
@property (retain, nonatomic) NSString *path; // ivar: _path
@property (nonatomic) NSInteger refCount; // ivar: _refCount
@property (nonatomic) NSInteger state; // ivar: _state


+(BOOL)hasCachedCKDMMCSEngineContextForPath:(id)arg0 ;
+(BOOL)tearDownMMCSEngineWithContext:(id)arg0 ;
+(id)_appID;
+(id)setupMMCSEngineWithApplicationBundleID:(id)arg0 path:(id)arg1 wasCached:(*BOOL)arg2 error:(*id)arg3 ;
+(id)sharedContextsByPath;
+(id)sharedContextsQueue;
-(BOOL)_setupMMCSEngineWithError:(*id)arg0 ;
-(BOOL)_setupMMCSEngineWithRetryCount:(NSUInteger)arg0 error:(*id)arg1 ;
-(NSInteger)decRefCount;
-(NSInteger)incRefCount;
-(NSUInteger)nextAvailableItemID;
-(id)CKPropertiesDescription;
-(id)description;
-(id)initWithApplicationBundleID:(id)arg0 path:(id)arg1 ;
-(void)MMCSRunSerialized:(id)arg0 ;
-(void)MMCSSerializeAsyncRecursive:(id)arg0 ;
-(void)MMCSSerializeSyncRecursive:(id)arg0 ;
-(void)cancelRequestWithContext:(*void)arg0 ;
-(void)dealloc;
-(void)stopTrackingItemID:(NSUInteger)arg0 ;


@end


#endif