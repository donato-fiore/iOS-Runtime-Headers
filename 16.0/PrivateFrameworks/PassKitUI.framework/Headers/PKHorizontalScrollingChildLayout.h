// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKHORIZONTALSCROLLINGCHILDLAYOUT_H
#define PKHORIZONTALSCROLLINGCHILDLAYOUT_H

@class UICollectionViewLayout, NSMutableDictionary;
@protocol PKHorizontalScrollingChildLayoutDataSource;



@interface PKHorizontalScrollingChildLayout : UICollectionViewLayout {
    NSMutableDictionary *_attributesPerIndexPath;
    NSMutableDictionary *_headersPerIndexPath;
    NSMutableDictionary *_footersPerIndexPath;
    CGSize _currentSize;
    CGFloat _lastDrawnAlpha;
}


@property (nonatomic) CGFloat alphaTransition; // ivar: _alphaTransition
@property (weak, nonatomic) NSObject<PKHorizontalScrollingChildLayoutDataSource> *dataSource; // ivar: _dataSource
@property (nonatomic) BOOL isLowEndDevice; // ivar: _isLowEndDevice
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(id)init;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGSize )collectionViewContentSize;
-(void)_adjustItems:(id)arg0 withLateralMove:(CGFloat)arg1 ;
-(void)prepareLayout;


@end


#endif