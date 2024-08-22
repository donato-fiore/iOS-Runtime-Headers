// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMCAMERASNAPSHOTCONTROL_H
#define HMCAMERASNAPSHOTCONTROL_H

@class NSString;
@protocol _HMCameraSnapshotControlDelegate, HMCameraSnapshotControlDelegate;


#import "HMCameraControl.h"
#import "HMCameraSnapshot.h"
#import "_HMCameraSnapshotControl.h"

@interface HMCameraSnapshotControl : HMCameraControl <_HMCameraSnapshotControlDelegate>

 {
    os_unfair_lock_s _lock;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<HMCameraSnapshotControlDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HMCameraSnapshot *mostRecentSnapshot;
@property (readonly) _HMCameraSnapshotControl *snapshotControl; // ivar: _snapshotControl
@property (readonly) Class superclass;


-(id)initWithSnapshotControl:(id)arg0 ;
-(void)cameraSnapshotControl:(id)arg0 didTakeSnapshot:(id)arg1 error:(id)arg2 ;
-(void)cameraSnapshotControlDidUpdateMostRecentSnapshot:(id)arg0 ;
-(void)fetchCameraSnapshotForBulletinContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)takeSnapshot;


@end


#endif