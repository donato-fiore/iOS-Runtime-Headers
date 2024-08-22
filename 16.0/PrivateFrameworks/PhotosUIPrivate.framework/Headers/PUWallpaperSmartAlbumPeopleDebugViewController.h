// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PUWALLPAPERSMARTALBUMPEOPLEDEBUGVIEWCONTROLLER_H
#define PUWALLPAPERSMARTALBUMPEOPLEDEBUGVIEWCONTROLLER_H

@class UICollectionViewController, PXWallpaperSmartAlbumPeoplePickerDataSource, NSArray, NSString;
@protocol PXWallpaperSmartAlbumPeoplePickerDataSourceChangeObserver;


#import "PUWallpaperDebugViewSpec.h"

@interface PUWallpaperSmartAlbumPeopleDebugViewController : UICollectionViewController <PXWallpaperSmartAlbumPeoplePickerDataSourceChangeObserver>



@property (retain, nonatomic) PXWallpaperSmartAlbumPeoplePickerDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) NSArray *dataSourceEntries; // ivar: _dataSourceEntries
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PUWallpaperDebugViewSpec *spec; // ivar: _spec
@property (readonly) Class superclass;


-(BOOL)collectionView:(id)arg0 shouldHighlightItemAtIndexPath:(id)arg1 ;
-(BOOL)shouldAutorotate;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(NSUInteger)navigationControllerSupportedInterfaceOrientations:(id)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)initWithSpec:(id)arg0 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 referenceSizeForHeaderInSection:(NSInteger)arg2 ;
-(struct CGSize )collectionView:(id)arg0 layout:(id)arg1 sizeForItemAtIndexPath:(id)arg2 ;
-(struct UIEdgeInsets )collectionView:(id)arg0 layout:(id)arg1 insetForSectionAtIndex:(NSInteger)arg2 ;
-(void)_updateDisplayDataSource;
-(void)viewDidLoad;
-(void)wallpaperSmartAlbumPeoplePickerDataSourceChanged:(id)arg0 ;


@end


#endif