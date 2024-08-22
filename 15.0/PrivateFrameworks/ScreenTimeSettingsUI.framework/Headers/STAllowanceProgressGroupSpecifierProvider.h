// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STALLOWANCEPROGRESSGROUPSPECIFIERPROVIDER_H
#define STALLOWANCEPROGRESSGROUPSPECIFIERPROVIDER_H

@class PSSpecifier, NSSet, NSString;
@protocol STAllowanceDetailListControllerDelegate;


#import "STUsageGroupSpecifierProvider.h"
#import "STUsageItem.h"

@interface STAllowanceProgressGroupSpecifierProvider : STUsageGroupSpecifierProvider <STAllowanceDetailListControllerDelegate>



@property (readonly, copy) PSSpecifier *addAllowanceSpecifier; // ivar: _addAllowanceSpecifier
@property (readonly, copy, nonatomic) NSSet *budgetedIdentifiers; // ivar: _budgetedIdentifiers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) STUsageItem *usageItem; // ivar: _usageItem


-(id)_allowanceDetailText:(id)arg0 ;
-(id)_specifierForAllowance:(id)arg0 ;
-(id)init;
-(id)initWithBudgetedIdentifiers:(id)arg0 usageItem:(id)arg1 ;
-(void)_allowancesByIdentifierDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)_didFetchAppInfo:(id)arg0 ;
-(void)_showAllowanceDetailListController:(id)arg0 ;
-(void)_showAllowanceSetupListController:(id)arg0 ;
-(void)allowanceDetailController:(id)arg0 didDeleteAllowance:(id)arg1 ;
-(void)allowanceDetailController:(id)arg0 didSaveAllowance:(id)arg1 ;
-(void)allowanceDetailControllerDidCancel:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setCoordinator:(id)arg0 ;


@end


#endif