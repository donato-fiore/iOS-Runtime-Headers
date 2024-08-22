// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUIEDITORIALLOCKUPCOLLECTIONVIEWCELL_H
#define SKUIEDITORIALLOCKUPCOLLECTIONVIEWCELL_H



#import "SKUIItemCollectionViewCell.h"
#import "SKUIEditorialLockupCellLayout.h"

@interface SKUIEditorialLockupCollectionViewCell : SKUIItemCollectionViewCell

@property (readonly, nonatomic) SKUIEditorialLockupCellLayout *layout; // ivar: _layout


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureForItem:(id)arg0 clientContext:(id)arg1 ;


@end


#endif