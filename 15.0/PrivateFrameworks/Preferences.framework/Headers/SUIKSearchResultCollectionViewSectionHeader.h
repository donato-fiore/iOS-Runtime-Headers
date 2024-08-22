// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUIKSEARCHRESULTCOLLECTIONVIEWSECTIONHEADER_H
#define SUIKSEARCHRESULTCOLLECTIONVIEWSECTIONHEADER_H

@class UICollectionReusableView, UIImageView;



@interface SUIKSearchResultCollectionViewSectionHeader : UICollectionReusableView

@property (retain, nonatomic) UIImageView *categoryImageView; // ivar: _categoryImageView


+(id)reuseIdentifier;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)_commonInit;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)prepareForReuse;
-(void)setCategoryImage:(id)arg0 ;


@end


#endif