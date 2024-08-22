// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNFREGLISTCONTROLLER_H
#define CNFREGLISTCONTROLLER_H

@class PSListController, NSString;
@protocol CNFRegChangeAccountPasswordDelegate, CNFRegAccountAuthorizationDelegate, IMSystemMonitorListener;


#import "CNFRegController.h"

@interface CNFRegListController : PSListController <CNFRegChangeAccountPasswordDelegate, CNFRegAccountAuthorizationDelegate, IMSystemMonitorListener>



@property (copy, nonatomic) id *appearBlock; // ivar: _appearBlock
@property (readonly, nonatomic) BOOL appeared; // ivar: _appeared
@property (readonly, nonatomic) NSInteger currentAppearanceStyle;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) CNFRegController *regController; // ivar: _regController
@property (nonatomic) BOOL shouldRerootPreferences; // ivar: _shouldRerootPreferences
@property (nonatomic) BOOL showingChildController; // ivar: _showingChildController
@property (readonly) Class superclass;


-(BOOL)_handleURLDictionary:(id)arg0 ;
-(BOOL)_showWiFiAlertIfNecessary;
-(BOOL)shouldAutorotateToInterfaceOrientation:(NSInteger)arg0 ;
-(BOOL)shouldSelectResponderOnAppearance;
-(BOOL)wantsWiFiChooser;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(id)_existingLabelForSection:(NSInteger)arg0 header:(BOOL)arg1 ;
-(id)_existingLabelForSpecifier:(id)arg0 header:(BOOL)arg1 ;
-(id)customTitle;
-(id)initWithParentController:(id)arg0 ;
-(id)initWithRegController:(id)arg0 ;
-(id)logName;
-(id)specifierList;
-(id)specifiers;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_performAppearBlock;
-(void)_setFieldsEnabled:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)_setLabel:(id)arg0 forSpecifier:(id)arg1 header:(BOOL)arg2 ;
-(void)_setSpecifierEnabled:(id)arg0 enabled:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setupEventHandlers;
-(void)_updateExistingLabelForSpecifier:(id)arg0 header:(BOOL)arg1 ;
-(void)_updateTableLabel:(id)arg0 withTableView:(id)arg1 isTopMostHeader:(BOOL)arg2 ;
-(void)_updateTitle;
-(void)applicationDidResume;
-(void)authorizationController:(id)arg0 authorizedAccount:(BOOL)arg1 ;
-(void)changePasswordControllerDidCancel:(id)arg0 ;
-(void)changePasswordControllerDidFinish:(id)arg0 withAppleID:(id)arg1 authID:(id)arg2 authToken:(id)arg3 ;
-(void)dealloc;
-(void)handleURL:(id)arg0 ;
-(void)loadView;
-(void)removeAllHandlers;
-(void)setSpecifier:(id)arg0 ;
-(void)systemApplicationDidBecomeActive;
-(void)systemApplicationDidEnterBackground;
-(void)systemApplicationDidResume;
-(void)systemApplicationDidSuspend;
-(void)systemApplicationWillEnterForeground;
-(void)systemApplicationWillResignActive;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidDisappear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif