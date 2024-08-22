// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLENAMEPICKERVIEWCONTROLLER_H
#define PXPEOPLENAMEPICKERVIEWCONTROLLER_H

@class UIViewController, NSString, NSLayoutConstraint, NSArray;
@protocol UITextFieldDelegate, UITableViewDelegate, UIAdaptivePresentationControllerDelegate, PXPeopleNamePickerViewControllerDelegate;


#import "PXPeopleNamePickerResultsTableViewController.h"
#import "PXPeopleNamePickerTitleView.h"

@interface PXPeopleNamePickerViewController : UIViewController <UITextFieldDelegate, UITableViewDelegate, UIAdaptivePresentationControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXPeopleNamePickerViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PXPeopleNamePickerResultsTableViewController *resultsController; // ivar: _resultsController
@property (retain, nonatomic) NSLayoutConstraint *resultsViewBottomConstraint; // ivar: _resultsViewBottomConstraint
@property (retain, nonatomic) NSArray *savedRightBarItems; // ivar: _savedRightBarItems
@property (readonly) Class superclass;
@property (readonly, nonatomic) PXPeopleNamePickerTitleView *titleView; // ivar: _titleView
@property (nonatomic) CGFloat yOffset; // ivar: _yOffset


-(BOOL)textField:(id)arg0 shouldChangeCharactersInRange:(struct _NSRange )arg1 replacementString:(id)arg2 ;
-(BOOL)textFieldShouldBeginEditing:(id)arg0 ;
-(BOOL)textFieldShouldEndEditing:(id)arg0 ;
-(BOOL)textFieldShouldReturn:(id)arg0 ;
-(CGFloat)_titleViewMaxWidthForEditing:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFace:(id)arg0 ;
-(id)initWithNibName:(id)arg0 bundle:(id)arg1 ;
-(id)initWithPerson:(id)arg0 ;
-(id)initWithPerson:(id)arg0 orFace:(id)arg1 ;
-(void)_applicationDidEnterBackground;
-(void)_changePlaceholderTextOfTextField:(id)arg0 toColor:(id)arg1 ;
-(void)_hideResultsView;
-(void)_keyboardDidShow:(id)arg0 ;
-(void)_keyboardWillHide:(id)arg0 ;
-(void)_showResultsView;
-(void)adjustForAccessoryViewYOffset:(CGFloat)arg0 ;
-(void)endNamingSession;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)textFieldDidBeginEditing:(id)arg0 ;
-(void)textFieldDidEndEditing:(id)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif