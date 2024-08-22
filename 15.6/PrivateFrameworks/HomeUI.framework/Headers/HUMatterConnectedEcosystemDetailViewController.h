// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUMATTERCONNECTEDECOSYSTEMDETAILVIEWCONTROLLER_H
#define HUMATTERCONNECTEDECOSYSTEMDETAILVIEWCONTROLLER_H

@class NSString;
@protocol HUPresentationDelegate;


#import "HUItemTableViewController.h"
#import "HUMatterConnectedEcosystemDetailItemManager.h"

@interface HUMatterConnectedEcosystemDetailViewController : HUItemTableViewController <HUPresentationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUMatterConnectedEcosystemDetailItemManager *itemManager;
@property (readonly) Class superclass;


-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(BOOL)tableView:(id)arg0 shouldHighlightRowAtIndexPath:(id)arg1 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)initWithConnectedEcosystem:(id)arg0 connectedEcosystemItemProvider:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;


@end


#endif