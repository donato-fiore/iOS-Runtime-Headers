// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIALERTVIEW_H
#define UIALERTVIEW_H

@class NSMutableArray, NSString;


#import "UIView.h"
#import "UIAlertController.h"
#import "_UIAlertControllerShimPresenter.h"
#import "UIViewController.h"

@interface UIAlertView : UIView {
    UIAlertController *_alertController;
    _UIAlertControllerShimPresenter *_presenter;
    id *_retainedSelf;
    NSMutableArray *_actions;
    NSInteger _cancelIndex;
    NSInteger _defaultButtonIndex;
    NSInteger _firstOtherButtonIndex;
    NSString *_message;
    NSString *_subtitle;
    NSInteger _alertViewStyle;
    BOOL _hasPreparedAlertActions;
    BOOL _isPresented;
    BOOL _alertControllerShouldDismiss;
    BOOL _handlingAlertActionShouldDismiss;
    BOOL _dismissingAlertController;
}


@property (nonatomic) NSInteger alertViewStyle;
@property (retain, nonatomic) NSString *bodyText;
@property (nonatomic) NSInteger cancelButtonIndex;
@property (retain, nonatomic) id *context; // ivar: _context
@property (nonatomic) NSInteger defaultButtonIndex;
@property (weak, nonatomic) id *delegate; // ivar: _delegate
@property (retain, nonatomic, getter=_externalViewControllerForPresentation, setter=_setExternalViewControllerForPresentation:) UIViewController *externalViewControllerForPresentation; // ivar: _externalViewControllerForPresentation
@property (readonly, nonatomic) NSInteger firstOtherButtonIndex;
@property (nonatomic) BOOL groupsTextFields;
@property (copy, nonatomic) NSString *message;
@property (readonly, nonatomic) NSInteger numberOfButtons;
@property (nonatomic) NSInteger numberOfRows;
@property (retain, nonatomic) NSString *subtitle;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;


+(id)_alertViewForSessionWithRemoteViewController:(id)arg0 ;
+(id)_alertViewForWindow:(id)arg0 ;
+(id)_remoteAlertViewWithBlock:(id)arg0 ;
-(BOOL)_isAnimating;
-(BOOL)_prepareToDismissForTappedIndex:(NSInteger)arg0 ;
-(NSInteger)_maximumNumberOfTextFieldsForCurrentStyle;
-(NSInteger)addButtonWithTitle:(id)arg0 ;
-(id)_addButtonWithTitle:(id)arg0 ;
-(id)_addTextFieldWithValue:(id)arg0 label:(id)arg1 ;
-(id)_alertController;
-(id)_preparedAlertActionAtIndex:(NSUInteger)arg0 ;
-(id)addButtonWithTitle:(id)arg0 buttonClass:(Class)arg1 ;
-(id)addButtonWithTitle:(id)arg0 label:(id)arg1 ;
-(id)addTextFieldWithValue:(id)arg0 label:(id)arg1 ;
-(id)buttonTitleAtIndex:(NSInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTitle:(id)arg0 buttons:(id)arg1 defaultButtonIndex:(int)arg2 delegate:(id)arg3 context:(id)arg4 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 delegate:(id)arg2 cancelButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 ;
-(id)initWithTitle:(id)arg0 message:(id)arg1 delegate:(id)arg2 defaultButton:(id)arg3 cancelButton:(id)arg4 otherButtons:(id)arg5 ;
-(id)keyboard;
-(id)tableView;
-(id)textField;
-(id)textFieldAtIndex:(NSInteger)arg0 ;
-(id)window;
-(int)buttonCount;
-(int)textFieldCount;
-(struct CGSize )backgroundSize;
-(void)_dismissForTappedIndex:(NSInteger)arg0 ;
-(void)_performPresentationDismissalWithClickedButtonIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_prepareAlertActions;
-(void)_setAccessoryView:(id)arg0 ;
-(void)_setIsPresented:(BOOL)arg0 ;
-(void)_showAnimated:(BOOL)arg0 ;
-(void)_textDidChangeInTextField:(id)arg0 ;
-(void)_updateButtonTitle:(id)arg0 buttonIndex:(NSUInteger)arg1 ;
-(void)_updateFirstOtherButtonEnabledState;
-(void)dealloc;
-(void)dismiss;
-(void)dismissAnimated:(BOOL)arg0 ;
-(void)dismissWithClickedButtonIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)layout;
-(void)setTableShouldShowMinimumContent:(BOOL)arg0 ;
-(void)show;


@end


#endif