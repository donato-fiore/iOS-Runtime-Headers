// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNFINTERNALACCOUNTLISTVIEWCONTROLLER_H
#define CNFINTERNALACCOUNTLISTVIEWCONTROLLER_H

@class PSListController, IMServiceImpl;


#import "FTRegConnectionHandler.h"

@interface CNFInternalAccountListViewController : PSListController {
    FTRegConnectionHandler *_connectionHandler;
}


@property (retain, nonatomic) IMServiceImpl *service; // ivar: _service


-(id)accountNameForSpecifier:(id)arg0 ;
-(id)initWithServiceType:(NSInteger)arg0 ;
-(id)specifiers;
-(void)_handleAccountNotification:(id)arg0 ;
-(void)_handleDaemonConnected:(id)arg0 ;
-(void)_handleDaemonDisconnected:(id)arg0 ;
-(void)_startListeningForNotifications;
-(void)_stopListeningForNotifications;
-(void)accountTappedWithSpecifier:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif