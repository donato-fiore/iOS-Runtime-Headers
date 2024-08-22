// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef QLFINDONPAGEINPUTVIEW_H
#define QLFINDONPAGEINPUTVIEW_H

@class UIInputView, UIToolbar, UIBarButtonItem, NSArray, NSTimer, UILabel, NSString, UITextField;
@protocol UISearchBarDelegate, QLFindOnPageToolbarDelegate;


#import "QLFindOnPageInputBar.h"

@interface QLFindOnPageInputView : UIInputView <UISearchBarDelegate>

 {
    UIToolbar *_toolbar;
    UIBarButtonItem *_previousButtonItem;
    UIBarButtonItem *_nextButtonItem;
    QLFindOnPageInputBar *_inputBar;
    UIBarButtonItem *_cancelBarButtonItem;
    NSArray *_toolbarItems;
    id<QLFindOnPageToolbarDelegate> *_findDelegate;
    NSTimer *_textChangedUpdateTimer;
    UILabel *_inFieldMatchLabel;
    BOOL _editing;
    BOOL _isVirtualKeyboardVisible;
    CGRect _onscreenKeyboardFrame;
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
-(void)dealloc;
-(void)dismiss:(id)arg0 ;
-(void)layoutSubviews;
-(void)next:(id)arg0 ;
-(void)previous:(id)arg0 ;
-(void)safeAreaInsetsDidChange;
-(void)searchBar:(id)arg0 textDidChange:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg0 ;
-(void)searchBarTextDidEndEditing:(id)arg0 ;
-(void)updateUI;


@end


#endif