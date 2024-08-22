// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC7SWIFTUIP33_8825076C2763A50452A210CBE1FA4AF011COORDINATOR_H
#define _TTC7SWIFTUIP33_8825076C2763A50452A210CBE1FA4AF011COORDINATOR_H

@class TtC7SwiftUI23PlatformViewCoordinator;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout;



@interface _TtC7SwiftUIP33_8825076C2763A50452A210CBE1FA4AF011Coordinator : TtC7SwiftUI23PlatformViewCoordinator <UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>

 {
    ? collectionView;
    ? selectedIndex;
    ? children;
    ? lastIDs;
    ? pendingSeenIndex;
    ? lastSeenIndex;
    ? pendingSelectedIndex;
}




-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)init;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)collectionView:(id)arg0 willDisplayCell:(id)arg1 forItemAtIndexPath:(id)arg2 ;
-(void)scrollViewDidScroll:(id)arg0 ;


@end


#endif