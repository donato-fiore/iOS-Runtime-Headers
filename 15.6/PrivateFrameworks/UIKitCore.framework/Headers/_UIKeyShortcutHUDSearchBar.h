// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _UIKEYSHORTCUTHUDSEARCHBAR_H
#define _UIKEYSHORTCUTHUDSEARCHBAR_H

@class NSArray, NSString;
@protocol _UIKeyShortcutHUDSearchBarDelegate;


#import "UIView.h"
#import "UIButton.h"
#import "_UIKeyShortcutHUDSearchButton.h"
#import "_UIKeyShortcutHUDSearchTextField.h"

@interface _UIKeyShortcutHUDSearchBar : UIView

@property (retain, nonatomic) UIView *backgroundView; // ivar: _backgroundView
@property (retain, nonatomic) UIButton *cancelButton; // ivar: _cancelButton
@property (weak, nonatomic) NSObject<_UIKeyShortcutHUDSearchBarDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic, getter=isEditing) BOOL editing;
@property (weak, nonatomic) _UIKeyShortcutHUDSearchButton *searchButton;
@property (readonly, nonatomic) _UIKeyShortcutHUDSearchTextField *searchTextField; // ivar: _searchTextField
@property (retain, nonatomic) NSArray *searchTextFieldTransitionConstraints; // ivar: _searchTextFieldTransitionConstraints
@property (nonatomic, getter=isSearching) BOOL searching; // ivar: _searching
@property (retain, nonatomic) NSArray *standardSearchTextFieldConstraints; // ivar: _standardSearchTextFieldConstraints
@property (retain, nonatomic) NSString *text;
@property (nonatomic, getter=isUsingFallbackSearchAnimation) BOOL usingFallbackSearchAnimation; // ivar: _usingFallbackSearchAnimation


-(BOOL)becomeFirstResponder;
-(BOOL)isFirstResponder;
-(BOOL)resignFirstResponder;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInit;
-(void)_createBackgroundView;
-(void)_createCancelButton;
-(void)_createSearchTextField;
-(void)_doNothing:(id)arg0 ;
-(void)_setupLayout;
-(void)_textChanged:(id)arg0 ;
-(void)didCompleteSearchTransition;
-(void)prepareForSearchTransition:(BOOL)arg0 usingCell:(id)arg1 ;
-(void)selectAll:(id)arg0 ;


@end


#endif