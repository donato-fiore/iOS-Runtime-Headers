// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKUISHELFCOLLECTIONVIEWLAYOUT_H
#define SKUISHELFCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout, NSString;
@protocol SKUIShelfCollectionViewLayout;


#import "SKUIShelfLayoutData.h"

@interface SKUIShelfCollectionViewLayout : UICollectionViewLayout <SKUIShelfCollectionViewLayout>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKUIShelfLayoutData *layoutData; // ivar: _layoutData
@property (readonly) Class superclass;


+(BOOL)collectionViewCanClipToBounds;
+(CGFloat)snapToBoundariesDecelerationRate;
+(Class)layoutAttributesClass;
-(BOOL)_shouldScrollToContentBeginningInRightToLeft;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;
-(struct CGSize )collectionViewContentSize;


@end


#endif