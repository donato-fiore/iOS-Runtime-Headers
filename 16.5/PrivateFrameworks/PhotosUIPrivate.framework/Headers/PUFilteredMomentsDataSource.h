// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUFILTEREDMOMENTSDATASOURCE_H
#define PUFILTEREDMOMENTSDATASOURCE_H

@class NSMutableOrderedSet, NSSet, NSOrderedSet, NSString;
@protocol PLDiagnosticsProvider, OS_dispatch_queue, PUFilteredMomentsDataSourceDelegate;

#import <Foundation/Foundation.h>


@interface PUFilteredMomentsDataSource : NSObject <PLDiagnosticsProvider>

 {
    NSObject<OS_dispatch_queue> *_queue;
    NSUInteger _taskId;
    NSMutableOrderedSet *_uncommittedContainers;
    NSSet *_uncommittedAssetUUIDs;
    NSOrderedSet *_containers;
    BOOL _hasPendingChanges;
}


@property (readonly, nonatomic) NSSet *assetUUIDs; // ivar: _assetUUIDs
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PUFilteredMomentsDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFinished) BOOL finished; // ivar: _finished
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)_inqIsCancelledWithTaskId:(NSUInteger)arg0 ;
-(BOOL)_isCancelledWithTaskId:(NSUInteger)arg0 ;
-(id)fetchResult;
-(id)init;
-(void)_inqClearPendingChanges;
-(void)_updateAssetUUIDs:(id)arg0 localIdenifiers:(id)arg1 taskId:(NSUInteger)arg2 completion:(id)arg3 ;
-(void)mergePendingChanges;
-(void)updateAssetUUIDs:(id)arg0 completion:(id)arg1 ;
-(void)updateAssetUUIDs:(id)arg0 localIdenifiers:(id)arg1 completion:(id)arg2 ;


@end


#endif