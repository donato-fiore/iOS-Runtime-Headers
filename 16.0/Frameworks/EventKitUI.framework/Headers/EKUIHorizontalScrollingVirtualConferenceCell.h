// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EKUIHORIZONTALSCROLLINGVIRTUALCONFERENCECELL_H
#define EKUIHORIZONTALSCROLLINGVIRTUALCONFERENCECELL_H

@class UITableViewCell, UICollectionView, NSString, NSArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, VirtualConferenceRoomTypeSelectionDelegate;



@interface EKUIHorizontalScrollingVirtualConferenceCell : UITableViewCell <UICollectionViewDataSource, UICollectionViewDelegate>

 {
    UICollectionView *_items;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VirtualConferenceRoomTypeSelectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *roomTypes; // ivar: _roomTypes
@property (readonly) Class superclass;


-(CGFloat)_heightOfCells;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 reuseIdentifier:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;


@end


#endif