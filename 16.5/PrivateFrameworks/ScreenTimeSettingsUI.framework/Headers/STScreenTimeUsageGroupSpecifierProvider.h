// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSCREENTIMEUSAGEGROUPSPECIFIERPROVIDER_H
#define STSCREENTIMEUSAGEGROUPSPECIFIERPROVIDER_H

@class PSSpecifier;


#import "STUsageGroupSpecifierProvider.h"

@interface STScreenTimeUsageGroupSpecifierProvider : STUsageGroupSpecifierProvider

@property (retain, nonatomic) PSSpecifier *usageSummaryGraphSpecifier; // ivar: _usageSummaryGraphSpecifier
@property (retain, nonatomic) PSSpecifier *weeklyTotalSpecifier; // ivar: _weeklyTotalSpecifier


-(id)_usageDetailsCoordinator:(id)arg0 ;
-(id)_weeklyTotal:(id)arg0 ;
-(id)init;
-(void)_headerButtonPressed:(id)arg0 ;
-(void)_lastUpdatedDateDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)_refreshingDidChange:(BOOL)arg0 ;
-(void)_selectedUsageReportDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)_specifierIdentifierDidChange:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setCoordinator:(id)arg0 ;


@end


#endif