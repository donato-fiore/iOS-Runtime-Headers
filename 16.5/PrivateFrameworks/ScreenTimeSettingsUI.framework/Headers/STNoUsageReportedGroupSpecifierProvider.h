// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STNOUSAGEREPORTEDGROUPSPECIFIERPROVIDER_H
#define STNOUSAGEREPORTEDGROUPSPECIFIERPROVIDER_H

@class PSSpecifier;


#import "STRootGroupSpecifierProvider.h"

@interface STNoUsageReportedGroupSpecifierProvider : STRootGroupSpecifierProvider

@property (retain) PSSpecifier *noUsageReportedAlertSpecifier; // ivar: _noUsageReportedAlertSpecifier


-(id)init;
-(void)_devicesDidChange:(id)arg0 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setCoordinator:(id)arg0 ;


@end


#endif