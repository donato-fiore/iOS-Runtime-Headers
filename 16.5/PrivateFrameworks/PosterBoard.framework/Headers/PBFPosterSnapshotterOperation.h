// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFPOSTERSNAPSHOTTEROPERATION_H
#define PBFPOSTERSNAPSHOTTEROPERATION_H

@class NSBlockOperation, NSString;
@protocol PBFPosterSnapshotterObserver, OS_dispatch_group;


#import "PBFPosterSnapshotRequest.h"
#import "PBFPosterSnapshotter.h"

@interface PBFPosterSnapshotterOperation : NSBlockOperation <PBFPosterSnapshotterObserver>

 {
    os_unfair_lock_s _lock;
    BOOL _lock_snapshotterDidStart;
    NSObject<OS_dispatch_group> *_lock_group;
}


@property NSUInteger advisoryQueuePriority; // ivar: _advisoryQueuePriority
@property (nonatomic) NSInteger attempt; // ivar: _attempt
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger maxNumberOfAttempts; // ivar: _maxNumberOfAttempts
@property (readonly, nonatomic) PBFPosterSnapshotRequest *request; // ivar: _request
@property (readonly, nonatomic) PBFPosterSnapshotter *snapshotter; // ivar: _snapshotter
@property (readonly) Class superclass;


-(id)initWithRequest:(id)arg0 snapshotter:(id)arg1 ;
-(void)_leaveMainGroup;
-(void)cancel;
-(void)dealloc;
-(void)snapshotter:(id)arg0 failedWithError:(id)arg1 ;
-(void)snapshotterDidTakeSnapshots:(id)arg0 snapshotsByDefinition:(id)arg1 ;


@end


#endif