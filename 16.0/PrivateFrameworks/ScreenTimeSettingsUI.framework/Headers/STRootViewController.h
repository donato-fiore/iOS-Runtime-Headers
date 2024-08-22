// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STROOTVIEWCONTROLLER_H
#define STROOTVIEWCONTROLLER_H



#import "STPINListViewController.h"
#import "STEnableScreenTimeGroupSpecifierProvider.h"
#import "STNoUsageReportedGroupSpecifierProvider.h"
#import "STScreenTimeGroupSpecifierProvider.h"

@interface STRootViewController : STPINListViewController

@property (readonly) STEnableScreenTimeGroupSpecifierProvider *enableScreenTimeGroupSpecifierProvider; // ivar: _enableScreenTimeGroupSpecifierProvider
@property (readonly) STNoUsageReportedGroupSpecifierProvider *noUsageReportedGroupSpecifierProvider; // ivar: _noUsageReportedGroupSpecifierProvider
@property (readonly, nonatomic) BOOL presentedAsModal; // ivar: _presentedAsModal
@property (readonly) STScreenTimeGroupSpecifierProvider *screenTimeGroupSpecifierProvider; // ivar: _screenTimeGroupSpecifierProvider
@property (nonatomic) BOOL shouldRefreshUsageData; // ivar: _shouldRefreshUsageData


-(CGFloat)tableView:(id)arg0 heightForRowAtIndexPath:(id)arg1 ;
-(id)initWithRootViewModelCoordinator:(id)arg0 ;
-(id)initWithRootViewModelCoordinator:(id)arg0 presentedAsModal:(BOOL)arg1 ;
-(id)tableView:(id)arg0 cellForRowAtIndexPath:(id)arg1 ;
-(void)_startObservingCoordinator;
-(void)_stopObservingCoordinator;
-(void)dealloc;
-(void)doneButtonAction:(id)arg0 ;
-(void)handleURL:(id)arg0 withCompletion:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setSpecifier:(id)arg0 ;
-(void)viewDidLoad;
-(void)viewWillAppear:(BOOL)arg0 ;
-(void)viewWillDisappear:(BOOL)arg0 ;


@end


#endif