// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASCREDENTIALREQUESTCABLECONNECTINGVIEWCONTROLLER_H
#define ASCREDENTIALREQUESTCABLECONNECTINGVIEWCONTROLLER_H

@class NSTimer, UIActivityIndicatorView, UILabel;


#import "ASCredentialRequestPaneViewController.h"

@interface ASCredentialRequestCABLEConnectingViewController : ASCredentialRequestPaneViewController {
    NSTimer *_informativeTextTimer;
    UIActivityIndicatorView *_activityIndicator;
    UILabel *_informativeTextLabel;
}




-(id)_connectingText;
-(id)_informativeText;
-(id)_informativeTextFont;
-(id)initRequiringTableView:(BOOL)arg0 ;
-(void)_setUpInformativeTextLabel;
-(void)_showInformativeText;
-(void)_startInformativeTextTimerIfNeeded;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif