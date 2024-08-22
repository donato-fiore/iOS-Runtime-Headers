// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STMOSTUSEDGROUPSPECIFIERPROVIDER_H
#define STMOSTUSEDGROUPSPECIFIERPROVIDER_H

@class NSDictionary;


#import "STShowMoreUsageGroupSpecifierProvider.h"

@interface STMostUsedGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider

@property (copy, nonatomic) NSDictionary *allowancesByActiveBudgetedIdentifier; // ivar: _allowancesByActiveBudgetedIdentifier
@property (nonatomic) NSUInteger selectedItemType; // ivar: _selectedItemType


-(id)allowanceIconForUsageItem:(id)arg0 ;
-(id)getUsageItem:(id)arg0 ;
-(id)init;
-(id)newSpecifierWithUsageItem:(id)arg0 ;
-(void)_allowancesByIdentifierDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)_selectedUsageReportDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)loadActiveBudgetedIdentifiers;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)reloadMostUsedSpecifiers;
-(void)setCoordinator:(id)arg0 ;
-(void)showMostUsedDetailListController:(id)arg0 ;
-(void)toggleSelectedItemType:(id)arg0 ;
-(void)updateSpecifier:(id)arg0 usageItem:(id)arg1 ;


@end


#endif