// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TVCONTENTRATINGTEXTBADGEVIEW_H
#define _TVCONTENTRATINGTEXTBADGEVIEW_H

@class UIView, UILayoutGuide, NSAttributedString, NSString;



@interface _TVContentRatingTextBadgeView : UIView

@property (retain, nonatomic) UILayoutGuide *contentGuide; // ivar: _contentGuide
@property (copy, nonatomic) NSAttributedString *contentRatingAttributedText; // ivar: _contentRatingAttributedText
@property (copy, nonatomic) NSString *contentRatingText;


+(id)_attributedRatingTextForText:(id)arg0 color:(id)arg1 ;
+(id)_badgeImageWithAttributedRatingText:(id)arg0 andColor:(id)arg1 ;
+(struct CGSize )_badgeSizeForAttributedRatingText:(id)arg0 ;
+(struct UIEdgeInsets )_paddingEdgeInsets;
+(void)_drawBadgeWithAttributedRatingText:(id)arg0 inContext:(struct CGContext *)arg1 rect:(struct CGRect )arg2 color:(id)arg3 ;
-(id)firstBaselineAnchor;
-(id)initWithBaselineOffsetFromBottom:(CGFloat)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(id)lastBaselineAnchor;
-(struct CGSize )_intrinsicContentSize;
-(struct CGSize )intrinsicContentSize;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)_updateContentRatingAttributedText:(id)arg0 ;
-(void)drawRect:(struct CGRect )arg0 ;
-(void)tintColorDidChange;


@end


#endif