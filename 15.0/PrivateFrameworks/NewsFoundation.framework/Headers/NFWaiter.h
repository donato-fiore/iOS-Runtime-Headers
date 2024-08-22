// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NFWAITER_H
#define NFWAITER_H


#import <Foundation/Foundation.h>


@interface NFWaiter : NSObject

@property (readonly, nonatomic) CGFloat interval; // ivar: _interval
@property (readonly, nonatomic) CGFloat timeout; // ivar: _timeout


+(id)error;
+(id)waitWithInterval:(CGFloat)arg0 timeout:(CGFloat)arg1 conditionProvider:(id)arg2 ;
+(id)waitWithInterval:(CGFloat)arg0 timeout:(CGFloat)arg1 valueProvider:(id)arg2 ;
// +(id)waitWithInterval:(CGFloat)arg0 timeout:(CGFloat)arg1 valueProvider:(id)arg2 condition:(unk)arg3  ;
+(id)waitWithTimeout:(CGFloat)arg0 conditionProvider:(id)arg1 ;
+(id)waitWithTimeout:(CGFloat)arg0 valueProvider:(id)arg1 ;
// +(void)waitFor:(id)arg0 waitInterval:(unk)arg1 timeoutInterval:(CGFloat)arg2 completion:(CGFloat)arg3 failure:(id)arg4  ;
// +(void)waitUntil:(id)arg0 waitInterval:(unk)arg1 timeoutInterval:(CGFloat)arg2 completion:(CGFloat)arg3 failure:(id)arg4  ;


@end


#endif