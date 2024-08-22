// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUBRIDGELISTVIEWCONTROLLER_H
#define HUBRIDGELISTVIEWCONTROLLER_H

@class NSString;
@protocol HUPresentationDelegate;


#import "HUItemTableViewController.h"
#import "HUHomeHubHeaderView.h"
#import "HUBridgeListItemManager.h"

@interface HUBridgeListViewController : HUItemTableViewController <HUPresentationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HUHomeHubHeaderView *homehubHeaderView; // ivar: _homehubHeaderView
@property (readonly, nonatomic) HUBridgeListItemManager *itemManager;
@property (nonatomic) BOOL shouldShowHomeHubWarningHeader; // ivar: _shouldShowHomeHubWarningHeader
@property (readonly) Class superclass;


-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)_bridgeDetailsViewControllerClass;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(NSUInteger)automaticDisablingReasonsForItem:(id)arg0 ;
-(id)_presentBridgeSettingsForItem:(id)arg0 animated:(BOOL)arg1 ;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)itemTableHeaderView;
-(id)presentBridgeSettingsForAccessory:(id)arg0 animated:(BOOL)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif