// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PXPEOPLEDONATIONSETTINGSSUGGESTIONVIEWCONTROLLER_H
#define PXPEOPLEDONATIONSETTINGSSUGGESTIONVIEWCONTROLLER_H

@class UIViewController, UICollectionView, NSString, PHFetchResult, UIImage, PHPerson;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout;



@interface PXPeopleDonationSettingsSuggestionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>



@property (retain, nonatomic) UICollectionView *collectionView; // ivar: _collectionView
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PHFetchResult *faceCrops; // ivar: _faceCrops
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIImage *image; // ivar: _image
@property (readonly, nonatomic) PHPerson *person; // ivar: _person
@property (readonly) Class superclass;


-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithPerson:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)loadDataSource;
-(void)viewDidLoad;


@end


#endif