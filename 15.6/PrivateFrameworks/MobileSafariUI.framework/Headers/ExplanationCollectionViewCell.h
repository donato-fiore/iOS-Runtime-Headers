// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef EXPLANATIONCOLLECTIONVIEWCELL_H
#define EXPLANATIONCOLLECTIONVIEWCELL_H

@class UICollectionViewCell, UILabel;



@interface ExplanationCollectionViewCell : UICollectionViewCell

@property (readonly, nonatomic) UILabel *bodyLabel; // ivar: _bodyLabel
@property (readonly, nonatomic) UILabel *headerLabel; // ivar: _headerLabel


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)layoutSubviews;


@end


#endif