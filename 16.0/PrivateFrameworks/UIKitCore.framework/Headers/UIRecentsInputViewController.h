// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIRECENTSINPUTVIEWCONTROLLER_H
#define UIRECENTSINPUTVIEWCONTROLLER_H

@class NSString, NSLayoutConstraint;
@protocol UIRecentsInputViewControllerDelegate;


#import "UITableViewController.h"
#import "UIView.h"
#import "UIViewController.h"
#import "UILexicon.h"

@interface UIRecentsInputViewController : UITableViewController

@property (nonatomic) BOOL canManageList; // ivar: _canManageList
@property (retain, nonatomic) NSString *clearAllString; // ivar: _clearAllString
@property (nonatomic) NSInteger containingEffectStyle; // ivar: _containingEffectStyle
@property (retain, nonatomic) UIView *customHeaderView; // ivar: _customHeaderView
@property (retain, nonatomic) NSString *enterNewString; // ivar: _enterNewString
@property (retain, nonatomic) UIView *headerContainerView; // ivar: _headerContainerView
@property (retain, nonatomic) UIViewController *headerContainerViewController; // ivar: _headerContainerViewController
@property (retain, nonatomic) UIView *headerView; // ivar: _headerView
@property (retain, nonatomic) NSLayoutConstraint *heightConstraint; // ivar: _heightConstraint
@property (retain, nonatomic) NSString *previouslyUsedString; // ivar: _previouslyUsedString
@property (weak, nonatomic) NSObject<UIRecentsInputViewControllerDelegate> *recentInputDelegate; // ivar: _recentInputDelegate
@property (retain, nonatomic) UILexicon *recentInputs; // ivar: _recentInputs
@property (retain, nonatomic) NSLayoutConstraint *widthConstraint; // ivar: _widthConstraint


-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canFocusRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canMoveRowAtIndexPath:(id)arg1 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)indexPathForPreferredFocusedViewInTableView:(id)arg0 ;
-(id)preferredFocusedView;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_delete:(id)arg0 ;
-(void)_overrideTraitCollectionForHeaderViewController;
-(void)didSelectButtonAtIndexPath:(id)arg0 ;
-(void)ensureConstraints;
-(void)scrollViewDidChangeContentSize:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)updateTableViewWidth;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif