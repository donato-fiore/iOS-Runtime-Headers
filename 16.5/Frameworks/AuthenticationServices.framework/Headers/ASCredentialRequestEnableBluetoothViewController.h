// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ASCREDENTIALREQUESTENABLEBLUETOOTHVIEWCONTROLLER_H
#define ASCREDENTIALREQUESTENABLEBLUETOOTHVIEWCONTROLLER_H

@class ASCAuthorizationPresentationContext;
@protocol OS_os_activity;


#import "ASCredentialRequestPaneViewController.h"

@interface ASCredentialRequestEnableBluetoothViewController : ASCredentialRequestPaneViewController {
    NSObject<OS_os_activity> *_authorizationActivity;
}


@property (copy, nonatomic) id *enableBluetoothHandler; // ivar: _enableBluetoothHandler
@property (readonly, nonatomic) ASCAuthorizationPresentationContext *presentationContext; // ivar: _presentationContext


-(id)_message;
-(id)initWithPresentationContext:(id)arg0 activity:(id)arg1 ;
-(void)_enableBluetooth;
-(void)_setUpButtonPane;
-(void)_setUpMessagePane;
-(void)_setUpTitlePane;
-(void)viewDidLoad;


@end


#endif