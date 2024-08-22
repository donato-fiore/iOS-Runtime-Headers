// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIITEMCOLLECTIONVIEWCELL_H
#define SKUIITEMCOLLECTIONVIEWCELL_H

@class NSString;
@protocol SKUICellLayoutParentView;


#import "SKUICollectionViewCell.h"
#import "SKUIItemCellLayout.h"

@interface SKUIItemCollectionViewCell : SKUICollectionViewCell <SKUICellLayoutParentView>

 {
    BOOL _layoutNeedsLayout;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIItemCellLayout *layout;
@property (readonly) Class superclass;


-(void)applyLayoutAttributes:(id)arg0 ;
-(void)configureForItem:(id)arg0 clientContext:(id)arg1 ;
-(void)prepareForReuse;
-(void)setBounds:(struct CGRect )arg0 ;
-(void)setCellLayoutNeedsLayout;
-(void)setFrame:(struct CGRect )arg0 ;
-(void)setHighlighted:(BOOL)arg0 ;
-(void)setSelected:(BOOL)arg0 ;


@end


#endif