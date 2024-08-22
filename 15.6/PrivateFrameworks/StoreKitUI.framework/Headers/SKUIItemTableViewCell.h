// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SKUIITEMTABLEVIEWCELL_H
#define SKUIITEMTABLEVIEWCELL_H

@class NSString;
@protocol SKUICellLayoutParentView;


#import "SKUITableViewCell.h"
#import "SKUIItemCellLayout.h"

@interface SKUIItemTableViewCell : SKUITableViewCell <SKUICellLayoutParentView>

 {
    BOOL _layoutNeedsLayout;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIItemCellLayout *layout;
@property (readonly) Class superclass;


-(void)configureForItem:(id)arg0 clientContext:(id)arg1 rowIndex:(NSInteger)arg2 ;
-(void)configureForItem:(id)arg0 rowIndex:(NSInteger)arg1 ;
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setCellLayoutNeedsLayout;
-(void)setHighlighted:(BOOL)arg0 animated:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg0 animated:(BOOL)arg1 ;


@end


#endif