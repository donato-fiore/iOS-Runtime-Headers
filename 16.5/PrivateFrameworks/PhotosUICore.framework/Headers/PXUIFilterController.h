// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXUIFILTERCONTROLLER_H
#define PXUIFILTERCONTROLLER_H

@class UITableViewController, NSArray, NSString;
@protocol UITableViewDataSource, UITableViewDelegate, PXChangeObserver, PXFilterController, PXFilterControllerDelegate;


#import "PXSharedLibraryFaceTileImageProvider.h"
#import "PXAssetsDataSourceCountsController.h"
#import "PXContentFilterState.h"
#import "PXAssetsDataSourceManager.h"
#import "PXLibraryFilterState.h"

@interface PXUIFilterController : UITableViewController <UITableViewDataSource, UITableViewDelegate, PXChangeObserver, PXFilterController>

 {
    PXSharedLibraryFaceTileImageProvider *_faceTileImageProvider;
    NSArray *_libraryFilterGroups;
    NSArray *_contentFilterGroups;
    PXAssetsDataSourceCountsController *_countsController;
}


@property (copy, nonatomic) PXContentFilterState *contentFilterState; // ivar: _contentFilterState
@property (retain, nonatomic) PXAssetsDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) NSObject<PXFilterControllerDelegate> *filterControllerDelegate; // ivar: _filterControllerDelegate
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL isSharedLibraryAlbum; // ivar: _isSharedLibraryAlbum
@property (copy, nonatomic) PXLibraryFilterState *libraryFilterState; // ivar: _libraryFilterState
@property (nonatomic) BOOL showContentOptions; // ivar: _showContentOptions
@property (nonatomic) BOOL showLibraryOptions; // ivar: _showLibraryOptions
@property (readonly) Class superclass;


-(BOOL)_isContentFilterSection:(NSInteger)arg0 ;
-(BOOL)_isLibraryFilterSection:(NSInteger)arg0 ;
-(CGFloat)tableView:(id)arg0 estimatedHeightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)_adjustedContentFilterSection:(NSInteger)arg0 ;
-(NSInteger)_contentFilterGroupsCount;
-(NSInteger)_libraryFilterGroupsCount;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_contentFilterGroups;
-(id)_libraryFilterGroups;
-(id)_localizedCounts;
-(id)_localizedGuestCounts;
-(id)_sectionHeaderTitleTextAttributes;
-(id)_sharedLibraryAllPhotosAndVideosIndexPath;
-(id)initWithDelegate:(id)arg0 ;
-(id)initWithDelegate:(id)arg0 initialContentFilterState:(id)arg1 isSyndicationLibraryAlbum:(BOOL)arg2 isSharedLibraryAlbum:(BOOL)arg3 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 titleForFooterInSection:(NSInteger)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_doneButtonPressed:(id)arg0 ;
-(void)_setVisibilityForSender:(id)arg0 ;
-(void)_setupFaceTileImageProvider;
-(void)_setupNavigationBar;
-(void)_setupTableView;
-(void)_tappedRowAtIndexPath:(id)arg0 ;
-(void)_updateContentFilterStateWithFilterItemTag:(NSInteger)arg0 shouldEnable:(BOOL)arg1 ;
-(void)_updateFooterStatus;
-(void)_updateParticipantsImage;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;


@end


#endif