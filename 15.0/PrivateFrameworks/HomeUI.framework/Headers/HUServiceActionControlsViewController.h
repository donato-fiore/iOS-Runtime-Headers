// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUSERVICEACTIONCONTROLSVIEWCONTROLLER_H
#define HUSERVICEACTIONCONTROLSVIEWCONTROLLER_H

@class NSString, HFServiceActionItem;
@protocol HUServiceActionControlsItemManagerDelegate, HUControlPanelControllerDelegate, HUDetailsPresentationDelegateHost, HUPresentationDelegate, HUServiceActionControlsViewControllerDelegate;


#import "HUItemTableViewController.h"
#import "HUControlPanelController.h"

@interface HUServiceActionControlsViewController : HUItemTableViewController <HUServiceActionControlsItemManagerDelegate, HUControlPanelControllerDelegate, HUDetailsPresentationDelegateHost>



@property (retain, nonatomic) HUControlPanelController *controlPanelController; // ivar: _controlPanelController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSUInteger mode; // ivar: _mode
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (nonatomic) BOOL requiresPresentingViewControllerDismissal; // ivar: _requiresPresentingViewControllerDismissal
@property (weak, nonatomic) NSObject<HUServiceActionControlsViewControllerDelegate> *serviceActionControlsDelegate; // ivar: _serviceActionControlsDelegate
@property (retain, nonatomic) HFServiceActionItem *serviceActionItem; // ivar: _serviceActionItem
@property (readonly) Class superclass;


-(BOOL)itemManager:(id)arg0 shouldShowControlPanelItem:(id)arg1 ;
-(BOOL)itemManager:(id)arg0 shouldShowSectionTitleForControlPanelItem:(id)arg1 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)initWithServiceActionItem:(id)arg0 mode:(NSUInteger)arg1 ;
-(void)_done:(id)arg0 ;
-(void)diffableDataItemManager:(id)arg0 willUpdateItems:(id)arg1 addItems:(id)arg2 removeItems:(id)arg3 isInitialLoad:(BOOL)arg4 ;
-(void)itemManager:(id)arg0 performUpdateRequest:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)updateCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 animated:(BOOL)arg3 ;
-(void)viewDidLoad;


@end


#endif