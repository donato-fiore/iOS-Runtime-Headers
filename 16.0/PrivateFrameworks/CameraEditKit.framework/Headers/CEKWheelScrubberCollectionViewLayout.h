// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CEKWHEELSCRUBBERCOLLECTIONVIEWLAYOUT_H
#define CEKWHEELSCRUBBERCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout, NSArray;
@protocol CEKWheelScrubberCollectionViewLayoutDelegate;



@interface CEKWheelScrubberCollectionViewLayout : UICollectionViewLayout

@property (nonatomic, setter=_setCachedContentSize:) CGSize _cachedContentSize; // ivar: __cachedContentSize
@property (retain, nonatomic, setter=_setCachedLayoutAttributesCells:) NSArray *_cachedLayoutAttributesCells; // ivar: __cachedLayoutAttributesCells
@property (retain, nonatomic, setter=_setCachedLayoutAttributesDecorations:) NSArray *_cachedLayoutAttributesDecorations; // ivar: __cachedLayoutAttributesDecorations
@property (nonatomic) UIEdgeInsets contentInsets; // ivar: _contentInsets
@property (nonatomic) NSInteger layoutDirection; // ivar: _layoutDirection
@property (nonatomic) NSInteger layoutOrder; // ivar: _layoutOrder
@property (nonatomic) BOOL useRoundedCorners; // ivar: _useRoundedCorners
@property (weak, nonatomic) NSObject<CEKWheelScrubberCollectionViewLayoutDelegate> *wheelScrubberDelegate; // ivar: _wheelScrubberDelegate


-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(CGFloat)_circularlyWrapped:(CGFloat)arg0 forCenter:(CGFloat)arg1 radius:(CGFloat)arg2 scale:(CGFloat)arg3 ;
-(id)init;
-(id)layoutAttributesForDecorationViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)prepareLayout;


@end


#endif