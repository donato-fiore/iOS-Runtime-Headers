// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSZKWBROWSERHEADERVIEW_H
#define STSZKWBROWSERHEADERVIEW_H

@class UIView, UIVisualEffectView, UIButton, NSMutableArray, NSArray, NSString;
@protocol UISearchBarDelegate, UITextFieldDelegate, STSSearchBarDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource, STSZKWBrowserHeaderViewDelegate, STSKeyCommandDelegate;


#import "STSSearchBar.h"

@interface STSZKWBrowserHeaderView : UIView <UISearchBarDelegate, UITextFieldDelegate, STSSearchBarDelegate, PKScribbleInteractionDelegate, PKScribbleInteractionElementSource>

 {
    UIVisualEffectView *_visualEffectView;
    STSSearchBar *_searchBar;
    UIButton *_feedbackButton;
    NSMutableArray *_topZKWButtons;
    NSMutableArray *_bottomZKWButtons;
    BOOL _writingInSearchBar;
    NSMutableArray *_searchBarConstraints;
}


@property (copy, nonatomic) NSArray *bottomSuggestions; // ivar: _bottomSuggestions
@property (nonatomic) UIEdgeInsets contentInset; // ivar: _contentInset
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<STSZKWBrowserHeaderViewDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSObject<STSKeyCommandDelegate> *keyCommandDelegate; // ivar: _keyCommandDelegate
@property (readonly) Class superclass;
@property (copy, nonatomic) NSArray *topSuggestions; // ivar: _topSuggestions


-(BOOL)_scribbleInteraction:(id)arg0 focusWillTransformElement:(id)arg1 ;
-(BOOL)_scribbleInteraction:(id)arg0 shouldBeginAtLocation:(struct CGPoint )arg1 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg0 ;
-(CGFloat)_searchBarWidthFraction;
-(NSUInteger)_suggestionIndexForButton:(id)arg0 ;
-(id)_buttonWithTitle:(id)arg0 ;
-(id)init;
-(id)keyCommands;
-(id)searchQuery;
-(struct CGRect )_scribbleInteraction:(id)arg0 frameForElement:(id)arg1 ;
-(struct CGRect )contentRect;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_cancelButtonPressed:(id)arg0 ;
-(void)_scribbleInteraction:(id)arg0 didFinishWritingInElement:(id)arg1 ;
-(void)_scribbleInteraction:(id)arg0 focusElement:(id)arg1 initialFocusSelectionReferencePoint:(struct CGPoint )arg2 completion:(id)arg3 ;
-(void)_scribbleInteraction:(id)arg0 requestElementsInRect:(struct CGRect )arg1 completion:(id)arg2 ;
-(void)_scribbleInteraction:(id)arg0 willBeginWritingInElement:(id)arg1 ;
-(void)_searchButtonPressed:(id)arg0 ;
-(void)_suggestionButtonPressed:(id)arg0 ;
-(void)_updateTopStackView:(BOOL)arg0 andBottomStackView:(BOOL)arg1 ;
-(void)clear;
-(void)downArrowPressed;
-(void)enableSearchButton;
-(void)escapeKeyPressed;
-(void)layoutSubviews;
-(void)returnKeyPressed;
-(void)searchBarCancelButtonClicked:(id)arg0 ;
-(void)searchBarClicked;
-(void)setSearchQuery:(id)arg0 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)upArrowPressed;


@end


#endif