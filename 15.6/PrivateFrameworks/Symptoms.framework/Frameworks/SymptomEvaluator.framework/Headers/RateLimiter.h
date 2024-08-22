// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RATELIMITER_H
#define RATELIMITER_H

@class NSString;
@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface RateLimiter : NSObject {
    unsigned int _style;
    NSString *_name;
    unsigned int _tokenBucketSize;
    CGFloat _tokenBucketCfgRefreshInterval;
    CGFloat _tokenBucketCfgIntervalBias;
    CGFloat _tokenBucketIntervalBias;
    CGFloat _tokenBucketInterval;
    CGFloat _lastConsumed;
    BOOL _configured;
}


@property (retain, nonatomic) NSObject<OS_os_log> *logHandle; // ivar: _logHandle
@property (retain, nonatomic) NSString *name;


-(BOOL)_setTokenBucketConfiguration:(id)arg0 ;
-(BOOL)_tokenBucketResetWithRelativeStartTime:(CGFloat)arg0 ;
-(BOOL)resetWithRelativeStartTime:(CGFloat)arg0 ;
-(BOOL)setConfiguration:(id)arg0 ;
-(CGFloat)_tokenBucketAcquireHelper:(BOOL)arg0 ;
-(CGFloat)checkAcquire;
-(CGFloat)tryAcquire;
-(id)getState;
-(void)_restoreDefaults;
-(void)_restoreTokenBucketDefaults;
-(void)_setTokenBucketDerivedValues;


@end


#endif