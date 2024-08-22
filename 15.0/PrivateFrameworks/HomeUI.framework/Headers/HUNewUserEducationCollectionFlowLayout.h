// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUNEWUSEREDUCATIONCOLLECTIONFLOWLAYOUT_H
#define HUNEWUSEREDUCATIONCOLLECTIONFLOWLAYOUT_H

@class UICollectionViewFlowLayout;


#import "HUNewUserEducationFlowLayoutModel.h"

@interface HUNewUserEducationCollectionFlowLayout : UICollectionViewFlowLayout

@property (readonly, nonatomic) HUNewUserEducationFlowLayoutModel *layoutModel; // ivar: _layoutModel


-(id)initWithLayoutModel:(id)arg0 ;
-(struct CGPoint )targetContentOffsetForProposedContentOffset:(struct CGPoint )arg0 withScrollingVelocity:(struct CGPoint )arg1 ;


@end


#endif