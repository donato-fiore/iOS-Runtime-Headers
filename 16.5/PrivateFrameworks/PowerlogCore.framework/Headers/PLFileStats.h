// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PLFILESTATS_H
#define PLFILESTATS_H


#import <Foundation/Foundation.h>


@interface PLFileStats : NSObject



+(CGFloat)totalLogDuration;
+(CGFloat)totalLogDurationFromTable:(id)arg0 where:(id)arg1 ;
+(NSInteger)fileSizeAtPath:(id)arg0 ;
+(id)cpuTimeForProcess:(id)arg0 ;
+(id)logEndDate;
+(id)logEndDateFromTable:(id)arg0 ;
+(id)logStartDate;
+(id)logStartDateFromTable:(id)arg0 ;
+(id)select:(id)arg0 from:(id)arg1 where:(id)arg2 ;
+(id)statsForFile:(id)arg0 ;
+(id)tableCounts;


@end


#endif