// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PUDOUBLEHEIGHTHORIZONTALALBUMLISTGADGETLAYOUT_H
#define PUDOUBLEHEIGHTHORIZONTALALBUMLISTGADGETLAYOUT_H

@class NSMutableDictionary;


#import "PUHorizontalAlbumListGadgetLayout.h"

@interface PUDoubleHeightHorizontalAlbumListGadgetLayout : PUHorizontalAlbumListGadgetLayout

@property (readonly, nonatomic) NSMutableDictionary *layoutAttributesByIndexPath; // ivar: _layoutAttributesByIndexPath


-(BOOL)prefersPagingEnabled;
-(id)initWithHorizontalLayoutDelegate:(id)arg0 showsHorizontalScrollIndicator:(BOOL)arg1 ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;
-(struct CGSize )collectionViewContentSize;
-(void)_adjustLayoutAttributes:(id)arg0 ;
-(void)invalidateLayout;


@end


#endif