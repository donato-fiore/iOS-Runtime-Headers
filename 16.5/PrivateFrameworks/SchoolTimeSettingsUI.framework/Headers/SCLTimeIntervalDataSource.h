// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SCLTIMEINTERVALDATASOURCE_H
#define SCLTIMEINTERVALDATASOURCE_H

@class NSArray, NSMutableArray, SCLScheduleTimeFormatter;
@protocol SCLTimeIntervalDataSourceDelegate;


#import "SCLSpecifierDataSource.h"
#import "SCLTimeIntervalModel.h"

@interface SCLTimeIntervalDataSource : SCLSpecifierDataSource

@property (readonly, nonatomic) NSArray *addIntervalGroupSpecifiers; // ivar: _addIntervalGroupSpecifiers
@property (weak, nonatomic) NSObject<SCLTimeIntervalDataSourceDelegate> *delegate; // ivar: _delegate
@property (readonly, nonatomic) NSMutableArray *intervalGroupSpecifiers; // ivar: _intervalGroupSpecifiers
@property (readonly, nonatomic) SCLTimeIntervalModel *model; // ivar: _model
@property (readonly, nonatomic) SCLScheduleTimeFormatter *scheduleTimeFormatter; // ivar: _scheduleTimeFormatter
@property (copy, nonatomic) NSArray *timeIntervals;


-(NSUInteger)modelIndexForSpecifier:(id)arg0 ;
-(id)createSpecifiersForIntervalsAtIndex:(NSUInteger)arg0 ;
-(id)initWithListController:(id)arg0 timeIntervals:(id)arg1 ;
-(id)intervalSpecifiers;
-(void)addInterval:(id)arg0 ;
-(void)applySpecifiers;
-(void)configureSpecifier:(id)arg0 forIndex:(NSUInteger)arg1 ;
-(void)loadSpecifiers;
-(void)model:(id)arg0 didAddIntervalAtIndexes:(id)arg1 ;
-(void)model:(id)arg0 didDeleteIntervalAtIndex:(NSUInteger)arg1 ;
-(void)model:(id)arg0 didUpdateIntervalAtIndex:(NSUInteger)arg1 ;
-(void)notifyDelegateOfModelUpdate;
-(void)reconfigureAllSpecifiers;
-(void)removeIntervalForSpecifier:(id)arg0 ;
-(void)setTimeInterval:(id)arg0 forSpecifier:(id)arg1 ;


@end


#endif