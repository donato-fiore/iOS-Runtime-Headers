// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NPHBSCELLULARFAUXCARDINFOVIEWCONTROLLER_H
#define NPHBSCELLULARFAUXCARDINFOVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray, UITextField, UILabel, UITableView, NSLayoutConstraint, UIScrollView, CTXPCServiceSubscriptionContext;
@protocol UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource;



@interface NPHBSCellularFauxCardInfoViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UITableViewDataSource>

 {
    NSString *_fauxCardData;
    NSArray *_tableData;
    UITextField *_activeTextField;
    CGSize _keyboardSize;
}


@property (copy, nonatomic) id *completion; // ivar: _completion
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) UILabel *enterActivationLabel; // ivar: _enterActivationLabel
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UITableView *infoTableView; // ivar: _infoTableView
@property (weak, nonatomic) NSLayoutConstraint *infoTableViewHeightConstraint; // ivar: _infoTableViewHeightConstraint
@property (weak, nonatomic) UIScrollView *scrollView; // ivar: _scrollView
@property (nonatomic) CTXPCServiceSubscriptionContext *subscriptionContext; // ivar: _subscriptionContext
@property (readonly) Class superclass;


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)activatePlan:(id)arg0 ;
-(void)configureCell:(id)arg0 atIndexPath:(id)arg1 ;
-(void)keyboardWasShown:(id)arg0 ;
-(void)keyboardWillBeHidden:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif