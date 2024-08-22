// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DOWNLOADSVIEWCONTROLLER_H
#define DOWNLOADSVIEWCONTROLLER_H

@class SFPopoverSizingTableViewController, _SFDownloadManager, NSMutableArray, NSString;
@protocol DownloadTableViewCellDelegate, UITableViewDragDelegate_Private, DownloadOpenHandler;



@interface DownloadsViewController : SFPopoverSizingTableViewController <DownloadTableViewCellDelegate, UITableViewDragDelegate_Private>

 {
    _SFDownloadManager *_downloadManager;
    NSMutableArray *_downloads;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) NSObject<DownloadOpenHandler> *downloadOpenHandler; // ivar: _downloadOpenHandler
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)tableViewCellForSizeEstimation;
-(BOOL)safari_prefersHalfHeightSheetPresentationWithLoweredBar;
-(BOOL)tableView:(id)arg0 canEditRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 canFocusRowAtIndexPath:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)_tableView:(id)arg0 dataOwnerForDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(NSInteger)maximumNumberOfRows;
-(NSInteger)minimumNumberOfRows;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithStyle:(NSInteger)arg0 ;
-(id)quickLookTransitionViewForDownload:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 dragPreviewParametersForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 itemsForAddingToDragSession:(id)arg1 atIndexPath:(id)arg2 point:(struct CGPoint )arg3 ;
-(id)tableView:(id)arg0 itemsForBeginningDragSession:(id)arg1 atIndexPath:(id)arg2 ;
-(id)tableView:(id)arg0 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg1 ;
-(struct CGSize )preferredContentSize;
-(void)_clearAllDownloads;
-(void)_dismiss;
-(void)_downloadsDidChange:(id)arg0 ;
-(void)_updateDoneButton;
-(void)cancelDownload:(id)arg0 ;
-(void)resumeDownload:(id)arg0 ;
-(void)revealDownload:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didEndDisplayingCell:(id)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;
-(void)viewWillTransitionToSize:(struct CGSize )arg0 withTransitionCoordinator:(id)arg1 ;


@end


#endif