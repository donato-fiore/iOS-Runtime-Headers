// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SCLCUSTOMDAYEDITORSOURCE_H
#define SCLCUSTOMDAYEDITORSOURCE_H

@class NSString;
@protocol SCLTimeIntervalDataSourceDelegate;


#import "SCLSpecifierDataSource.h"
#import "SCLTimeIntervalDataSource.h"

@interface SCLCustomDayEditorSource : SCLSpecifierDataSource <SCLTimeIntervalDataSourceDelegate>



@property (readonly, nonatomic) NSInteger day; // ivar: _day
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) SCLTimeIntervalDataSource *timeSource; // ivar: _timeSource


-(id)enabledForSpecifier:(id)arg0 ;
-(id)initWithListController:(id)arg0 viewModel:(id)arg1 day:(NSInteger)arg2 title:(id)arg3 ;
-(void)setEnabled:(id)arg0 specifier:(id)arg1 ;
-(void)timeIntervalDataSource:(id)arg0 didUpdateTimeIntervals:(id)arg1 ;


@end


#endif