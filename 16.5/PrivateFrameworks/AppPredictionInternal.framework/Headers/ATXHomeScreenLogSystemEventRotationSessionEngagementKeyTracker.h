// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHOMESCREENLOGSYSTEMEVENTROTATIONSESSIONENGAGEMENTKEYTRACKER_H
#define ATXHOMESCREENLOGSYSTEMEVENTROTATIONSESSIONENGAGEMENTKEYTRACKER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenLogSystemEventRotationSessionEngagementKeyTracker : NSObject

@property (readonly, nonatomic) NSString *proactiveStatusAggregationKey; // ivar: _proactiveStatusAggregationKey
@property (readonly, nonatomic) NSString *proactiveStatusBooleanKey; // ivar: _proactiveStatusBooleanKey
@property (readonly, nonatomic) NSString *statusAggregationKey; // ivar: _statusAggregationKey
@property (readonly, nonatomic) NSString *userScrollFinalOutcomeKey; // ivar: _userScrollFinalOutcomeKey
@property (readonly, nonatomic) NSString *userScrollStatusBooleanKey; // ivar: _userScrollStatusBooleanKey


+(id)keyTrackerForRotationSessionStackEngagementStatus:(NSUInteger)arg0 ;
-(id)initWithStatusAggregationKey:(id)arg0 proactiveStatusAggregationKey:(id)arg1 proactiveStatusBooleanKey:(id)arg2 userScrollStatusBooleanKey:(id)arg3 userScrollFinalOutcomeKey:(id)arg4 ;


@end


#endif