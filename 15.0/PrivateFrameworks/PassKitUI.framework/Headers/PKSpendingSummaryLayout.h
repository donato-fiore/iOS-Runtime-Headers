// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKSPENDINGSUMMARYLAYOUT_H
#define PKSPENDINGSUMMARYLAYOUT_H

@class UICollectionViewLayout, NSMutableDictionary;



@interface PKSpendingSummaryLayout : UICollectionViewLayout {
    NSMutableDictionary *_attributesPerIndexPath;
    NSMutableDictionary *_headersPerIndexPath;
    NSMutableDictionary *_footersPerIndexPath;
    CGSize _currentSize;
}


@property (nonatomic) BOOL isLowEndDevice; // ivar: _isLowEndDevice
@property (nonatomic) CGFloat lastDrawnAlpha; // ivar: _lastDrawnAlpha
@property (nonatomic) CGFloat transitionAlpha; // ivar: _transitionAlpha
@property (nonatomic, getter=isVisible) BOOL visible; // ivar: _visible


-(CGFloat)_lineSpacingForSection:(NSInteger)arg0 ;
-(CGFloat)alphaForIndexPath:(id)arg0 visible:(BOOL)arg1 transition:(CGFloat)arg2 ;
-(NSInteger)_horizontalAlignmentForSection:(NSInteger)arg0 ;
-(id)init;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGSize )collectionViewContentSize;
-(void)_adjustItems:(id)arg0 withLateralMove:(CGFloat)arg1 ;
-(void)prepareLayout;


@end


#endif