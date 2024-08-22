// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRITASKRUNRESULT_H
#define TRITASKRUNRESULT_H

@class NSDate, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TRITaskRunResult : NSObject <NSCopying>



@property (readonly, nonatomic) NSDate *earliestRetryDate; // ivar: _earliestRetryDate
@property (readonly, nonatomic) NSArray *nextTasks; // ivar: _nextTasks
@property (readonly, nonatomic) BOOL reportResultToServer; // ivar: _reportResultToServer
@property (readonly, nonatomic) int runStatus; // ivar: _runStatus


+(id)resultWithRunStatus:(int)arg0 reportResultToServer:(BOOL)arg1 nextTasks:(id)arg2 earliestRetryDate:(id)arg3 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToResult:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithReplacementEarliestRetryDate:(id)arg0 ;
-(id)copyWithReplacementNextTasks:(id)arg0 ;
-(id)copyWithReplacementReportResultToServer:(BOOL)arg0 ;
-(id)copyWithReplacementRunStatus:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRunStatus:(int)arg0 reportResultToServer:(BOOL)arg1 nextTasks:(id)arg2 earliestRetryDate:(id)arg3 ;


@end


#endif