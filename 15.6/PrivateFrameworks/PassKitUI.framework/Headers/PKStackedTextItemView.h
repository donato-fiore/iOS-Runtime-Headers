// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKSTACKEDTEXTITEMVIEW_H
#define PKSTACKEDTEXTITEMVIEW_H

@class UIView, UILabel, NSMutableSet, UIFont;


#import "PKStackedTextItem.h"

@interface PKStackedTextItemView : UIView {
    UILabel *_title;
    UILabel *_primary;
    UILabel *_secondary;
    UILabel *_tertiary;
    CGSize _boundsSize;
    NSMutableSet *_snapshots;
    UIFont *_significantPrimaryFont;
    UIFont *_primaryFont;
    UIFont *_layoutPrimaryFont;
    UIFont *_idealTitleFont;
    UIFont *_idealPrimaryFont;
    UIFont *_idealSecondaryFont;
    UIFont *_idealTertiaryFont;
    BOOL _animated;
}


@property (copy, nonatomic) PKStackedTextItem *content; // ivar: _content
@property (nonatomic) ? contentConstraints; // ivar: _contentConstraints
@property (readonly, nonatomic) NSInteger style; // ivar: _style
@property (nonatomic) NSInteger textAlignment; // ivar: _textAlignment


-(CGFloat)_prepareViewForReuse:(id)arg0 ;
-(CGFloat)headerPadding;
-(id)_attributedStringWithText:(id)arg0 strikethrough:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(struct ? )_titleFontMetrics;
-(struct ? )boundingMetricForWidth:(CGFloat)arg0 ;
-(void)_updateAlignmentAnimated:(BOOL)arg0 ;
-(void)_updateSubviewsAnimated:(BOOL)arg0 ;
-(void)layoutIfNeededAnimated:(BOOL)arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif