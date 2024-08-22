// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef STSHOWMOREUSAGEGROUPSPECIFIERPROVIDER_H
#define STSHOWMOREUSAGEGROUPSPECIFIERPROVIDER_H

@class PSSpecifier, NSArray;


#import "STUsageGroupSpecifierProvider.h"

@interface STShowMoreUsageGroupSpecifierProvider : STUsageGroupSpecifierProvider

@property (nonatomic) NSUInteger numberOfItemsToShow; // ivar: _numberOfItemsToShow
@property (readonly, nonatomic) PSSpecifier *showMoreSpecifier; // ivar: _showMoreSpecifier
@property (retain, nonatomic) PSSpecifier *summarySpecifier; // ivar: _summarySpecifier
@property (nonatomic) NSUInteger totalNumberOfItemsToShow; // ivar: _totalNumberOfItemsToShow
@property (copy, nonatomic) NSArray *usageItems; // ivar: _usageItems


-(id)init;
-(id)newSpecifierWithUsageItem:(id)arg0 ;
-(void)refreshUsageSpecifiersWithUpdates:(BOOL)arg0 ;
-(void)showMoreItems:(id)arg0 ;
-(void)updateSpecifier:(id)arg0 usageItem:(id)arg1 ;


@end


#endif