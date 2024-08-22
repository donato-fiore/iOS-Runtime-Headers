// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CNAUTOCOMPLETESUGGESTIONSVIEWSECTIONHEADER_H
#define CNAUTOCOMPLETESUGGESTIONSVIEWSECTIONHEADER_H

@class UICollectionReusableView, UILabel;



@interface CNAutocompleteSuggestionsViewSectionHeader : UICollectionReusableView

@property (readonly, nonatomic) UILabel *titleLabel; // ivar: _titleLabel


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)prepareForReuse;
-(void)setupConstraints;


@end


#endif