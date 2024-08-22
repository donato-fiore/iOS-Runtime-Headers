// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTSYNCCHANGEQUEUE_H
#define MTSYNCCHANGEQUEUE_H

@class NSMutableArray;
@protocol MTSyncChangeStore, OS_dispatch_group, OS_dispatch_queue, NAScheduler;

#import <Foundation/Foundation.h>


@interface MTSyncChangeQueue : NSObject

@property (retain, nonatomic) NSMutableArray *changeQueue; // ivar: _changeQueue
@property (retain, nonatomic) NSObject<MTSyncChangeStore> *changeStore; // ivar: _changeStore
@property (retain, nonatomic) NSObject<OS_dispatch_group> *changesLoaded; // ivar: _changesLoaded
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // ivar: _serialQueue
@property (retain, nonatomic) NSObject<NAScheduler> *serializer; // ivar: _serializer


-(BOOL)hasPendingChanges;
-(id)_resolveChange:(id)arg0 ;
-(id)_resolveChange:(id)arg0 resolutionHandler:(id)arg1 ;
-(id)initWithChangeStore:(id)arg0 ;
-(id)pendingChanges;
-(id)resolveChange:(id)arg0 ;
-(void)_enqueueAction:(id)arg0 ;
-(void)_enqueueChange:(id)arg0 changeCompareBlock:(id)arg1 ;
-(void)dequeueChanges:(id)arg0 ;
-(void)enqueueChange:(id)arg0 ;
-(void)loadChanges;
// -(void)performBlockOnceChangesAreLoaded:(id)arg0 async:(unk)arg1  ;
-(void)persistChanges;
-(void)removePendingChanges;


@end


#endif