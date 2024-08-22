// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXHOMESCREENLOGENGAGEMENTKEYTRACKER_H
#define ATXHOMESCREENLOGENGAGEMENTKEYTRACKER_H

@class NSString;

#import <Foundation/Foundation.h>


@interface ATXHomeScreenLogEngagementKeyTracker : NSObject

@property (readonly, nonatomic) NSString *rotationAggregationKey; // ivar: _rotationAggregationKey
@property (readonly, nonatomic) NSString *rotationBooleanKey; // ivar: _rotationBooleanKey
@property (readonly, nonatomic) NSString *rotationFinalOutcomeKey; // ivar: _rotationFinalOutcomeKey


+(id)keyTrackerForStackEngagementStatus:(NSUInteger)arg0 ;
-(id)initWithRotationAggregationKey:(id)arg0 rotationBooleanKey:(id)arg1 rotationFinalOutcomeKey:(id)arg2 ;


@end


#endif