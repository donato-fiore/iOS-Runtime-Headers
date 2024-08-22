// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKEVENTDETAILATTENDEESLISTVIEW_H
#define EKEVENTDETAILATTENDEESLISTVIEW_H

@class UIView, NSMutableArray, NSArray, UIActivityIndicatorView, UIColor, UIViewController;



@interface EKEventDetailAttendeesListView : UIView {
    NSInteger _statusCounts;
    int _firstColumnBType;
    CGFloat _maxHeight;
    CGFloat _actualHeight;
    NSMutableArray *_inviteeNames;
    BOOL _shouldEvenOutBlocks;
    NSArray *_finalizedNames;
    UIActivityIndicatorView *_spinnerView;
    BOOL _showingSpinner;
}


@property (nonatomic) CGFloat bottomSpacingForSpinner; // ivar: _bottomSpacingForSpinner
@property (readonly, nonatomic) NSInteger columnAItems; // ivar: _columnAItems
@property (readonly, nonatomic) NSInteger columnBItems; // ivar: _columnBItems
@property (nonatomic) BOOL groupsNames; // ivar: _groupsNames
@property (nonatomic, getter=isHighlighted) BOOL highlighted; // ivar: _highlighted
@property (retain, nonatomic) UIColor *highlightedTextColor; // ivar: _highlightedTextColor
@property (retain, nonatomic) UIColor *textColor; // ivar: _textColor
@property (retain, nonatomic) NSArray *ungrouped; // ivar: _ungrouped
@property (weak, nonatomic) UIViewController *viewController; // ivar: _viewController


-(BOOL)_haveContentToDraw;
-(BOOL)_haveInviteesToDraw;
-(BOOL)_shouldAlwaysDrawSingleColumn;
-(CGFloat)_calculateHeightForItemCounts:(NSInteger)arg0 ;
-(CGFloat)_calculateHeightForSpinnerDisplayMode;
-(CGFloat)calculatedHeight;
-(CGFloat)maxColumnHeight;
-(CGFloat)maxHeight;
-(id)generateAttributedStringsFromDisplayParticipants:(id)arg0 glyph:(id)arg1 displayCount:(NSInteger)arg2 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_createSpinnerViewIfNeeded;
-(void)_layoutSpinner;
-(void)_setShowingSpinner:(BOOL)arg0 ;
-(void)contentSizeCategoryChanged;
-(void)dealloc;
-(void)drawNames:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)finalizeInviteNames;
-(void)layoutSubviews;
-(void)recalculateHeight;
-(void)setInvitees:(id)arg0 forStatus:(int)arg1 ;
-(void)setup;
-(void)showSpinner;


@end


#endif