// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PBFCOMPLICATIONSNAPSHOTTEROPERATION_H
#define PBFCOMPLICATIONSNAPSHOTTEROPERATION_H

@class NSBlockOperation, NSString;
@protocol PBFComplicationSnapshotterObserver, OS_dispatch_group;


#import "PBFComplicationSnapshotRequest.h"
#import "PBFComplicationSnapshotter.h"

@interface PBFComplicationSnapshotterOperation : NSBlockOperation <PBFComplicationSnapshotterObserver>

 {
    os_unfair_recursive_lock_s _lock;
    NSObject<OS_dispatch_group> *_lock_group;
    BOOL _lock_snapshotterDidStart;
}


@property (nonatomic) NSInteger attempt; // ivar: _attempt
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) NSInteger maxNumberOfAttempts; // ivar: _maxNumberOfAttempts
@property (readonly, nonatomic) PBFComplicationSnapshotRequest *request; // ivar: _request
@property (readonly, nonatomic) PBFComplicationSnapshotter *snapshotter; // ivar: _snapshotter
@property (readonly) Class superclass;


-(id)initWithRequest:(id)arg0 snapshotter:(id)arg1 ;
-(void)_leaveMainGroup;
-(void)cancel;
-(void)complicationSnapshotter:(id)arg0 didFinishWithSnapshot:(id)arg1 error:(id)arg2 ;
-(void)dealloc;


@end


#endif