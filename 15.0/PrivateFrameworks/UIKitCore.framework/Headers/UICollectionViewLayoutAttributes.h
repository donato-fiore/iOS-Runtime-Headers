// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UICOLLECTIONVIEWLAYOUTATTRIBUTES_H
#define UICOLLECTIONVIEWLAYOUTATTRIBUTES_H

@class NSString, NSMutableDictionary, NSIndexPath;
@protocol NSCopying, UIDynamicItem;

#import <Foundation/Foundation.h>

#import "UIBezierPath.h"

@interface UICollectionViewLayoutAttributes : NSObject <NSCopying, UIDynamicItem>

 {
    NSString *_elementKind;
    NSString *_reuseIdentifier;
    CGRect _frame;
    NSInteger _zPosition;
    CGRect _maskViewFrame;
    NSMutableDictionary *_customAttributes;
    ? _layoutFlags;
}


@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (nonatomic) CGRect bounds;
@property (nonatomic) CGPoint center; // ivar: _center
@property (readonly, nonatomic) UIBezierPath *collisionBoundingPath;
@property (readonly, nonatomic) NSUInteger collisionBoundsType;
@property (nonatomic, getter=_cornerRadius, setter=_setCornerRadius:) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, getter=_defaultLayoutMargins, setter=_setDefaultLayoutMargins:) UIEdgeInsets defaultLayoutMargins; // ivar: _defaultLayoutMargins
@property (readonly, copy) NSString *description;
@property (nonatomic) CGRect frame;
@property (readonly, nonatomic, getter=_hasDefaultLayoutMargins) BOOL hasDefaultLayoutMargins;
@property (nonatomic, getter=_hasMaskViewFrame) BOOL hasMaskViewFrame; // ivar: _hasMaskViewFrame
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isHidden) BOOL hidden;
@property (retain, nonatomic) NSIndexPath *indexPath; // ivar: _indexPath
@property (readonly, nonatomic, getter=_maskViewFrame) CGRect maskViewFrame;
@property (nonatomic, getter=_maskedCorners, setter=_setMaskedCorners:) NSUInteger maskedCorners;
@property (nonatomic, getter=_masksToBounds, setter=_setMasksToBounds:) BOOL masksToBounds;
@property (nonatomic, getter=_isPinnedToVisibleBounds, setter=_setPinnedToVisibleBounds:) BOOL pinnedToVisibleBounds;
@property (readonly, nonatomic, getter=_removeMaskViewAfterAnimation) BOOL removeMaskViewAfterAnimation;
@property (readonly, nonatomic) NSUInteger representedElementCategory;
@property (readonly, nonatomic) NSString *representedElementKind;
@property (nonatomic, getter=_selectionGrouping, setter=_setSelectionGrouping:) NSUInteger selectionGrouping; // ivar: _selectionGrouping
@property (nonatomic) CGSize size; // ivar: _size
@property (readonly) Class superclass;
@property (nonatomic) CGAffineTransform transform;
@property (nonatomic) CATransform3D transform3D; // ivar: _transform
@property (nonatomic) NSInteger zIndex; // ivar: _zIndex


+(id)layoutAttributesForCellWithIndexPath:(id)arg0 ;
+(id)layoutAttributesForDecorationViewOfKind:(id)arg0 withIndexPath:(id)arg1 ;
+(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 withIndexPath:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isSizeEqualForPreferredFittingAttributes:(id)arg0 ;
-(NSInteger)_zPosition;
-(id)_valueForCustomAttribute:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initialLayoutAttributesForInsertedDecorationElementOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(void)_setValue:(id)arg0 forCustomAttribute:(id)arg1 ;
-(void)_setZPosition:(NSInteger)arg0 ;


@end


#endif