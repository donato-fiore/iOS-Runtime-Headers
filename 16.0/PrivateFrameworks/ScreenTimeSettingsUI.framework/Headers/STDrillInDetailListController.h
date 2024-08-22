// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STDRILLINDETAILLISTCONTROLLER_H
#define STDRILLINDETAILLISTCONTROLLER_H



#import "STPINListViewController.h"
#import "STAllowanceProgressGroupSpecifierProvider.h"
#import "STCategoryDetailsGroupSpecifierProvider.h"
#import "STDrillInItemInfoGroupSpecifierProvider.h"
#import "STDrillInUsageGroupSpecifierProvider.h"
#import "STUsageItem.h"

@interface STDrillInDetailListController : STPINListViewController

@property (readonly, nonatomic) STAllowanceProgressGroupSpecifierProvider *allowanceProgressGroupSpecifierProvider; // ivar: _allowanceProgressGroupSpecifierProvider
@property (readonly, nonatomic) STCategoryDetailsGroupSpecifierProvider *categoryDetailsGroupSpecifierProvider; // ivar: _categoryDetailsGroupSpecifierProvider
@property (readonly, nonatomic) STDrillInItemInfoGroupSpecifierProvider *drillInItemInfoGroupSpecifierProvider; // ivar: _drillInItemInfoGroupSpecifierProvider
@property (readonly, nonatomic) STDrillInUsageGroupSpecifierProvider *screenTimeGroupSpecifierProvider; // ivar: _screenTimeGroupSpecifierProvider
@property (readonly, nonatomic) STUsageItem *usageItem; // ivar: _usageItem


-(BOOL)canBeShownFromSuspendedState;
-(id)initWithUsageItem:(id)arg0 coordinator:(id)arg1 ;
-(void)_didFetchAppInfo:(id)arg0 ;
-(void)tableView:(id)arg0 willDisplayFooterView:(id)arg1 forSection:(NSInteger)arg2 ;
-(void)viewDidLoad;


@end


#endif