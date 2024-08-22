// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCLCUSTOMDAYDATASOURCE_H
#define SCLCUSTOMDAYDATASOURCE_H

@class NSString, SCLTimeIntervalsFormatter, PSSpecifier, NSArray;
@protocol SCLCustomDayViewControllerDelegate;


#import "SCLSpecifierDataSource.h"

@interface SCLCustomDayDataSource : SCLSpecifierDataSource <SCLCustomDayViewControllerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) SCLTimeIntervalsFormatter *formatter; // ivar: _formatter
@property (retain, nonatomic) PSSpecifier *groupSpecifier; // ivar: _groupSpecifier
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (retain, nonatomic) NSArray *weekdaySpecifiers; // ivar: _weekdaySpecifiers


-(NSInteger)dayForSpecifier:(id)arg0 ;
-(id)initWithListController:(id)arg0 viewModel:(id)arg1 ;
-(id)scheduleIntervalForSpecifier:(id)arg0 ;
-(id)specifierForDay:(NSInteger)arg0 ;
-(void)customDayViewControllerWillDismiss:(id)arg0 ;
-(void)showEditorForSpecifier:(id)arg0 ;
-(void)updateSpecifiersWithCurrentCalendar;


@end


#endif