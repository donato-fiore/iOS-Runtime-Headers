// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUMATTERCONNECTEDSERVICESVIEWCONTROLLER_H
#define HUMATTERCONNECTEDSERVICESVIEWCONTROLLER_H

@class NSString;
@protocol HUPresentationDelegate;


#import "HUItemTableViewController.h"
#import "HUMatterConnectedServicesItemManager.h"

@interface HUMatterConnectedServicesViewController : HUItemTableViewController <HUPresentationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUMatterConnectedServicesItemManager *itemManager;
@property (readonly) Class superclass;


-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)initWithConnectedServicesItemProvider:(id)arg0 ;
-(void)_presentHomeConnectedEcosystemDetailViewController:(id)arg0 ;
-(void)_presentRemoveFromEcosystemHomeConfirmation:(id)arg0 atIndexPath:(id)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif