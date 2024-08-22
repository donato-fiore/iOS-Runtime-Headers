// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVTANIMOJIPOSESELECTIONHEADERVIEWCONTROLLER_H
#define AVTANIMOJIPOSESELECTIONHEADERVIEWCONTROLLER_H

@class UIViewController, AVTView, AVTStickerConfiguration;
@protocol AVTAvatarRecord;


#import "AVTViewUpdater.h"

@interface AVTAnimojiPoseSelectionHeaderViewController : UIViewController

@property (retain, nonatomic) NSObject<AVTAvatarRecord> *avatarRecord; // ivar: _avatarRecord
@property (retain, nonatomic) AVTView *avtView; // ivar: _avtView
@property (retain, nonatomic) AVTStickerConfiguration *displayedConfiguration; // ivar: _displayedConfiguration
@property (retain, nonatomic) AVTViewUpdater *viewUpdater; // ivar: _viewUpdater


-(id)initWithRecord:(id)arg0 ;
-(id)newStickerConfigurationFromCurrentPose;
-(void)beginFaceTrackingWithCompletionBlock:(id)arg0 ;
-(void)endFaceTracking;
-(void)pauseFaceTracking;
-(void)updateForStickerConfiguration:(id)arg0 animated:(BOOL)arg1 ;
-(void)viewDidLoad;


@end


#endif