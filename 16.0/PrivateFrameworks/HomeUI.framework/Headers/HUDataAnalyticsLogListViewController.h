// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HUDATAANALYTICSLOGLISTVIEWCONTROLLER_H
#define HUDATAANALYTICSLOGLISTVIEWCONTROLLER_H

@class NSString;
@protocol HUAccessorySettingsDetailsViewControllerProtocol, HUDataAnalyticsModuleControllerDelegate, HFMediaProfileContainer;


#import "HUItemTableViewController.h"
#import "HUActivityLoadingView.h"
#import "HUDataAnalyticsModuleController.h"

@interface HUDataAnalyticsLogListViewController : HUItemTableViewController <HUAccessorySettingsDetailsViewControllerProtocol, HUDataAnalyticsModuleControllerDelegate>



@property (readonly, nonatomic) HUActivityLoadingView *activityLoadingView; // ivar: _activityLoadingView
@property (retain, nonatomic) HUDataAnalyticsModuleController *analyticsModuleController; // ivar: _analyticsModuleController
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSObject<HFMediaProfileContainer> *mediaProfileContainer; // ivar: _mediaProfileContainer
@property (readonly) Class superclass;
@property (readonly) Class superclass;


-(BOOL)bypassInitialItemUpdateReload;
-(id)hu_preloadContent;
-(id)init;
-(id)initWithAccessoryGroupItem:(id)arg0 ;
-(id)initWithItemManager:(id)arg0 tableViewStyle:(NSInteger)arg1 ;
-(id)initWithMediaProfileContainer:(id)arg0 ;
-(id)itemModuleControllers;
-(void)_kickoffReload;
-(void)_watchForReload;
-(void)dataAnalyticsModuleController:(id)arg0 didSelectItem:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;


@end


#endif