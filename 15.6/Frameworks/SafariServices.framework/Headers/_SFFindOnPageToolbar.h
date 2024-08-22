// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _SFFINDONPAGETOOLBAR_H
#define _SFFINDONPAGETOOLBAR_H

@class UIInputView, UIToolbar, UIBarButtonItem, NSArray, NSTimer, UILabel, NSString, UITextField;
@protocol UISearchBarDelegate, _SFFindOnPageToolbarDelegate;


#import "_SFFindOnPageInputBar.h"

@interface _SFFindOnPageToolbar : UIInputView <UISearchBarDelegate>

 {
    UIToolbar *_toolbar;
    UIBarButtonItem *_previousButtonItem;
    UIBarButtonItem *_nextButtonItem;
    _SFFindOnPageInputBar *_inputBar;
    UIBarButtonItem *_doneBarButtonItem;
    NSArray *_toolbarItems;
    id<_SFFindOnPageToolbarDelegate> *_findDelegate;
    NSTimer *_textChangedUpdateTimer;
    UILabel *_inFieldMatchLabel;
    BOOL _editing;
    BOOL _useBottomInset;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) UITextField *inputField;
@property (copy, nonatomic) NSString *searchText; // ivar: _searchText
@property (readonly) Class superclass;
@property (nonatomic) BOOL usesNarrowLayout; // ivar: _usesNarrowLayout


-(BOOL)_keyboardIsSplit;
-(BOOL)_updateEditing:(BOOL)arg0 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(CGFloat)_accessoryViewHeight;
-(CGFloat)_toolbarVerticalInset;
-(id)_matchLabelText;
-(id)initWithDelegate:(id)arg0 ;
-(struct CGRect )_toolbarFrame;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )leftContentViewSize;
-(struct CGSize )rightContentViewSize;
-(void)_doUpdateSearchText;
-(void)_done;
-(void)_initializeToolbarItems;
-(void)_keyboardWillChangeFrame:(id)arg0 ;
-(void)dismiss:(id)arg0 ;
-(void)layoutSubviews;
-(void)next:(id)arg0 ;
-(void)previous:(id)arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg0 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)updateUI;


@end


#endif