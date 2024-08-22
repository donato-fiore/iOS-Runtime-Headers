// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VUIDOWNLOADTABLEVIEWCONTROLLER_H
#define VUIDOWNLOADTABLEVIEWCONTROLLER_H

@class UIViewController, UIAlertController, NSMutableArray, UIBarButtonItem, NSString, UITableViewDiffableDataSource, UITableView, NSDictionary;
@protocol UITableViewDelegate, VUIDownloadDataSourceDelegate, VUIDownloadEntityTableViewCellDelegate;


#import "VUIViewControllerContentPresenter.h"
#import "VUIDownloadDataSource.h"
#import "VUIDownloadEntityTableViewCell.h"

@interface VUIDownloadTableViewController : UIViewController <UITableViewDelegate, VUIDownloadDataSourceDelegate, VUIDownloadEntityTableViewCellDelegate>



@property (retain, nonatomic) UIAlertController *alertController; // ivar: _alertController
@property (retain, nonatomic) NSMutableArray *assetControllersToRemove; // ivar: _assetControllersToRemove
@property (retain, nonatomic) UIBarButtonItem *backBarButtonItem; // ivar: _backBarButtonItem
@property (retain, nonatomic) VUIViewControllerContentPresenter *contentPresenter; // ivar: _contentPresenter
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) UITableViewDiffableDataSource *diffableDataSource; // ivar: _diffableDataSource
@property (retain, nonatomic) VUIDownloadDataSource *downloadDataSource; // ivar: _downloadDataSource
@property (retain, nonatomic) NSMutableArray *downloadEntities; // ivar: _downloadEntities
@property (retain, nonatomic) UITableView *downloadEntitiesTableView; // ivar: _downloadEntitiesTableView
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSDictionary *identifierToDownloadEntityDictionary; // ivar: _identifierToDownloadEntityDictionary
@property (retain, nonatomic) UIBarButtonItem *leftBarButtonItem; // ivar: _leftBarButtonItem
@property (retain, nonatomic) UIBarButtonItem *rightBarButtonItem; // ivar: _rightBarButtonItem
@property (retain, nonatomic) VUIDownloadEntityTableViewCell *sizingCell; // ivar: _sizingCell
@property (readonly) Class superclass;


-(BOOL)_downloadEntityShouldShowRenewOption:(id)arg0 ;
-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(id)_configureAlertControllerForIndexPath:(id)arg0 withCompletion:(id)arg1 ;
-(id)_configureRenewAlertControllerForIndexPath:(id)arg0 forPreferredStyle:(NSInteger)arg1 withCompletion:(id)arg2 ;
-(id)_createDiffableDataSource;
-(id)_createDiffableDataSourceSnapshot;
-(id)_createIdentifierToDownloadEntityDictionary;
-(id)_identifiersForDownloadEntities;
-(id)initWithDataSource:(id)arg0 ;
-(id)tableView:(id)arg0 trailingSwipeActionsConfigurationForRowAtIndexPath:(id)arg1 ;
-(void)_cancelPressed;
-(void)_deleteDownloadEntities:(id)arg0 ;
-(void)_deleteMediaEntitiesInDownloadEntities:(id)arg0 ;
-(void)_editToggled;
-(void)_exitEditingMode;
-(void)_updateNavigationBarPadding;
-(void)downloadCellDidRequestCancelDownload:(id)arg0 ;
-(void)downloadManager:(id)arg0 downloadedFetchDidFinishWithEntities:(id)arg1 ;
-(void)downloadManager:(id)arg0 downloadsDidChange:(id)arg1 ;
-(void)loadView;
-(void)tableView:(id)arg0 didDeselectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didEndEditingRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)tableView:(id)arg0 willBeginEditingRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidAppear:(BOOL)arg0 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif