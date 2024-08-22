// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIACTIONSHEET_H
#define UIACTIONSHEET_H

@class NSMutableArray, NSString;
@protocol UIPopoverControllerDelegate, UIActionSheetDelegate;


#import "UIView.h"
#import "UIAlertController.h"
#import "_UIAlertControllerShimPresenter.h"
#import "UIActionSheet.h"

@interface UIActionSheet : UIView <UIPopoverControllerDelegate>

 {
    UIAlertController *_alertController;
    _UIAlertControllerShimPresenter *_presenter;
    UIActionSheet *_retainedSelf;
    NSMutableArray *_actions;
    NSInteger _cancelIndex;
    NSInteger _firstOtherButtonIndex;
    NSInteger _destructiveButtonIndex;
    NSInteger _actionSheetStyle;
    BOOL _hasPreparedAlertActions;
    BOOL _isPresented;
    BOOL _alertControllerShouldDismiss;
    BOOL _handlingAlertActionShouldDismiss;
    BOOL _dismissingAlertController;
}


@property (nonatomic) NSInteger actionSheetStyle;
@property (nonatomic) NSInteger cancelButtonIndex;
@property (retain, nonatomic) id *context; // ivar: _context
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<UIActionSheetDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) NSInteger destructiveButtonIndex;
@property (readonly, nonatomic) NSInteger firstOtherButtonIndex;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger numberOfButtons;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic, getter=isVisible) BOOL visible;


-(BOOL)_prepareToDismissForTappedIndex:(NSInteger)arg0 ;
-(NSInteger)addButtonWithTitle:(id)arg0 ;
-(id)_alertController;
-(id)_preparedAlertActionAtIndex:(NSUInteger)arg0 ;
-(id)addButtonWithTitle:(id)arg0 label:(id)arg1 ;
-(id)bodyText;
-(id)buttonTitleAtIndex:(NSInteger)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithTitle:(id)arg0 delegate:(id)arg1 cancelButtonTitle:(id)arg2 destructiveButtonTitle:(id)arg3 otherButtonTitles:(id)arg4 ;
-(id)message;
-(void)_didPresent;
-(void)_dismissForTappedIndex:(NSInteger)arg0 ;
-(void)_performPresentationDismissalWithClickedButtonIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)_prepareAlertActions;
-(void)_setAttributedTitleString:(id)arg0 ;
-(void)_setIsPresented:(BOOL)arg0 ;
-(void)_showFromRect:(struct CGRect )arg0 inView:(id)arg1 direction:(NSUInteger)arg2 animated:(BOOL)arg3 ;
-(void)dealloc;
-(void)dismissWithClickedButtonIndex:(NSInteger)arg0 animated:(BOOL)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg0 ;
-(void)presentFromRect:(struct CGRect )arg0 inView:(id)arg1 direction:(NSUInteger)arg2 allowInteractionWithViews:(id)arg3 backgroundStyle:(NSInteger)arg4 animated:(BOOL)arg5 ;
-(void)setBodyText:(id)arg0 ;
-(void)setMessage:(id)arg0 ;
-(void)setSubtitle:(id)arg0 ;
-(void)setTaglineText:(id)arg0 ;
-(void)showFromBarButtonItem:(id)arg0 animated:(BOOL)arg1 ;
-(void)showFromRect:(struct CGRect )arg0 inView:(id)arg1 animated:(BOOL)arg2 ;
-(void)showFromTabBar:(id)arg0 ;
-(void)showFromToolbar:(id)arg0 ;
-(void)showInView:(id)arg0 ;


@end


#endif