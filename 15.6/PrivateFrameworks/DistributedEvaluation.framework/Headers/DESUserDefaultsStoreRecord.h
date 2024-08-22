// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DESUSERDEFAULTSSTORERECORD_H
#define DESUSERDEFAULTSSTORERECORD_H

@class NSString, NSDictionary, NSDate, NSNumber;

#import <Foundation/Foundation.h>


@interface DESUserDefaultsStoreRecord : NSObject

@property (readonly, nonatomic) NSString *completionDateKey;
@property (copy, nonatomic) NSDictionary *debugInfo;
@property (copy, nonatomic) NSDate *lastCompletionDate;
@property (copy, nonatomic) NSNumber *maxTimeLimitInSeconds;
@property (nonatomic) NSInteger performCount;
@property (copy, nonatomic) NSNumber *periodInSeconds;
@property (readonly, nonatomic) NSString *recordID; // ivar: _recordID


+(id)schedulerWakeupPeriodInSeconds;
+(void)purgeObsoleted;
+(void)setSchedulerWakeupPeriodInSeconds:(id)arg0 ;
-(id)description;
-(id)initWithRecordID:(id)arg0 ;
-(id)maxTimeLimitKey;
-(id)periodKey;


@end


#endif