// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DPSUBMISSIONRATELIMITER_H
#define _DPSUBMISSIONRATELIMITER_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _DPSubmissionRateLimiter : NSObject

@property (retain, nonatomic) NSMutableDictionary *limitDictionary; // ivar: _limitDictionary
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *limiterQueue; // ivar: _limiterQueue


+(id)budgetNameForKey:(id)arg0 ;
+(id)rateLimitsFromBudgetProperties;
+(id)sharedInstance;
-(NSUInteger)debit:(NSUInteger)arg0 forKey:(id)arg1 ;
-(id)init;
-(id)initWithLimits:(id)arg0 ;
-(void)credit:(id)arg0 amount:(NSUInteger)arg1 ;


@end


#endif