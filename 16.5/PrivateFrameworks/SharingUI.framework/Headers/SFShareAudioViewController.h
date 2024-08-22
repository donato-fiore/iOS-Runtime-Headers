// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SFSHAREAUDIOVIEWCONTROLLER_H
#define SFSHAREAUDIOVIEWCONTROLLER_H

@class UINavigationController, NSBundle, UIStoryboard, SFShareAudioSessionClient;


#import "SFShareAudioConnectingViewController.h"

@interface SFShareAudioViewController : UINavigationController

@property (copy, nonatomic) id *completion; // ivar: _completion
@property (nonatomic) unsigned int flags; // ivar: _flags
@property (retain, nonatomic) NSBundle *mainBundle; // ivar: _mainBundle
@property (retain, nonatomic) UIStoryboard *mainStoryboard; // ivar: _mainStoryboard
@property (retain, nonatomic) SFShareAudioSessionClient *shareAudioSession; // ivar: _shareAudioSession
@property (retain, nonatomic) SFShareAudioConnectingViewController *vcConnecting; // ivar: _vcConnecting


+(id)instantiateViewController;
-(BOOL)_canShowWhileLocked;
-(void)_reportCompletion:(id)arg0 mediaRouteID:(id)arg1 ;
-(void)_sessionProgressEvent:(int)arg0 info:(id)arg1 ;
-(void)_sessionStart;
-(void)_showBringClose;
-(void)_showConfirm:(id)arg0 ;
-(void)_showConnecting:(id)arg0 ;
-(void)_showError:(id)arg0 ;
-(void)_showPairInstructions:(id)arg0 ;
-(void)_transitionToViewController:(id)arg0 animate:(BOOL)arg1 ;
-(void)reportError:(id)arg0 ;
-(void)reportUserCancelled;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif