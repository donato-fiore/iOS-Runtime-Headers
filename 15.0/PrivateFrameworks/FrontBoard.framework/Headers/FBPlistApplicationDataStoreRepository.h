// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FBPLISTAPPLICATIONDATASTOREREPOSITORY_H
#define FBPLISTAPPLICATIONDATASTOREREPOSITORY_H

@class NSURL, NSMutableDictionary, NSString;
@protocol FBApplicationDataStoreRepository, OS_dispatch_queue, FBApplicationDataStoreRepositoryDelegate;

#import <Foundation/Foundation.h>


@interface FBPlistApplicationDataStoreRepository : NSObject <FBApplicationDataStoreRepository>

 {
    NSURL *_storeURL;
    NSMutableDictionary *_state;
    BOOL _dirty;
    NSUInteger _batchCount;
    int _autoFlushDuration;
    NSObject<OS_dispatch_queue> *_stateQueue;
    NSObject<OS_dispatch_queue> *_writeQueue;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<FBApplicationDataStoreRepositoryDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_isEligibleForSaving:(id)arg0 ;
-(BOOL)containsKey:(id)arg0 forApplication:(id)arg1 ;
-(BOOL)isDirty;
-(id)_stateQueue_addStoreForIdentifierIfNecessary:(id)arg0 ;
-(id)_stateQueue_objectForKey:(id)arg0 forIdentifier:(id)arg1 ;
-(id)_stateQueue_objectsForKeys:(id)arg0 ;
-(id)_stateQueue_storeForIdentifier:(id)arg0 ;
-(id)allObjectsForKeys:(id)arg0 ;
-(id)applicationIdentifiersWithState;
-(id)initWithStorePath:(id)arg0 ;
-(id)keysForApplication:(id)arg0 ;
-(id)location;
-(id)objectForKey:(id)arg0 forApplication:(id)arg1 ;
-(void)_load;
-(void)_notifyDelegateOfChangeForKeys:(id)arg0 application:(id)arg1 ;
-(void)_notifyDelegateOfStoreInvalidationForIdentifier:(id)arg0 ;
-(void)_stateQueue_markDirty;
-(void)_stateQueue_removeStoreForIdentifier:(id)arg0 ;
-(void)_writeQueue_flushSynchronously;
-(void)beginBatchedUpdate;
-(void)close;
-(void)dealloc;
-(void)endBatchedUpdate;
-(void)flushSynchronously;
-(void)removeAllObjectsForApplication:(id)arg0 ;
-(void)removeObjectForKey:(id)arg0 forApplication:(id)arg1 ;
-(void)removeObjectsForKeys:(id)arg0 forApplication:(id)arg1 ;
-(void)setObject:(id)arg0 forKey:(id)arg1 forApplication:(id)arg2 ;


@end


#endif