// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CPUIMESSAGECELL_H
#define CPUIMESSAGECELL_H

@class CPUIBaseTableCell, NSArray, UIImage, UIImageView, UILabel;



@interface CPUIMessageCell : CPUIBaseTableCell

@property (retain, nonatomic) NSArray *constraints; // ivar: _constraints
@property (retain, nonatomic) UIImage *leadingGlyph; // ivar: _leadingGlyph
@property (retain, nonatomic) UIImageView *leadingGlyphView; // ivar: _leadingGlyphView
@property (retain, nonatomic) UIImageView *primaryImageView; // ivar: _primaryImageView
@property (retain, nonatomic) UILabel *primaryLabel; // ivar: _primaryLabel
@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (retain, nonatomic) UIImage *trailingGlyph; // ivar: _trailingGlyph
@property (retain, nonatomic) UIImageView *trailingGlyphView; // ivar: _trailingGlyphView
@property (retain, nonatomic) UIImageView *trailingImageView; // ivar: _trailingImageView
@property (retain, nonatomic) UILabel *trailingLabel; // ivar: _trailingLabel
@property (retain, nonatomic) UIImageView *unreadImageView; // ivar: _unreadImageView
@property (retain, nonatomic) UIImage *unreadIndicatorImage; // ivar: _unreadIndicatorImage


+(CGFloat)minimumHeight;
+(CGFloat)rowHeight;
-(void)_updateTintColors;
-(void)applyConfiguration:(id)arg0 ;
-(void)configureCell;
-(void)didUpdateFocusInContext:(id)arg0 withAnimationCoordinator:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setUnread:(BOOL)arg0 ;


@end


#endif