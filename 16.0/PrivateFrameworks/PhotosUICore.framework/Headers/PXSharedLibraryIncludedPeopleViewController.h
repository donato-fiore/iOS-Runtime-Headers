// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYINCLUDEDPEOPLEVIEWCONTROLLER_H
#define PXSHAREDLIBRARYINCLUDEDPEOPLEVIEWCONTROLLER_H

@class UICollectionViewController, NSIndexPath, NSString;
@protocol PHPickerViewControllerDelegate, PXSectionedDataSourceManagerObserver, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout;


#import "PXSharedLibraryIncludedPeopleDataSourceManager.h"

@interface PXSharedLibraryIncludedPeopleViewController : UICollectionViewController <PHPickerViewControllerDelegate, PXSectionedDataSourceManagerObserver, UICollectionViewDataSource, UICollectionViewDelegate, UICollectionViewDelegateFlowLayout>



@property (retain, nonatomic) NSIndexPath *currentSelectedIndexPath; // ivar: _currentSelectedIndexPath
@property (retain, nonatomic) PXSharedLibraryIncludedPeopleDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(CGFloat)heightForWidth:(CGFloat)arg0 numberOfItems:(NSUInteger)arg1 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(id)_infoAtIndexPath:(id)arg0 ;
-(id)_personAtIndexPath:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)initWithDataSourceManager:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_removeCell:(id)arg0 ;
-(void)collectionView:(id)arg0 didDeselectItemAtIndexPath:(id)arg1 ;
-(void)collectionView:(id)arg0 didSelectItemAtIndexPath:(id)arg1 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)picker:(id)arg0 didFinishPicking:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif