// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TTC16MAGNIFIERSUPPORT24CAMERATRAYVIEWCONTROLLER_H
#define _TTC16MAGNIFIERSUPPORT24CAMERATRAYVIEWCONTROLLER_H

@class UIViewController;



@interface _TtC16MagnifierSupport24CameraTrayViewController : UIViewController {
    ? captureDelegate;
    ? settingsDelegate;
    ? $__lazy_storage_$_snapshotButton;
    ? $__lazy_storage_$_settingsButton;
    ? $__lazy_storage_$_snapshotModeButton;
    ? $__lazy_storage_$_viewSnapshotsButton;
    ? freezeFrameModeSubscription;
    ? freezeFrameReviewSubscription;
    ? rotationSubscription;
    ? $__lazy_storage_$_successfulMultiShotCaptureCount;
}




-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)didTapDoneButton:(id)arg0 ;
-(void)didTapSettingsButton:(id)arg0 ;
-(void)didTapSnapshotButton:(id)arg0 ;
-(void)didTapSnapshotModeButton:(id)arg0 ;
-(void)didTapViewSnapshotsButton:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif