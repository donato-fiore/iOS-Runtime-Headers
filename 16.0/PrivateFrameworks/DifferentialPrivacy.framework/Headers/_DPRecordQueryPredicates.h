// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _DPRECORDQUERYPREDICATES_H
#define _DPRECORDQUERYPREDICATES_H


#import <Foundation/Foundation.h>


@interface _DPRecordQueryPredicates : NSObject



+(id)entityForKey:(id)arg0 ;
+(id)predicateForAllRecords;
+(id)predicateForKey:(id)arg0 ;
+(id)predicateForKey:(id)arg0 beginsWith:(BOOL)arg1 matchReportVersion:(BOOL)arg2 ;
+(id)predicateForKey:(id)arg0 beginsWith:(BOOL)arg1 submitted:(BOOL)arg2 matchReportVersion:(BOOL)arg3 ;
+(id)predicateForKeyBeginsWith:(id)arg0 ;
+(id)predicateForRecordsInDateRangeStart:(id)arg0 end:(id)arg1 ;
+(id)predicateForRecordsMatchingKey:(id)arg0 ;
+(id)predicateForRecordsNotSubmitted;
+(id)predicateForRecordsNotSubmittedForKey:(id)arg0 ;
+(id)predicateForRecordsNotSubmittedForKeyBeginsWith:(id)arg0 ;
+(id)predicateForRecordsOlderThan:(id)arg0 ;
+(id)predicateForRecordsSubmitted;
+(id)predicateForRecordsSubmittedForKey:(id)arg0 ;
+(id)predicateForRecordsWithVersionMismatch;
+(void)initialize;


@end


#endif