// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKUIPERIOCULARENABLESPLASHVIEWCONTROLLER_H
#define BKUIPERIOCULARENABLESPLASHVIEWCONTROLLER_H

@class OBTableWelcomeController, OBAnimationController, OBTrayButton, NSString, BKDevice, OBPrivacyLinkController;
@protocol UITableViewDelegate, UITableViewDataSource;


#import "BKUIPeriocularSelectionCell.h"

@interface BKUIPeriocularEnableSplashViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource>



@property (retain, nonatomic) OBAnimationController *animationController; // ivar: _animationController
@property (retain, nonatomic) BKUIPeriocularSelectionCell *cellBottom; // ivar: _cellBottom
@property (retain, nonatomic) BKUIPeriocularSelectionCell *cellTop; // ivar: _cellTop
@property (retain, nonatomic) OBTrayButton *continueButton; // ivar: _continueButton
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) BKDevice *device; // ivar: _device
@property (copy, nonatomic) id *endEnrollActionPrimary; // ivar: _endEnrollActionPrimary
@property (copy, nonatomic) id *endEnrollActionSecondary; // ivar: _endEnrollActionSecondary
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL inBuddy; // ivar: _inBuddy
@property (retain, nonatomic) OBPrivacyLinkController *linkController; // ivar: _linkController
@property (nonatomic) CGFloat maxCellHeight; // ivar: _maxCellHeight
@property (retain, nonatomic) OBTrayButton *skipButton; // ivar: _skipButton
@property (readonly) Class superclass;
@property (nonatomic) BOOL upsell; // ivar: _upsell
@property (copy, nonatomic) id *userSkippedAction; // ivar: _userSkippedAction


+(void)setPeriocularFaceIDMatchEnabledForUserConfigurationWithDevice:(id)arg0 credentialSet:(id)arg1 authContext:(id)arg2 enabled:(BOOL)arg3 completion:(id)arg4 ;
+(void)setPeriocularFaceIDMatchEnabledForUserConfigurationWithDevice:(id)arg0 credentialSet:(id)arg1 enabled:(BOOL)arg2 ;
-(CGFloat)headerViewBottomToTableViewTopPadding;
-(CGFloat)tableView:(id)arg0 estimatedHeightForRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForFooterInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)preferredStatusBarStyle;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_createCellForIndexPath:(id)arg0 ;
// -(id)initInBuddy:(BOOL)arg0 bkDevice:(id)arg1 upsell:(BOOL)arg2 withEndEnrollmentActionPrimary:(id)arg3 enrollmentActionSecondary:(unk)arg4  ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_continuePressed:(id)arg0 ;
-(void)_enrollSkipped:(id)arg0 ;
-(void)_showPrivacyLink;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif