// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTANIMOJIPOSESELECTIONHEADERVIEWCONTROLLER_H
#define AVTANIMOJIPOSESELECTIONHEADERVIEWCONTROLLER_H

@class UIViewController, AVTView, AVTAvatarPhysicsState, AVTAvatarPose;
@protocol AVTAvatarRecord;


#import "AVTViewUpdater.h"

@interface AVTAnimojiPoseSelectionHeaderViewController : UIViewController

@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (retain, nonatomic) AVTView *avtView; // ivar: _avtView
@property (readonly, nonatomic) AVTAvatarPhysicsState *currentPhysicsState;
@property (readonly, nonatomic) AVTAvatarPose *currentPose;
@property (retain, nonatomic) AVTAvatarPose *displayedPose; // ivar: _displayedPose
@property (retain, nonatomic) AVTViewUpdater *viewUpdater; // ivar: _viewUpdater


-(id)initWithRecord:(id)arg0 ;
-(void)beginFaceTrackingWithCompletionBlock:(id)arg0 ;
-(void)endFaceTracking;
-(void)pauseFaceTracking;
-(void)updateForPose:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLoad;


@end


#endif