// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKREPLICAMANAGER_H
#define PKREPLICAMANAGER_H

@class NSMutableOrderedSet, NSMutableDictionary, NSMutableArray, NSArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PKReplicaManager : NSObject {
    NSObject<OS_dispatch_queue> *_uuidAccessQueue;
    NSMutableOrderedSet *_replicaUUIDs;
    NSMutableDictionary *_replicaEntries;
    NSMutableArray *_replicaManagerErrors;
    id *_saveStateBlock;
    BOOL _dirtyTokenSet;
    BOOL _shouldPersist;
}


@property (readonly, nonatomic) NSArray *replicaManagerErrors;
@property (nonatomic) BOOL testMode; // ivar: _testMode


+(id)sharedReplicaManager;
-(BOOL)isValidBundleIDForSaving:(id)arg0 ;
-(id)checkoutReplicaUUIDForDrawing:(id)arg0 ;
-(id)description;
-(id)init;
-(void)_applicationWillTerminate;
-(void)_loadState;
-(void)_resetAllReplicaUUIDs;
-(void)_saveStateImmediately;
-(void)_scheduleSaveState;
-(void)_setReplicasDirtyToken;
-(void)persistIfNeeded;
-(void)returnReplicaForDrawing:(id)arg0 ;
-(void)updateVersionForDrawing:(id)arg0 ;


@end


#endif