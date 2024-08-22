// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPREPORTGENERATOR_H
#define _DPREPORTGENERATOR_H

@protocol _DPMaintenance, _DPMetricsCollector;

#import <Foundation/Foundation.h>


@interface _DPReportGenerator : NSObject <_DPMaintenance>



@property (readonly, nonatomic) NSObject<_DPMetricsCollector> *metricsCollector; // ivar: _metricsCollector


+(NSUInteger)queryRecordCountForKey:(id)arg0 withPredicate:(id)arg1 storage:(id)arg2 ;
+(id)filterNonConformingRecordsFrom:(id)arg0 ;
+(id)queryKeysForPattern:(id)arg0 storage:(id)arg1 ;
+(id)queryRecordsForKey:(id)arg0 storage:(id)arg1 ;
+(id)randomizeKeys:(id)arg0 andSortByPriority:(BOOL)arg1 ;
-(BOOL)markSubmitted:(id)arg0 storage:(id)arg1 ;
-(id)generateReportForKeys:(id)arg0 storage:(id)arg1 ;
-(id)generateReportUsing:(id)arg0 ;
-(id)init;
-(id)initWithMetricsCollector:(id)arg0 ;
-(void)reportMetricsForKey:(id)arg0 toBeSubmitted:(id)arg1 currentDate:(id)arg2 storage:(id)arg3 ;
-(void)reportToPrivateCloudWithStrings:(id)arg0 forKey:(id)arg1 ;
-(void)scheduleMaintenanceWithName:(id)arg0 database:(id)arg1 ;


@end


#endif