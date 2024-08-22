// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MKPLACEREVIEWSVIEWCELL_H
#define MKPLACEREVIEWSVIEWCELL_H

@class UIImageView, NSLayoutConstraint, NSString, NSDate;


#import "MKPlaceSectionRowView.h"
#import "_MKUILabel.h"
#import "MKPlaceReviewAvatarGenerator.h"

@interface MKPlaceReviewsViewCell : MKPlaceSectionRowView {
    UIImageView *_pictureView;
    _MKUILabel *_detailLabel;
    _MKUILabel *_reviewLabel;
    NSLayoutConstraint *_reviewLabelTopConstraint;
    NSLayoutConstraint *_reviewLabelToAuthorLabelConstraint;
    NSLayoutConstraint *_authorLabelBaselineConstraint;
}


@property (copy, nonatomic) NSString *author; // ivar: _author
@property (retain, nonatomic) MKPlaceReviewAvatarGenerator *avatarGenerator; // ivar: _avatarGenerator
@property (retain, nonatomic) NSDate *date; // ivar: _date
@property (nonatomic) BOOL isLastReview; // ivar: _isLastReview
@property (nonatomic) NSUInteger rating; // ivar: _rating


-(NSUInteger)maxCharacters;
-(id)detailLabelText;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_contentSizeDidChange;
-(void)_updatePictureTheme:(id)arg0 ;
-(void)infoCardThemeChanged;
-(void)setPicture:(id)arg0 ;
-(void)setReview:(id)arg0 ;
-(void)setReviewText:(id)arg0 ;


@end


#endif