// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC16NEWSSUBSCRIPTION35FLEXIBLEPAYWALLCOLLECTIONVIEWLAYOUT_H
#define _TTC16NEWSSUBSCRIPTION35FLEXIBLEPAYWALLCOLLECTIONVIEWLAYOUT_H

@class UICollectionViewLayout;



@interface _TtC16NewsSubscription35FlexiblePaywallCollectionViewLayout : UICollectionViewLayout {
    ? layoutProvider;
    ? itemAttributes;
    ? supplementaryItemAttributes;
}


@property (nonatomic, readonly) CGSize collectionViewContentSize;


-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(void)prepareLayout;


@end


#endif