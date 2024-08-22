// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SWREMOVEPARTICIPANTALERTCONTROLLER_H
#define SWREMOVEPARTICIPANTALERTCONTROLLER_H

@class UIViewController, NSString;



@interface SWRemoveParticipantAlertController : UIViewController {
    NSString *_messageText;
}




+(id)alertControllerWithParticipant:(id)arg0 highlight:(id)arg1 ;
-(id)_initWithParticipant:(id)arg0 highlight:(id)arg1 ;
-(void)viewDidAppear:(BOOL)arg0 ;


@end


#endif