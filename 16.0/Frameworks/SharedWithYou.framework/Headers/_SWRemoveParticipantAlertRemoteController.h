// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SWREMOVEPARTICIPANTALERTREMOTECONTROLLER_H
#define _SWREMOVEPARTICIPANTALERTREMOTECONTROLLER_H

@class UIRemoteViewController;
@protocol CKRemoveParticipantAlertRemoteViewControllerProtocol, _SWRemoveParticipantAlertRemoteControllerDelegate;



@interface _SWRemoveParticipantAlertRemoteController : UIRemoteViewController <CKRemoveParticipantAlertRemoteViewControllerProtocol>



@property (weak, nonatomic) NSObject<_SWRemoveParticipantAlertRemoteControllerDelegate> *delegate; // ivar: _delegate


+(id)exportedInterface;
+(id)requestViewControllerWithConnectionHandler:(id)arg0 ;
+(id)serviceViewControllerInterface;
-(void)_promptToRemoveParticipant:(id)arg0 fromHighlight:(id)arg1 preferredStyle:(NSInteger)arg2 ;
-(void)dismissAlert;
-(void)viewServiceDidTerminateWithError:(id)arg0 ;


@end


#endif