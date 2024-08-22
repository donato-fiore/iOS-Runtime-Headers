// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HULOCATIONCONNECTEDECOSYSTEMSVIEWCONTROLLER_H
#define HULOCATIONCONNECTEDECOSYSTEMSVIEWCONTROLLER_H

@class NSString;
@protocol HUPresentationDelegate;


#import "HUItemTableViewController.h"
#import "HULocationConnectedEcosystemsItemManager.h"

@interface HULocationConnectedEcosystemsViewController : HUItemTableViewController <HUPresentationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HULocationConnectedEcosystemsItemManager *itemManager;
@property (readonly) Class superclass;


-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)initWithHome:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 ;


@end


#endif