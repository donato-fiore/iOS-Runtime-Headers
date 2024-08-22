// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HULOCATIONCONNECTEDECOSYSTEMDETAILVIEWCONTROLLER_H
#define HULOCATIONCONNECTEDECOSYSTEMDETAILVIEWCONTROLLER_H

@class NSString;
@protocol HUPresentationDelegate;


#import "HUItemTableViewController.h"
#import "HULocationConnectedEcosystemDetailItemManager.h"

@interface HULocationConnectedEcosystemDetailViewController : HUItemTableViewController <HUPresentationDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HULocationConnectedEcosystemDetailItemManager *itemManager;
@property (readonly) Class superclass;


-(BOOL)shouldHideFooterBelowSection:(NSInteger)arg0 ;
-(BOOL)shouldHideHeaderAboveSection:(NSInteger)arg0 ;
-(Class)cellClassForItem:(id)arg0 indexPath:(id)arg1 ;
-(id)finishPresentation:(id)arg0 animated:(BOOL)arg1 ;
-(id)initWithConnectedEcosystemHome:(id)arg0 home:(id)arg1 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(void)setupCell:(id)arg0 forItem:(id)arg1 indexPath:(id)arg2 ;


@end


#endif