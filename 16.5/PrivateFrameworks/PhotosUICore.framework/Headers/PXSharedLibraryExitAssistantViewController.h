// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PXSHAREDLIBRARYEXITASSISTANTVIEWCONTROLLER_H
#define PXSHAREDLIBRARYEXITASSISTANTVIEWCONTROLLER_H

@class OBTableWelcomeController, OBBoldTrayButton, OBLinkTrayButton, NSString;
@protocol UITableViewDelegate, UITableViewDataSource, PXSharedLibraryExitAssistantViewControllerDelegate, UIPopoverPresentationControllerSourceItem;



@interface PXSharedLibraryExitAssistantViewController : OBTableWelcomeController <UITableViewDelegate, UITableViewDataSource>

 {
    OBBoldTrayButton *_exitButton;
    OBLinkTrayButton *_cancelButton;
    BOOL _currentUserIsOwner;
    NSString *_keepAllCountsString;
    NSString *_contributedOnlyCountsString;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PXSharedLibraryExitAssistantViewControllerDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL disableControlsWithBusyIndicator; // ivar: _disableControlsWithBusyIndicator
@property (readonly, nonatomic) NSObject<UIPopoverPresentationControllerSourceItem> *exitButtonSourceItem;
@property (nonatomic) NSInteger exitRetentionPolicy; // ivar: _exitRetentionPolicy
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)tableView:(id)arg0 numberOfRowsInSection:(NSInteger)arg1 ;
-(id)initWithOwnerAsCurrentUser:(BOOL)arg0 keepAllCountsString:(id)arg1 contributedOnlyCountsString:(id)arg2 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(id)tableView:(id)arg0 willSelectRowAtIndexPath:(id)arg1 ;
-(void)_updateCancelButton;
-(void)_updateExitButton;
-(void)_updateIcon;
-(void)_updateTableView;
-(void)cancelButtonTapped:(id)arg0 ;
-(void)exitButtonTapped:(id)arg0 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;
-(void)traitCollectionDidChange:(id)arg0 ;
-(void)viewDidLoad;


@end


#endif