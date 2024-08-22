// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SEARCHUIMULTIRESULTTABLEVIEWCELL_H
#define SEARCHUIMULTIRESULTTABLEVIEWCELL_H

@class TLKAuxilliaryTextView, NSArray;


#import "SearchUITableViewCell.h"
#import "SearchUIAppIconsRowView.h"
#import "SearchUIMultiResultRowModel.h"

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell

@property (retain, nonatomic) SearchUIAppIconsRowView *bottomRow; // ivar: _bottomRow
@property (retain, nonatomic) TLKAuxilliaryTextView *folderLabelView; // ivar: _folderLabelView
@property (nonatomic) NSInteger indexOfSelectedKeyboardIcon; // ivar: _indexOfSelectedKeyboardIcon
@property (retain, nonatomic) NSArray *results; // ivar: _results
@property (retain, nonatomic) SearchUIMultiResultRowModel *rowModel;
@property (retain, nonatomic) SearchUIAppIconsRowView *topRow; // ivar: _topRow


+(NSUInteger)numberOfColumnsForCurrentOrientation;
-(BOOL)canSetupKeyboardHandler;
-(BOOL)isExpandable;
-(BOOL)navigateKeyboardDown;
-(BOOL)navigateKeyboardLeft;
-(BOOL)navigateKeyboardRight;
-(BOOL)navigateKeyboardUp;
-(CGFloat)appRowVerticalSpacingForTopRowSize:(struct CGSize )arg0 ;
-(NSUInteger)numberOfVisibleResults;
-(id)hitTest:(struct CGPoint )arg0 withEvent:(id)arg1 ;
-(id)initWithRowModel:(id)arg0 feedbackDelegate:(id)arg1 ;
-(id)keyboardResultForFocus;
-(id)viewForHighlightedIndex:(NSInteger)arg0 ;
-(id)visibleResults;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)deleteIcon:(id)arg0 ;
-(void)layoutSubviews;
-(void)removeHighlightedIconState;
-(void)removeKeyboardHandler;
-(void)returnKeyPressed;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setupKeyboardHandler;
-(void)updateExpanded:(BOOL)arg0 ;
-(void)updateWithRowModel:(id)arg0 ;


@end


#endif