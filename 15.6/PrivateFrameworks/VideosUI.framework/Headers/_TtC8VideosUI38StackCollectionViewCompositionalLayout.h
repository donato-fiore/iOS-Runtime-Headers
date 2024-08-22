// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _TTC8VIDEOSUI38STACKCOLLECTIONVIEWCOMPOSITIONALLAYOUT_H
#define _TTC8VIDEOSUI38STACKCOLLECTIONVIEWCOMPOSITIONALLAYOUT_H

@class UICollectionViewCompositionalLayout;



@interface _TtC8VideosUI38StackCollectionViewCompositionalLayout : UICollectionViewCompositionalLayout



+(Class)layoutAttributesClass;
-(BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect )arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSection:(id)arg0 ;
-(id)initWithSection:(id)arg0 configuration:(id)arg1 ;
// -(id)initWithSection:(id)arg0 sectionProvider:(id)arg1 configuration:(unk)arg2  ;
-(id)initWithSectionProvider:(id)arg0 ;
// -(id)initWithSectionProvider:(id)arg0 configuration:(unk)arg1  ;
-(id)layoutAttributesForElementsInRect:(struct CGRect )arg0 ;
-(id)layoutAttributesForItemAtIndexPath:(id)arg0 ;


@end


#endif