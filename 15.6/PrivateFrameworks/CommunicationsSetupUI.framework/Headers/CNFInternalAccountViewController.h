// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFINTERNALACCOUNTVIEWCONTROLLER_H
#define CNFINTERNALACCOUNTVIEWCONTROLLER_H

@class PSListController, IMAccount;


#import "FTRegConnectionHandler.h"

@interface CNFInternalAccountViewController : PSListController {
    FTRegConnectionHandler *_connectionHandler;
}


@property (retain, nonatomic) IMAccount *account; // ivar: _account


-(BOOL)isConnectedToDaemon;
-(id)accountDisplayName:(id)arg0 ;
-(id)accountIsActive:(id)arg0 ;
-(id)accountLogin:(id)arg0 ;
-(id)accountLoginStatus:(id)arg0 ;
-(id)accountType:(id)arg0 ;
-(id)bundle;
-(id)initWithAccount:(id)arg0 ;
-(id)registrationFailureReason:(id)arg0 ;
-(id)registrationStatus:(id)arg0 ;
-(id)specifierForAlias:(id)arg0 ;
-(id)specifiers;
-(id)statusForAlias:(id)arg0 ;
-(void)_handleAccountNotification:(id)arg0 ;
-(void)_handleDaemonConnected:(id)arg0 ;
-(void)_handleDaemonDisconnected:(id)arg0 ;
-(void)_startListeningForNotifications;
-(void)_stopListeningForNotifications;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif