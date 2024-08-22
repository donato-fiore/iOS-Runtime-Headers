// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSEGMENTEDCONTROLGROUPSPECIFIERPROVIDER_H
#define STSEGMENTEDCONTROLGROUPSPECIFIERPROVIDER_H



#import "STUsageGroupSpecifierProvider.h"

@interface STSegmentedControlGroupSpecifierProvider : STUsageGroupSpecifierProvider



-(id)init;
-(void)_selectedDayDidChange:(id)arg0 ;
-(void)_selectedSegmentIndexChanged:(id)arg0 ;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)setCoordinator:(id)arg0 ;


@end


#endif