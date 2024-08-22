// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSRATELIMITER_H
#define IDSRATELIMITER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface IDSRateLimiter : NSObject

@property (retain, nonatomic) NSMutableDictionary *cacheMap; // ivar: _cacheMap
@property (nonatomic) NSInteger limit; // ivar: _limit
@property (nonatomic) os_unfair_lock_s lock; // ivar: _lock
@property (nonatomic) CGFloat timeLimit; // ivar: _timeLimit


-(BOOL)underLimitForItem:(id)arg0 ;
-(CGFloat)timeToUnderLimit:(id)arg0 ;
-(id)description;
-(id)initWithLimit:(NSInteger)arg0 timeLimit:(CGFloat)arg1 ;
-(void)cleanupExpiredItems;
-(void)clearAllItems;
-(void)clearItem:(id)arg0 ;
-(void)noteItem:(id)arg0 ;


@end


#endif