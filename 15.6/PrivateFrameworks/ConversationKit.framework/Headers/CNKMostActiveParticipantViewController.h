// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNKMOSTACTIVEPARTICIPANTVIEWCONTROLLER_H
#define CNKMOSTACTIVEPARTICIPANTVIEWCONTROLLER_H

@class UIViewController;



@interface CNKMostActiveParticipantViewController : UIViewController {
    ? remoteParticipants;
    ? localParticipant;
    ? focusedParticipant;
    ? ignoreFocusedParticipantUpdates;
    ? isLocalMemberAuthorizedToChangeGroupMembership;
    ? participantsViewControllerDelegate;
    ? remoteParticipantView;
    ? localParticipantView;
    ? localParticipantViewConstraints;
    ? supportedDeviceOrientations;
    ? shouldShowActionTypePhotoCapture;
    ? defaults;
    ? isVisibleInPIP;
    ? $__lazy_storage_$_flashView;
    ? $__lazy_storage_$_insulatingView;
}


@property (nonatomic) NSInteger frontBoardInterfaceOrientation; // ivar: frontBoardInterfaceOrientation


-(BOOL)_canShowWhileLocked;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif