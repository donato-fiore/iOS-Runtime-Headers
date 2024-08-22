// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef REUPNEXTCOLLECTIONVIEWSINGLEITEMFLOWLAYOUT_H
#define REUPNEXTCOLLECTIONVIEWSINGLEITEMFLOWLAYOUT_H

@class NSDictionary, NSIndexPath;


#import "REUpNextCollectionViewFlowLayout.h"
#import "REUpNextCollectionViewFlowLayoutAttributes.h"

@interface REUpNextCollectionViewSingleItemFlowLayout : REUpNextCollectionViewFlowLayout {
    REUpNextCollectionViewFlowLayoutAttributes *_preferedCellAttributes;
    NSDictionary *_allAttributes;
}


@property (retain, nonatomic) NSIndexPath *preferedIndexPath; // ivar: _preferedIndexPath


-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGSize )collectionViewContentSize;
-(void)prepareLayout;


@end


#endif