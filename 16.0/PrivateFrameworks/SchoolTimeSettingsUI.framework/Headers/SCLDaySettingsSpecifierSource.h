// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLDAYSETTINGSSPECIFIERSOURCE_H
#define SCLDAYSETTINGSSPECIFIERSOURCE_H

@class NSArray, NSString, PSSpecifier;
@protocol SCLTimeIntervalDataSourceDelegate;


#import "SCLSpecifierDataSource.h"
#import "SCLCustomDayDataSource.h"
#import "SCLTimeIntervalDataSource.h"

@interface SCLDaySettingsSpecifierSource : SCLSpecifierDataSource <SCLTimeIntervalDataSourceDelegate>



@property (retain, nonatomic) NSArray *currentSpecifiers; // ivar: _currentSpecifiers
@property (retain, nonatomic) SCLCustomDayDataSource *customDayDataSource; // ivar: _customDayDataSource
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SCLTimeIntervalDataSource *repeatedDaySource; // ivar: _repeatedDaySource
@property (readonly) Class superclass;


-(NSInteger)repeatScheduleForRepeatingScheduleType:(NSUInteger)arg0 ;
-(id)initWithListController:(id)arg0 viewModel:(id)arg1 ;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)tableView:(id)arg0 didSelectRowAtIndexPath:(id)arg1 specifier:(id)arg2 ;
-(void)timeIntervalDataSource:(id)arg0 didUpdateTimeIntervals:(id)arg1 ;
-(void)updateScheduleType:(NSUInteger)arg0 ;


@end


#endif