// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WFFILEPICKERVIEWCONTROLLER_H
#define WFFILEPICKERVIEWCONTROLLER_H

@class UIViewController, NSString, NSError, NSArray, UISearchController, NSMutableOrderedSet;
@protocol UISearchControllerDelegate, UISearchResultsUpdating, WFRemoteFileListViewDelegate, WFRemoteFileStatusViewDelegate, _UIContextMenuInteractionDelegate, WFFileStorageService;


#import "WFRemoteFileListView.h"
#import "WFRemoteFileStatusView.h"

@interface WFFilePickerViewController : UIViewController <UISearchControllerDelegate, UISearchResultsUpdating, WFRemoteFileListViewDelegate, WFRemoteFileStatusViewDelegate, _UIContextMenuInteractionDelegate>



@property (readonly, nonatomic) BOOL allowsMultipleSelection; // ivar: _allowsMultipleSelection
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSError *error; // ivar: _error
@property (readonly, weak, nonatomic) WFRemoteFileListView *fileListView; // ivar: _fileListView
@property (copy, nonatomic) NSArray *files; // ivar: _files
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL hideSearchBar; // ivar: _hideSearchBar
@property (nonatomic) BOOL loading; // ivar: _loading
@property (readonly, nonatomic) NSInteger mode; // ivar: _mode
@property (readonly, nonatomic) NSString *path; // ivar: _path
@property (readonly, nonatomic) id *pickCompletionHandler; // ivar: _pickCompletionHandler
@property (readonly, nonatomic) id *saveCompletionHandler; // ivar: _saveCompletionHandler
@property (readonly, nonatomic) UISearchController *searchController; // ivar: _searchController
@property (copy, nonatomic) NSMutableOrderedSet *selectedFiles; // ivar: _selectedFiles
@property (readonly, nonatomic) NSObject<WFFileStorageService> *service; // ivar: _service
@property (readonly, weak, nonatomic) WFRemoteFileStatusView *statusView; // ivar: _statusView
@property (readonly) Class superclass;


-(BOOL)caseInsensitiveArray:(id)arg0 isEqualToArray:(id)arg1 ;
-(BOOL)fileListView:(id)arg0 shouldDisplayCheckmarkForFile:(id)arg1 ;
-(BOOL)fileListView:(id)arg0 shouldSelectFile:(id)arg1 ;
-(id)contextMenuInteraction:(id)arg0 actionsForMenuAtLocation:(struct CGPoint )arg1 withSuggestedActions:(id)arg2 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingAtLocation:(struct CGPoint )arg1 ;
-(id)initForPickingFilesAtPath:(id)arg0 service:(id)arg1 allowsMultipleSelection:(BOOL)arg2 completionHandler:(id)arg3 ;
-(id)initForSavingFilesAtPath:(id)arg0 service:(id)arg1 completionHandler:(id)arg2 ;
// -(id)initWithPath:(id)arg0 selectedFiles:(id)arg1 service:(id)arg2 mode:(NSInteger)arg3 allowsMultipleSelection:(BOOL)arg4 pickCompletionHandler:(id)arg5 saveCompletionHandler:(unk)arg6  ;
-(id)previewingContext:(id)arg0 viewControllerForLocation:(struct CGPoint )arg1 ;
-(void)cancel;
-(void)didDismissSearchController:(id)arg0 ;
-(void)didPresentSearchController:(id)arg0 ;
-(void)fileListView:(id)arg0 didSelectFile:(id)arg1 ;
-(void)finish;
-(void)loadFiles;
-(void)loadView;
-(void)navigateToSubdirectoryAtPath:(id)arg0 ;
-(void)previewingContext:(id)arg0 commitViewController:(id)arg1 ;
-(void)statusViewDidPressRecoveryButton:(id)arg0 ;
-(void)updateSearchResultsForSearchController:(id)arg0 ;
-(void)updateStatusViewAnimated:(BOOL)arg0 ;
-(void)updateToolbar;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillLayoutSubviews;


@end


#endif