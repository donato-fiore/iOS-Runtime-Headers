// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXPEOPLESPLITCONFIRMATIONVIEWCONTROLLER_H
#define PXPEOPLESPLITCONFIRMATIONVIEWCONTROLLER_H

@class NSLayoutConstraint, NSArray, UIButton, UILayoutGuide, UIView, UIBarButtonItem;


#import "PXPeopleConfirmationViewController.h"

@interface PXPeopleSplitConfirmationViewController : PXPeopleConfirmationViewController

@property (retain, nonatomic) NSLayoutConstraint *buttonSizeConstraint; // ivar: _buttonSizeConstraint
@property (retain, nonatomic) NSArray *commonConstraints; // ivar: _commonConstraints
@property (retain, nonatomic) UIButton *confirmButton; // ivar: _confirmButton
@property (retain, nonatomic) NSLayoutConstraint *controlGuideHeightConstraint; // ivar: _controlGuideHeightConstraint
@property (retain, nonatomic) UILayoutGuide *controlLayoutGuide; // ivar: _controlLayoutGuide
@property (retain, nonatomic) UIButton *denyButton; // ivar: _denyButton
@property (retain, nonatomic) NSLayoutConstraint *firstButtonSpacingConstraint; // ivar: _firstButtonSpacingConstraint
@property (retain, nonatomic) UIView *interimLoadingView; // ivar: _interimLoadingView
@property (retain, nonatomic) NSArray *landscapeConstraints; // ivar: _landscapeConstraints
@property (retain, nonatomic) NSArray *portraitConstraints; // ivar: _portraitConstraints
@property (retain, nonatomic) NSLayoutConstraint *secondButtonSpacingConstraint; // ivar: _secondButtonSpacingConstraint
@property (retain, nonatomic) UIBarButtonItem *undoButton; // ivar: _undoButton


-(id)_buttonBackgroundImageFromColor:(id)arg0 ;
-(id)_buttonWithTitle:(id)arg0 action:(SEL)arg1 andColor:(id)arg2 ;
-(id)initWithPerson:(id)arg0 ;
-(void)_disableActionButtonsWithSelectedButton:(id)arg0 ;
-(void)_enableActionButtons;
-(void)_updateUndoButton;
-(void)confirmTapped:(id)arg0 ;
-(void)contentSizeCategoryDidChangeNotification:(id)arg0 ;
-(void)dealloc;
-(void)denyTapped:(id)arg0 ;
-(void)noMoreSuggestionsAvailableForSuggestionManager:(id)arg0 ;
-(void)suggestionDidDisplay;
-(void)suggestionManager:(id)arg0 hasNewSuggestionsAvailable:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)undoButtonTapped:(id)arg0 ;
-(void)updateViewConstraints;
-(void)updateViewWithViewState:(NSUInteger)arg0 ;
-(void)viewDidLoad;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif