// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PUIMPORTSETTINGSHISTORYDEBUGVIEWCONTROLLER_H
#define PUIMPORTSETTINGSHISTORYDEBUGVIEWCONTROLLER_H

@class UICollectionViewController, NSString, PHFetchResult;
@protocol UICollectionViewDelegate, UICollectionViewDataSource, PHPhotoLibraryChangeObserver;



@interface PUImportSettingsHistoryDebugViewController : UICollectionViewController <UICollectionViewDelegate, UICollectionViewDataSource, PHPhotoLibraryChangeObserver>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) PHFetchResult *importSessions; // ivar: _importSessions
@property (readonly) Class superclass;


+(void)_updateFlowLayout:(id)arg0 withBounds:(struct CGRect )arg1 traitCollection:(id)arg2 ;
-(NSInteger)collectionView:(id)arg0 numberOfItemsInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInCollectionView:(id)arg0 ;
-(id)_assetForIndexPath:(id)arg0 ;
-(id)_assetsForSection:(NSInteger)arg0 ;
-(id)collectionView:(id)arg0 cellForItemAtIndexPath:(id)arg1 ;
-(id)collectionView:(id)arg0 viewForSupplementaryElementOfKind:(id)arg1 atIndexPath:(id)arg2 ;
-(id)init;
-(void)_reloadData;
-(void)_scrollToBottom:(id)arg0 ;
-(void)_updateTitle;
-(void)dealloc;
-(void)photoLibraryDidChange:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;


@end


#endif