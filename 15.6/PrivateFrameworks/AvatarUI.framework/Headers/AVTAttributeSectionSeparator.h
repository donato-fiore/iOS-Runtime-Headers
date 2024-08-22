// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTATTRIBUTESECTIONSEPARATOR_H
#define AVTATTRIBUTESECTIONSEPARATOR_H

@class UICollectionReusableView, UIView;



@interface AVTAttributeSectionSeparator : UICollectionReusableView

@property (nonatomic) UIEdgeInsets edgeInsets; // ivar: _edgeInsets
@property (retain, nonatomic) UIView *separatorView; // ivar: _separatorView


+(id)reuseIdentifier;
-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;
-(void)prepareForReuse;


@end


#endif