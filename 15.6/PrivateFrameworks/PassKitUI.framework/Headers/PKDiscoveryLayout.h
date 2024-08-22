// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PKDISCOVERYLAYOUT_H
#define PKDISCOVERYLAYOUT_H

@class UICollectionViewLayout, NSMutableDictionary;



@interface PKDiscoveryLayout : UICollectionViewLayout {
    NSMutableDictionary *_attributesPerIndexPath;
    NSMutableDictionary *_headersPerIndexPath;
    CGSize _currentSize;
}


@property (nonatomic) CGFloat interimSpacing; // ivar: _interimSpacing
@property (nonatomic) BOOL isScrollable; // ivar: _isScrollable
@property (nonatomic) CGFloat lineSpacing; // ivar: _lineSpacing


-(id)init;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)_adjustItems:(id)arg0 withLateralMove:(CGFloat)arg1 ;
-(void)prepareLayout;


@end


#endif