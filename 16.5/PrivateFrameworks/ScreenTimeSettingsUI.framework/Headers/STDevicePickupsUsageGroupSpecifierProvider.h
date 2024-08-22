// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef STDEVICEPICKUPSUSAGEGROUPSPECIFIERPROVIDER_H
#define STDEVICEPICKUPSUSAGEGROUPSPECIFIERPROVIDER_H



#import "STShowMoreUsageGroupSpecifierProvider.h"

@interface STDevicePickupsUsageGroupSpecifierProvider : STShowMoreUsageGroupSpecifierProvider



-(id)_usageDetailsCoordinator:(id)arg0 ;
-(id)getPickupsInfo:(id)arg0 ;
-(id)init;
-(id)newSpecifierWithUsageItem:(id)arg0 ;
-(void)_selectedUsageReportDidChangeFrom:(id)arg0 to:(id)arg1 ;
-(void)_specifierIdentifierDidChange:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setCoordinator:(id)arg0 ;
-(void)showMostUsedDetailListController:(id)arg0 ;
-(void)updateSpecifier:(id)arg0 usageItem:(id)arg1 ;


@end


#endif