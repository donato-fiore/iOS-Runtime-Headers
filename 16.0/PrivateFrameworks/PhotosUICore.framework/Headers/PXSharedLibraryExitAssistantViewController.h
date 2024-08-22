// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PXSHAREDLIBRARYEXITASSISTANTVIEWCONTROLLER_H
#define PXSHAREDLIBRARYEXITASSISTANTVIEWCONTROLLER_H

@class OBTableWelcomeController, NSArray, OBBoldTrayButton, NSProgress, NSString;
@protocol PXAssistantViewController, UITableViewDelegate, UITableViewDataSource, PXAssistantViewControllerDelegate, PXSharedLibraryExitAssistantViewControllerDelegate;



@interface PXSharedLibraryExitAssistantViewController : OBTableWelcomeController <PXAssistantViewController, UITableViewDelegate, UITableViewDataSource>

 {
    NSArray *_listViewItems;
    OBBoldTrayButton *_exitButton;
    BOOL _isOwnerCurrentUser;
}


@property (readonly, nonatomic) NSProgress *activityProgress; // ivar: _activityProgress
@property (weak, nonatomic) NSObject<PXAssistantViewControllerDelegate> *assistantViewControllerDelegate; // ivar: assistantViewControllerDelegate
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSharedLibraryExitAssistantViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSInteger exitRetentionPolicy; // ivar: _exitRetentionPolicy
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithCurrentUserIsOwner:(BOOL)arg0 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_setIsProcessing:(BOOL)arg0 ;
-(void)_updateListViewItems;
-(void)_updateNavigationItem;
-(void)_updateTableView;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)exitButtonTapped:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)viewDidLoad;


@end


#endif