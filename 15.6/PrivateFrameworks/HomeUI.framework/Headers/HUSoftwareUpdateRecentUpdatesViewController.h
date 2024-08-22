// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HUSOFTWAREUPDATERECENTUPDATESVIEWCONTROLLER_H
#define HUSOFTWAREUPDATERECENTUPDATESVIEWCONTROLLER_H

@class NSString;
@protocol HUPresentationDelegateHost, HUPresentationDelegate;


#import "HUItemTableViewController.h"
#import "HUSoftwareUpdateRecentUpdatesItemManager.h"
#import "HUSoftwareUpdateItemModuleController.h"

@interface HUSoftwareUpdateRecentUpdatesViewController : HUItemTableViewController <HUPresentationDelegateHost>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) HUSoftwareUpdateRecentUpdatesItemManager *itemManager;
@property (weak, nonatomic) NSObject<HUPresentationDelegate> *presentationDelegate; // ivar: _presentationDelegate
@property (retain, nonatomic) HUSoftwareUpdateItemModuleController *softwareUpdateItemModuleController; // ivar: _softwareUpdateItemModuleController
@property (readonly) Class superclass;


-(id)initWithHome:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)itemModuleControllers;
-(void)viewDidLoad;


@end


#endif