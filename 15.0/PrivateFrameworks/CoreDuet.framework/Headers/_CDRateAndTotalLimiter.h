// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _CDRATEANDTOTALLIMITER_H
#define _CDRATEANDTOTALLIMITER_H

@class CDRateLimiter;



@interface _CDRateAndTotalLimiter : CDRateLimiter

@property NSInteger currentTotal; // ivar: _currentTotal
@property (readonly) NSInteger totalCount; // ivar: _totalCount


-(BOOL)credit;
-(BOOL)debited;
-(id)description;
-(id)initWithCount:(NSInteger)arg0 perPeriod:(CGFloat)arg1 ;
-(id)initWithCount:(NSInteger)arg0 perPeriod:(CGFloat)arg1 totalCountLimit:(NSInteger)arg2 ;


@end


#endif