// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CNCONTACTGRIDVIEWLAYOUT_H
#define CNCONTACTGRIDVIEWLAYOUT_H

@class UICollectionViewFlowLayout, NSIndexPath;
@protocol NSCopying;



@interface CNContactGridViewLayout : UICollectionViewFlowLayout <NSCopying>



@property (nonatomic) BOOL needsUpdateLayout; // ivar: _needsUpdateLayout
@property (nonatomic) NSInteger numberOfColumns; // ivar: _numberOfColumns
@property (nonatomic) CGFloat offsetAfter; // ivar: _offsetAfter
@property (nonatomic) CGFloat offsetBefore; // ivar: _offsetBefore
@property (retain, nonatomic) NSIndexPath *selectedIndexPath; // ivar: _selectedIndexPath
@property (nonatomic) CGFloat selectedItemWidthOffset; // ivar: _selectedItemWidthOffset


-(id)_animationForReusableView:(SEL)arg0 toLayoutAttributes:(id)arg1 type:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(void)_updateLayoutMetrics;
-(void)prepareForCollectionViewUpdates:(id)arg0 ;


@end


#endif