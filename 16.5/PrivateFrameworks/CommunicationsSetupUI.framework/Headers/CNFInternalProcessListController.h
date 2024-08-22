// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNFINTERNALPROCESSLISTCONTROLLER_H
#define CNFINTERNALPROCESSLISTCONTROLLER_H

@class PSListController;



@interface CNFInternalProcessListController : PSListController



-(id)bundle;
-(id)specifiers;
-(void)conferenceKillProcesses:(id)arg0 ;
-(void)conferenceKillProcessesAndNukeKeychain:(id)arg0 ;
-(void)killJustIChatAgent:(id)arg0 ;
-(void)killJustIMAVAgent:(id)arg0 ;
-(void)killJustMediaServerD:(id)arg0 ;


@end


#endif