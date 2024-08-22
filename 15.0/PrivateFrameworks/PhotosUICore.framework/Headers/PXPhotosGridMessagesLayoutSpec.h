// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PXPHOTOSGRIDMESSAGESLAYOUTSPEC_H
#define PXPHOTOSGRIDMESSAGESLAYOUTSPEC_H



#import "PXFeatureSpec.h"

@interface PXPhotosGridMessagesLayoutSpec : PXFeatureSpec {
    CGSize _referenceSize;
}


@property (readonly, nonatomic) CGSize interItemSpacing; // ivar: _interItemSpacing
@property (readonly, nonatomic) CGFloat itemCornerRadius; // ivar: _itemCornerRadius
@property (readonly, nonatomic) CGSize itemInternalMargin; // ivar: _itemInternalMargin
@property (readonly, nonatomic) CGSize itemInternalSquareMargin; // ivar: _itemInternalSquareMargin
@property (readonly, nonatomic) NSUInteger numberOfColumns; // ivar: _numberOfColumns
@property (readonly, nonatomic) UIEdgeInsets padding; // ivar: _padding


-(NSInteger)numberOfColumnsForNumberOfItems:(NSInteger)arg0 ;
-(id)initWithExtendedTraitCollection:(id)arg0 options:(NSUInteger)arg1 ;


@end


#endif