// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIDOWNLOADSHOWTABLEVIEWCONTROLLER_H
#define VUIDOWNLOADSHOWTABLEVIEWCONTROLLER_H

@class UITableViewController, NSMutableArray, UIBarButtonItem, NSString, NSArray;
@protocol VUILibraryDataSourceDelegate, VUIDownloadEntityTableViewCellDelegate;


#import "VUIDownloadShowDataSource.h"
#import "VUIMediaEntitiesDataSource.h"
#import "VUIDownloadShowTableHeaderView.h"

@interface VUIDownloadShowTableViewController : UITableViewController <VUILibraryDataSourceDelegate, VUIDownloadEntityTableViewCellDelegate>



@property (retain, nonatomic) NSMutableArray *assetControllersToRemove; // ivar: _assetControllersToRemove
@property (retain, nonatomic) UIBarButtonItem *backBarButtonItem; // ivar: _backBarButtonItem
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) VUIDownloadShowDataSource *downloadDataSource; // ivar: _downloadDataSource
@property (retain, nonatomic) NSMutableArray *groupings; // ivar: _groupings
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) UIBarButtonItem *leftBarButtonItem; // ivar: _leftBarButtonItem
@property (retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // ivar: _rightBarButtonItem
@property (retain, nonatomic) NSArray *seasons; // ivar: _seasons
@property (retain, nonatomic) VUIMediaEntitiesDataSource *seasonsDataSource; // ivar: _seasonsDataSource
@property (retain, nonatomic) VUIDownloadShowTableHeaderView *sizingHeader; // ivar: _sizingHeader
@property (readonly) Class superclass;


-(BOOL)_episodeHasAllCanonicalIDs:(id)arg0 ;
-(BOOL)_mediaItemShouldShowRenewOption:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForHeaderInSection:(NSInteger)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)_configureDeleteAlertControllerForIndexPath:(id)arg0 withCompletion:(id)arg1 ;
-(id)_configureRenewAlertControllerForIndexPath:(id)arg0 forPreferredStyle:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(id)_headerTitleForEpisodeMediaItem:(id)arg0 ;
-(id)_moreEpisodesURLForSection:(NSInteger)arg0 ;
-(id)initWithDataSource:(id)arg0 seasonsDataSource:(id)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 viewForHeaderInSection:(NSInteger)arg1 ;
-(void)_cancelPressed;
-(void)_didPressGetMoreEpisodes:(id)arg0 ;
-(void)_editToggled;
-(void)_exitEditingMode;
-(void)_popIfNeeded;
-(void)_updateNavigationBarPadding;
-(void)dataSourceDidFinishFetching:(id)arg0 ;
-(void)downloadCellDidRequestCancelDownload:(id)arg0 ;
-(void)loadView;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif