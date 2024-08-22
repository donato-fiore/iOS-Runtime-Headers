// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUNEWUSEREDUCATIONCOLLECTIONVIEWCONTROLLER_H
#define HUNEWUSEREDUCATIONCOLLECTIONVIEWCONTROLLER_H

@class UICollectionViewController, NSString;
@protocol UICollectionViewDelegateFlowLayout;


#import "HUNewUserEducationCollectionViewModel.h"

@interface HUNewUserEducationCollectionViewController : UICollectionViewController <UICollectionViewDelegateFlowLayout>



@property (retain, nonatomic) HUNewUserEducationCollectionViewModel *collectionViewModel; // ivar: _collectionViewModel
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithCollectionViewModel:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(void)viewDidLoad;


@end


#endif