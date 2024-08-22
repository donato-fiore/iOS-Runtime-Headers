// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STCATEGORYDETAILSGROUPSPECIFIERPROVIDER_H
#define STCATEGORYDETAILSGROUPSPECIFIERPROVIDER_H

@protocol STRootViewModelCoordinator;


#import "STGroupSpecifierProvider.h"
#import "STUsageDetailsViewModel.h"

@interface STCategoryDetailsGroupSpecifierProvider : STGroupSpecifierProvider

@property (readonly, nonatomic) NSObject<STRootViewModelCoordinator> *coordinator; // ivar: _coordinator
@property (readonly, nonatomic) STUsageDetailsViewModel *usageDetailsViewModel; // ivar: _usageDetailsViewModel


-(id)initWithCategoryUsageItem:(id)arg0 coordinator:(id)arg1 ;
-(id)totalUsageDescription:(id)arg0 ;
-(void)showMostUsedDetailListController:(id)arg0 ;


@end


#endif