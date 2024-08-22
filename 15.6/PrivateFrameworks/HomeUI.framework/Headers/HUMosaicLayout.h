// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUMOSAICLAYOUT_H
#define HUMOSAICLAYOUT_H

@class UICollectionViewLayout, NSMutableArray, NSString;
@protocol HUControllableCollectionViewLayout, HUProvidesMosaicFrames, HUMosaicLayoutDelegate;



@interface HUMosaicLayout : UICollectionViewLayout <HUControllableCollectionViewLayout, HUProvidesMosaicFrames>



@property (retain, nonatomic) NSMutableArray *attributeCache; // ivar: _attributeCache
@property (nonatomic) CGRect contentBounds; // ivar: _contentBounds
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) NSObject<HUMosaicLayoutDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)currentMosaicFrames;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)prepareLayout;


@end


#endif