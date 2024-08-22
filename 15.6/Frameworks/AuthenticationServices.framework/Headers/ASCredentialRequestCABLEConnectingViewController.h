// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ASCREDENTIALREQUESTCABLECONNECTINGVIEWCONTROLLER_H
#define ASCREDENTIALREQUESTCABLECONNECTINGVIEWCONTROLLER_H

@class UIActivityIndicatorView;


#import "ASCredentialRequestPaneViewController.h"

@interface ASCredentialRequestCABLEConnectingViewController : ASCredentialRequestPaneViewController {
    UIActivityIndicatorView *_activityIndicator;
}




-(id)_connectingText;
-(id)initRequiringTableView:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif