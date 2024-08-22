// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKUILOCKUPITEMCOLLECTIONVIEWCELL_H
#define SKUILOCKUPITEMCOLLECTIONVIEWCELL_H



#import "SKUIItemCollectionViewCell.h"
#import "SKUILockupItemCellLayout.h"

@interface SKUILockupItemCollectionViewCell : SKUIItemCollectionViewCell

@property (readonly, nonatomic) SKUILockupItemCellLayout *layout; // ivar: _layout


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)configureForItem:(id)arg0 clientContext:(id)arg1 ;


@end


#endif