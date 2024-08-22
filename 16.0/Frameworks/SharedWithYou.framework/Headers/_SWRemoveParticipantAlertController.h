// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _SWREMOVEPARTICIPANTALERTCONTROLLER_H
#define _SWREMOVEPARTICIPANTALERTCONTROLLER_H

@class UIViewController, _UIRemoteViewController, _SWPerson;
@protocol _SWRemoveParticipantAlertRemoteControllerDelegate;


#import "SWCollaborationHighlight.h"

@interface _SWRemoveParticipantAlertController : UIViewController <_SWRemoveParticipantAlertRemoteControllerDelegate>

 {
    _UIRemoteViewController *_remoteAlertController;
}


@property (retain, nonatomic) SWCollaborationHighlight *highlight; // ivar: _highlight
@property (retain, nonatomic) _SWPerson *participant; // ivar: _participant
@property (nonatomic) NSInteger preferredStyle; // ivar: _preferredStyle


+(id)alertControllerWithParticipant:(id)arg0 highlight:(id)arg1 preferredStyle:(NSInteger)arg2 ;
-(id)_containedRemoteViewController;
-(id)_initWithParticipant:(id)arg0 highlight:(id)arg1 preferredStyle:(NSInteger)arg2 ;
-(void)dismissAlert;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif