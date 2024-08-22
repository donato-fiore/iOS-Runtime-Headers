// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXPEOPLEZEROKEYWORDCOLLECTIONVIEWCELL_H
#define PXPEOPLEZEROKEYWORDCOLLECTIONVIEWCELL_H

@class UIView;


#import "PXSearchZeroKeywordCollectionViewCell.h"

@interface PXPeopleZeroKeywordCollectionViewCell : PXSearchZeroKeywordCollectionViewCell

@property (retain, nonatomic) UIView *peopleContentView; // ivar: _peopleContentView


+(id)reuseIdentifier;
-(void)layoutSubviews;
-(void)prepareForReuse;
-(void)setPeople:(id)arg0 withThumbnailSize:(struct CGSize )arg1 ;
-(void)setThumbnailSize:(struct CGSize )arg0 ;


@end


#endif