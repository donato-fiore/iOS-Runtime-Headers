// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSCELLULARPLANCARDINFOVIEWCONTROLLER_H
#define TSCELLULARPLANCARDINFOVIEWCONTROLLER_H

@class NSString, NSArray, UITextField, UIBarButtonItem, UILabel, UITableView, NSLayoutConstraint, UIScrollView;
@protocol UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "SSUIViewController.h"

@interface TSCellularPlanCardInfoViewController : SSUIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource, TSSetupFlowItem>

 {
    NSString *_fauxCardData;
    NSArray *_tableData;
    UITextField *_activeTextField;
    CGSize _keyboardSize;
    UIBarButtonItem *_nextButton;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UILabel *enterActivationLabel; // ivar: _enterActivationLabel
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UITableView *infoTableView; // ivar: _infoTableView
@property (weak, nonatomic) NSLayoutConstraint *infoTableViewHeightConstraint; // ivar: _infoTableViewHeightConstraint
@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (readonly) Class superclass;


-(BOOL)canBeShownFromSuspendedState;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)addNewPlanWithUserInfo:(id)arg0 ;
-(void)configureCell:(id)arg0 atIndexPath:(id)arg1 ;
-(void)keyboardWasShown:(id)arg0 ;
-(void)keyboardWillBeHidden:(id)arg0 ;
-(void)onError;
-(void)resetFirstResponder;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif