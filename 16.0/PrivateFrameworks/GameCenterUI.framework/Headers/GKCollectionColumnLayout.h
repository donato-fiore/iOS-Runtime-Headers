// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GKCOLLECTIONCOLUMNLAYOUT_H
#define GKCOLLECTIONCOLUMNLAYOUT_H

@class NSDictionary;


#import "GKCollectionFocusingLayout.h"

@interface GKCollectionColumnLayout : GKCollectionFocusingLayout

@property (retain, nonatomic) NSDictionary *decorationAttributes; // ivar: _decorationAttributes
@property (retain, nonatomic) NSDictionary *footerAttributes; // ivar: _footerAttributes
@property (retain, nonatomic) NSDictionary *headerAttributes; // ivar: _headerAttributes
@property (retain, nonatomic) NSDictionary *itemAttributes; // ivar: _itemAttributes


-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(id)layoutAttributesForSupplementaryViewOfKind:(id)arg0 atIndexPath:(id)arg1 ;
-(struct CGSize )collectionViewContentSize;
-(void)applyDefaults;
-(void)prepareLayout;


@end


#endif