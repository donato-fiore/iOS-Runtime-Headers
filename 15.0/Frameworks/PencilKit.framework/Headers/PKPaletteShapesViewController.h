// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPALETTESHAPESVIEWCONTROLLER_H
#define PKPALETTESHAPESVIEWCONTROLLER_H

@class UIViewController, NSString, NSArray;
@protocol UICollectionViewDataSource, UICollectionViewDelegate, PKPaletteShapesViewControllerDelegate;



@interface PKPaletteShapesViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PKPaletteShapesViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSArray *shapes; // ivar: _shapes
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)loadView;


@end


#endif