// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SEARCHUIINFOVALUECOLLECTIONVIEWCELL_H
#define SEARCHUIINFOVALUECOLLECTIONVIEWCELL_H

@class UICollectionViewCell, TLKStackView, TLKLabel;


#import "SearchUIImageView.h"

@interface SearchUIInfoValueCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) SearchUIImageView *imageView; // ivar: _imageView
@property (retain, nonatomic) TLKStackView *stackView; // ivar: _stackView
@property (retain, nonatomic) TLKLabel *valueLabel; // ivar: _valueLabel


-(BOOL)_disableRasterizeInAnimations;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(struct CGSize )systemLayoutSizeFittingSize:(struct CGSize )arg0 withHorizontalFittingPriority:(float)arg1 verticalFittingPriority:(float)arg2 ;
-(void)layoutSubviews;
-(void)updateWithString:(id)arg0 image:(id)arg1 ;


@end


#endif