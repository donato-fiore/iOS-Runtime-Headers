// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CKREMOVEPARTICIPANTALERTSERVICEVIEWCONTROLLER_H
#define CKREMOVEPARTICIPANTALERTSERVICEVIEWCONTROLLER_H

@class UIViewController;
@protocol CKRemoveParticipantAlertServiceViewControllerProtocol;



@interface CKRemoveParticipantAlertServiceViewController : UIViewController <CKRemoveParticipantAlertServiceViewControllerProtocol>





+(id)_exportedInterface;
+(id)_remoteViewControllerInterface;
-(void)_dismissAndCleanup;
-(void)promptToRemoveParticipant:(id)arg0 fromHighlight:(id)arg1 usingPreferredStyle:(NSInteger)arg2 ;
-(void)viewDidLoad;


@end


#endif