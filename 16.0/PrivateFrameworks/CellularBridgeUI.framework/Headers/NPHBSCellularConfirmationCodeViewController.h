// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NPHBSCELLULARCONFIRMATIONCODEVIEWCONTROLLER_H
#define NPHBSCELLULARCONFIRMATIONCODEVIEWCONTROLLER_H

@class UIViewController, UILabel, NSString, UITableView, NSLayoutConstraint;
@protocol UITextFieldDelegate, NPHBSCellularConfirmationCodeViewControllerDelegate;


#import "NPHSetupTableViewCell.h"

@interface NPHBSCellularConfirmationCodeViewController : UIViewController <UITextFieldDelegate>

 {
    NPHSetupTableViewCell *_confirmationCodeCell;
}


@property (weak, nonatomic) UILabel *confirmationCodeTitleLabel; // ivar: _confirmationCodeTitleLabel
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<NPHBSCellularConfirmationCodeViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) UITableView *infoTableView; // ivar: _infoTableView
@property (weak, nonatomic) NSLayoutConstraint *infoTableViewHeightConstraint; // ivar: _infoTableViewHeightConstraint
@property (readonly) Class superclass;


-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)init;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)confirm:(id)arg0 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif