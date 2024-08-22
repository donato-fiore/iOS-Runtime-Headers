// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GKCHALLENGELISTVIEWSECTIONHEADER_H
#define GKCHALLENGELISTVIEWSECTIONHEADER_H

@class UICollectionReusableView, UILabel, UITapGestureRecognizer;



@interface GKChallengeListViewSectionHeader : UICollectionReusableView

@property (retain, nonatomic) UILabel *secondaryLabel; // ivar: _secondaryLabel
@property (retain, nonatomic) UITapGestureRecognizer *secondaryLabelTapGesture; // ivar: _secondaryLabelTapGesture
@property (copy, nonatomic) id *secondaryLabelTapHandler; // ivar: _secondaryLabelTapHandler
@property (retain, nonatomic) UILabel *titleLabel; // ivar: _titleLabel
@property (nonatomic) BOOL wantsSecondaryLabel; // ivar: _wantsSecondaryLabel


-(void)awakeFromNib;
-(void)secondaryLabelTapped:(id)arg0 ;


@end


#endif