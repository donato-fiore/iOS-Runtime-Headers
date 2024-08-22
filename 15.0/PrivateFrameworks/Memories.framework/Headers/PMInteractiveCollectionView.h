// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PMINTERACTIVECOLLECTIONVIEW_H
#define PMINTERACTIVECOLLECTIONVIEW_H

@class UICollectionView;
@protocol MiroCollectionViewDelegate;



@interface PMInteractiveCollectionView : UICollectionView

@property (nonatomic) BOOL checkedSupportsReordering; // ivar: _checkedSupportsReordering
@property (weak, nonatomic) NSObject<MiroCollectionViewDelegate> *delegate;
@property (readonly, nonatomic) BOOL supportsReordering; // ivar: _supportsReordering


-(BOOL)beginInteractiveMovementForItemAtIndexPath:(id)arg0 ;
-(void)cancelInteractiveMovement;
-(void)endInteractiveMovement;


@end


#endif