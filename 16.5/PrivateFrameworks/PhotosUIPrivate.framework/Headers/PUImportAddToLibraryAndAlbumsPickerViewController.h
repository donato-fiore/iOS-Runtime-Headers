// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIMPORTADDTOLIBRARYANDALBUMSPICKERVIEWCONTROLLER_H
#define PUIMPORTADDTOLIBRARYANDALBUMSPICKERVIEWCONTROLLER_H

@class UITableViewController, PHCollection, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager, PXPhotoKitCollectionsDataSourceManagerConfiguration, NSString;
@protocol PXCollectionsDataSourceManagerObserver, PUAlbumCreatorDelegate, PXImportAlbumPickerDelegate;



@interface PUImportAddToLibraryAndAlbumsPickerViewController : UITableViewController <PXCollectionsDataSourceManagerObserver, PUAlbumCreatorDelegate>

 {
    PHCollection *_selectedCollection;
    PHCollection *_createdAlbum;
    BOOL _needsDatasourceUpdate;
}


@property (retain, nonatomic) PXPhotoKitCollectionsDataSource *dataSource; // ivar: _dataSource
@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (retain, nonatomic) PXPhotoKitCollectionsDataSourceManagerConfiguration *dataSourceManagerConfiguration; // ivar: _dataSourceManagerConfiguration
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXImportAlbumPickerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSUInteger)cellTypeForPosition:(id)arg0 ;
+(id)dataSourceShiftedIndexPath:(id)arg0 ;
-(BOOL)canPresentPicker;
-(CGFloat)tableView:(id)arg0 estimatedHeightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_userCreatredAlbumsPhotoKitConfiguration;
-(id)completionHandler:(SEL)arg0 ;
-(id)hostViewContoller;
-(id)init;
-(id)posterImageForCollection:(id)arg0 indexPath:(id)arg1 forCellType:(NSUInteger)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(void)_dismissPicker;
-(void)_updateDatasource;
-(void)configureDataSourceManagerConfiguration:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willDisplayCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif