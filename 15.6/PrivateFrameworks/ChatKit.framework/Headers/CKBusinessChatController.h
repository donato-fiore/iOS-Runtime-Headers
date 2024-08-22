// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CKBUSINESSCHATCONTROLLER_H
#define CKBUSINESSCHATCONTROLLER_H



#import "CKChatController.h"
#import "CKNavbarCanvasViewController.h"

@interface CKBusinessChatController : CKChatController

@property (retain, nonatomic) CKNavbarCanvasViewController *navbarCanvasViewController; // ivar: _navbarCanvasViewController


-(BOOL)canShowBusinessOnboarding;
-(BOOL)shouldListParticipantsInTitle;
-(NSInteger)preferredStatusBarStyle;
-(void)_handleAddressBookChangedNotification:(id)arg0 ;
-(void)_updateNavigationUI;
-(void)cleanUpBizNavBarIfNecessary;
-(void)loadView;
-(void)setupBizNavBarIfNecessary;
-(void)viewDidLayoutSubviews;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif