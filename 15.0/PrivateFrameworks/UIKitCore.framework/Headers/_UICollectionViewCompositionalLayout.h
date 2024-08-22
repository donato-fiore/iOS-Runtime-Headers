// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _UICOLLECTIONVIEWCOMPOSITIONALLAYOUT_H
#define _UICOLLECTIONVIEWCOMPOSITIONALLAYOUT_H

@class NSArray;


#import "UICollectionViewCompositionalLayout.h"

@interface _UICollectionViewCompositionalLayout : UICollectionViewCompositionalLayout

@property (copy, nonatomic) NSArray *boundarySupplementaryItems; // ivar: _boundarySupplementaryItems
@property (readonly, nonatomic) NSInteger scrollDirection; // ivar: _scrollDirection
@property (copy, nonatomic) NSArray *supplementaryItems; // ivar: _supplementaryItems


-(id)initWithLayoutSection:(id)arg0 ;
-(id)initWithLayoutSection:(id)arg0 configuration:(id)arg1 ;
-(id)initWithLayoutSection:(id)arg0 scrollDirection:(NSInteger)arg1 ;
-(id)initWithLayoutSectionProvider:(id)arg0 ;
// -(id)initWithLayoutSectionProvider:(id)arg0 configuration:(unk)arg1  ;
// -(id)initWithLayoutSectionProvider:(id)arg0 scrollDirection:(unk)arg1  ;
-(id)initWithSection:(id)arg0 ;
-(id)initWithSection:(id)arg0 configuration:(id)arg1 ;
-(id)initWithSectionProvider:(id)arg0 ;
// -(id)initWithSectionProvider:(id)arg0 configuration:(unk)arg1  ;


@end


#endif