// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYMENTSELECTPASSESVIEWCONTROLLER_H
#define PKPAYMENTSELECTPASSESVIEWCONTROLLER_H

@class NSArray, NSMutableArray, PKPeerPaymentAccount, NSString;
@protocol PKPaymentSelectPassesViewControllerDelegate;


#import "PKPaymentSetupTableViewController.h"
#import "PKTableHeaderView.h"

@interface PKPaymentSelectPassesViewController : PKPaymentSetupTableViewController {
    PKTableHeaderView *_headerView;
    NSArray *_passes;
    NSMutableArray *_selectedIndexPaths;
    id<PKPaymentSelectPassesViewControllerDelegate> *_delegate;
    PKPeerPaymentAccount *_peerPaymentAccount;
}


@property (copy, nonatomic) NSString *buttonText; // ivar: _buttonText
@property (copy, nonatomic) NSString *headerSubtitle; // ivar: _headerSubtitle
@property (copy, nonatomic) NSString *headerTitle; // ivar: _headerTitle
@property (nonatomic) NSUInteger minimumSelectionCount; // ivar: _minimumSelectionCount
@property (nonatomic) BOOL showCancelButton; // ivar: _showCancelButton


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)headerView;
-(id)initWithPaymentPasses:(id)arg0 context:(NSInteger)arg1 delegate:(id)arg2 peerPaymentAccount:(id)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_cancelPressed;
-(void)_continuousButtonPressed;
-(void)_setContinuousButtonEnabledState;
-(void)_setNavigationBarEnabled:(BOOL)arg0 ;
-(void)_setViewEnabledState:(BOOL)arg0 ;
-(void)setHeaderViewTitle:(id)arg0 subtitle:(id)arg1 ;
-(void)setPassSelectionCount:(NSUInteger)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)willMoveToParentViewController:(id)arg0 ;


@end


#endif