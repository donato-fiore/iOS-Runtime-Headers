// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STSCREENTIMEGROUPSPECIFIERPROVIDER_H
#define STSCREENTIMEGROUPSPECIFIERPROVIDER_H

@class PSSpecifier;


#import "STRootGroupSpecifierProvider.h"

@interface STScreenTimeGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (readonly) PSSpecifier *seeAllActivitySpecifier; // ivar: _seeAllActivitySpecifier
@property (readonly) PSSpecifier *usageSummarySpecifier; // ivar: _usageSummarySpecifier


-(id)_usageDetailsCoordinator:(id)arg0 ;
-(id)init;
-(void)_displayNameDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)_hasWatchOSDevicesOnlyDidChange:(BOOL)arg0 ;
-(void)_refreshingDidChange:(BOOL)arg0 ;
-(void)_screenTimeEnabledDidChange:(BOOL)arg0 ;
-(void)_showUsageDetailListController:(id)arg0 ;
-(void)_usageReportDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setCoordinator:(id)arg0 ;


@end


#endif