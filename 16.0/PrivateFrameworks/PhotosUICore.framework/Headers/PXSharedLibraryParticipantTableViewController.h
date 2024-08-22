// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYPARTICIPANTTABLEVIEWCONTROLLER_H
#define PXSHAREDLIBRARYPARTICIPANTTABLEVIEWCONTROLLER_H

@class UITableViewController, NSString;
@protocol PXPhotoRecipientViewControllerDelegate, PXSectionedDataSourceManagerObserver, UIContextMenuInteractionDelegate, UITableViewDataSource, UITableViewDelegate, PXSharedLibraryParticipantTableViewControllerDelegate;


#import "PXSharedLibraryParticipantDataSource.h"
#import "PXSharedLibraryParticipantDataSourceManager.h"

@interface PXSharedLibraryParticipantTableViewController : UITableViewController <PXPhotoRecipientViewControllerDelegate, PXSectionedDataSourceManagerObserver, UIContextMenuInteractionDelegate, UITableViewDataSource, UITableViewDelegate>



@property (readonly, nonatomic) BOOL canAddParticipants;
@property (retain, nonatomic) PXSharedLibraryParticipantDataSource *dataSource; // ivar: _dataSource
@property (readonly, nonatomic) PXSharedLibraryParticipantDataSourceManager *dataSourceManager; // ivar: _dataSourceManager
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSharedLibraryParticipantTableViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic, getter=isInteractionEnabled) BOOL interactionEnabled; // ivar: _interactionEnabled
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat tableViewHeight; // ivar: _tableViewHeight


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(NSInteger)numberOfSectionsInTableView:(id)arg0 ;
-(NSInteger)tableView:(id)arg0 editingStyleForRowAtIndexPath:(id)arg1 ;
-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)contextMenuInteraction:(id)arg0 configurationForMenuAtLocation:(struct CGPoint )arg1 ;
-(id)contextMenuInteraction:(id)arg0 previewForHighlightingMenuWithConfiguration:(id)arg1 ;
-(id)initWithDataSourceManager:(id)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_handleAddRecipient;
-(void)_updateAddButton;
-(void)_updateRowHeight;
-(void)_updateTableViewHeight;
-(void)loadView;
-(void)observable:(id)arg0 didChange:(NSUInteger)arg1 context:(*void)arg2 ;
-(void)photoRecipientViewController:(id)arg0 didCompleteWithRecipients:(id)arg1 ;
-(void)photoRecipientViewControllerDidCancel:(id)arg0 ;
-(void)tableView:(id)arg0 commitEditingStyle:(NSInteger)arg1 forRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewWillLayoutSubviews;


@end


#endif