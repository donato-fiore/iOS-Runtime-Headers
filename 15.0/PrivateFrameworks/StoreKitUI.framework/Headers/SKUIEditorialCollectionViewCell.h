// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUIEDITORIALCOLLECTIONVIEWCELL_H
#define SKUIEDITORIALCOLLECTIONVIEWCELL_H

@class NSString;
@protocol SKUICellLayoutParentView;


#import "SKUICollectionViewCell.h"
#import "SKUIEditorialCellLayout.h"

@interface SKUIEditorialCollectionViewCell : SKUICollectionViewCell <SKUICellLayoutParentView>

 {
    BOOL _layoutNeedsLayout;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) SKUIEditorialCellLayout *layout; // ivar: _layout
@property (readonly) Class superclass;


-(id)initWithFrame:(struct CGRect )arg0 ;
-(void)applyLayoutAttributes:(id)arg0 ;
-(void)prepareForReuse;
-(void)setBackgroundColor:(id)arg0 ;
-(void)setCellLayoutNeedsLayout;


@end


#endif