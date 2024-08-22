// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SIRIUIREVIEWITEMCELL_H
#define SIRIUIREVIEWITEMCELL_H

@class UILabel, UIView;


#import "SiriUIContentCollectionViewCell.h"

@interface SiriUIReviewItemCell : SiriUIContentCollectionViewCell {
    UILabel *_commentLabel;
    UILabel *_authorLabel;
    UIView *_ratingView;
    UIOffset _ratingOffset;
}


@property (nonatomic) NSInteger characterLimit; // ivar: _characterLimit
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets


+(NSInteger)defaultCharacterLimit;
+(id)_authorDateFontAttribute;
+(id)_authorFontAttribute;
+(id)_commentLabelFont;
+(id)_displayTextForComment:(id)arg0 characterLimit:(NSInteger)arg1 ;
+(struct CGSize )sizeThatFits:(struct CGSize )arg0 withReview:(id)arg1 characterLimit:(NSInteger)arg2 ;
+(struct UIEdgeInsets )_defaultEdgeInsets;
-(id)_relativeStringFromDate:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_setAuthor:(id)arg0 andDate:(id)arg1 timeZoneId:(id)arg2 hasRatingView:(BOOL)arg3 ;
-(void)_setComment:(id)arg0 ;
-(void)_setRatingView:(id)arg0 ;
-(void)configureWithReview:(id)arg0 ratingView:(id)arg1 offset:(struct UIOffset )arg2 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif