// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PUIMPORTADDTOALBUMSPICKERVIEWCONTROLLER_H
#define PUIMPORTADDTOALBUMSPICKERVIEWCONTROLLER_H

@class UITableViewController, PHCollection, NSIndexPath, PXPhotoKitCollectionsDataSource, PXPhotoKitCollectionsDataSourceManager, PXPhotoKitCollectionsDataSourceManagerConfiguration, NSString;
@protocol PXCollectionsDataSourceManagerObserver, PUAlbumCreatorDelegate, PXImportAlbumPickerDelegate;


#import "PUImportAddToAlbumsPickerCell.h"

@interface PUImportAddToAlbumsPickerViewController : UITableViewController <PXCollectionsDataSourceManagerObserver, PUAlbumCreatorDelegate>

 {
    PHCollection *_selectedCollection;
    NSIndexPath *_selectedIndex;
    PUImportAddToAlbumsPickerCell *_selectedCell;
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
+(id)userCreatredAlbumsPhotoKitConfiguration;
-(BOOL)canPresentPicker;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(CGFloat)_heightForIndex:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)addAlbumPlaceHolder:(struct CGSize )arg0 newAlbum:(BOOL)arg1 ;
-(id)albumListViewControllerSpec;
-(id)completionHandler:(SEL)arg0 ;
-(id)createAlbumListViewController;
-(id)hostViewContoller;
-(id)init;
-(id)posterImageForCollection:(id)arg0 cell:(id)arg1 forCellType:(NSUInteger)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForHeaderInSection:(NSInteger)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_dismissPicker;
-(void)_handleCreateAlbum;
-(void)_selectCell:(id)arg0 ;
-(void)configureDataSourceManagerConfiguration:(id)arg0 ;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)selectCollection:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didUnhighlightRowAtIndexPath:(id)arg1 ;
-(void)updateDatasource;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif