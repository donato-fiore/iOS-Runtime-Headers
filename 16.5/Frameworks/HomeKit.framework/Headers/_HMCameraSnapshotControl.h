// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HMCAMERASNAPSHOTCONTROL_H
#define _HMCAMERASNAPSHOTCONTROL_H

@protocol _HMCameraSnapshotControlDelegate;


#import "HMCameraControl.h"
#import "HMCameraSnapshot.h"

@interface _HMCameraSnapshotControl : HMCameraControl

@property (weak) NSObject<_HMCameraSnapshotControlDelegate> *delegate; // ivar: _delegate
@property (retain) HMCameraSnapshot *mostRecentSnapshot; // ivar: _mostRecentSnapshot


+(id)logCategory;
-(id)initWithCameraProfile:(id)arg0 profileUniqueIdentifier:(id)arg1 mostRecentSnapshot:(id)arg2 ;
-(void)__configureWithContext:(id)arg0 home:(id)arg1 ;
-(void)_fetchCameraSnapshotForBulletinContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)_handleCreateSnapshotWithBulletinContext:(id)arg0 error:(id)arg1 completionHandler:(id)arg2 ;
-(void)_handleMostRecentSnapshot:(id)arg0 ;
-(void)_handleMostRecentSnapshotUpdatedMessage:(id)arg0 ;
-(void)_handleSnapshot:(id)arg0 error:(id)arg1 isMostRecent:(BOOL)arg2 ;
-(void)_notifyDelegateOfDidTakeSnapshot:(id)arg0 error:(id)arg1 ;
-(void)_notifyDelegateOfMostRecentSnapshotUpdated;
-(void)_registerNotificationHandlers;
-(void)_takeSnapshot;
-(void)fetchCameraSnapshotForBulletinContext:(id)arg0 completionHandler:(id)arg1 ;
-(void)mergeNewSnapshotControl:(id)arg0 ;
-(void)takeSnapshot;


@end


#endif