// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef LUILOGVIEWERVIEW_H
#define LUILOGVIEWERVIEW_H

@class UIView, UIStackView, UIButton, UISearchBar, UILabel;
@protocol LUILogViewerViewDelegate;



@interface LUILogViewerView : UIView

@property (retain, nonatomic) UIStackView *buttonStack; // ivar: _buttonStack
@property (retain, nonatomic) UIButton *clearButton; // ivar: _clearButton
@property (retain, nonatomic) UIButton *closeButton; // ivar: _closeButton
@property (retain, nonatomic) UIView *contentHolderView; // ivar: _contentHolderView
@property (weak, nonatomic) NSObject<LUILogViewerViewDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) UIButton *filterButton; // ivar: _filterButton
@property (retain, nonatomic) UIView *filterView; // ivar: _filterView
@property (retain, nonatomic) UIButton *leftCaretButton; // ivar: _leftCaretButton
@property (retain, nonatomic) UIButton *logButton; // ivar: _logButton
@property (retain, nonatomic) UIButton *rightCaretButton; // ivar: _rightCaretButton
@property (retain, nonatomic) UISearchBar *searchBar; // ivar: _searchBar
@property (retain, nonatomic) UILabel *searchResultLabel; // ivar: _searchResultLabel


-(id)_createButtonWithTitle:(id)arg0 action:(SEL)arg1 ;
-(id)_createClearButton;
-(id)_createCloseButton;
-(id)_createFilterButton;
-(id)_createLeftCaretButton;
-(id)_createLogButton;
-(id)_createRightCaretButton;
-(id)_createSearchBar;
-(id)_createSearchResultLabel;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_highlightButton:(id)arg0 highlight:(BOOL)arg1 ;
-(void)_setup;
-(void)clearButtonTapped:(id)arg0 ;
-(void)closeButtonTapped:(id)arg0 ;
-(void)filterButtonTapped:(id)arg0 ;
-(void)highlightFilterButton:(BOOL)arg0 ;
-(void)highlightLogButton:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)leftCaretButtonTapped:(id)arg0 ;
-(void)logButtonTapped:(id)arg0 ;
-(void)rightCaretButtonTapped:(id)arg0 ;
-(void)switchClearButtonTitle:(BOOL)arg0 ;
-(void)updateSearchResultLabelWithTotalResult:(NSUInteger)arg0 currentIndex:(NSUInteger)arg1 ;


@end


#endif