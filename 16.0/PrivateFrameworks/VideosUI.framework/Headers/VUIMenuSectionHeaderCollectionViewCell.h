// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VUIMENUSECTIONHEADERCOLLECTIONVIEWCELL_H
#define VUIMENUSECTIONHEADERCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, NSString;


#import "VUILabel.h"

@interface VUIMenuSectionHeaderCollectionViewCell : UICollectionViewCell

@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) VUILabel *titleLabel; // ivar: _titleLabel


-(struct CGSize )_layoutWithSize:(struct CGSize )arg0 metricsOnly:(BOOL)arg1 ;
-(struct CGSize )sizeThatFits:(struct CGSize )arg0 ;
-(void)layoutSubviews;


@end


#endif