// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSCELLULARPLANCONFIRMATIONCODEVIEWCONTROLLER_H
#define TSCELLULARPLANCONFIRMATIONCODEVIEWCONTROLLER_H

@class UIViewController, NSString, UIBarButtonItem, UILabel, UITableView, NSLayoutConstraint;
@protocol UITextFieldDelegate, TSSetupFlowItem, TSSIMSetupFlowDelegate;


#import "TSCellularPlanTableViewCell.h"

@interface TSCellularPlanConfirmationCodeViewController : UIViewController <UITextFieldDelegate, TSSetupFlowItem>

 {
    TSCellularPlanTableViewCell *_confirmationCodeCell;
    NSString *_fauxCardData;
    NSInteger _userConsentResponse;
    BOOL _isMidOperation;
    UIBarButtonItem *_nextButton;
    UIBarButtonItem *_cancelButton;
}


@property (readonly, nonatomic) NSString *confirmationCode; // ivar: _confirmationCode
@property (weak, nonatomic) UILabel *confirmationCodeTitleLabel; // ivar: _confirmationCodeTitleLabel
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TSSIMSetupFlowDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UITableView *infoTableView; // ivar: _infoTableView
@property (weak, nonatomic) NSLayoutConstraint *infoTableViewHeightConstraint; // ivar: _infoTableViewHeightConstraint
@property (readonly) Class superclass;


-(BOOL)canBeShownFromSuspendedState;
-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initAsMidOperation;
-(id)initWithCardData:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)confirm:(id)arg0 ;
-(void)userDidTapCancel;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif