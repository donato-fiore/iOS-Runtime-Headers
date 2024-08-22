// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOTHROTTLERREQUESTER_H
#define GEOTHROTTLERREQUESTER_H


#import <Foundation/Foundation.h>


@interface GEOThrottlerRequester : NSObject



+(id)sharedRequester;
-(BOOL)_getTokenAndInfo:(*id)arg0 forRequest:(struct ? )arg1 nextSafeRequestTime:(*CGFloat)arg2 availableRequestCount:(*unsigned int)arg3 error:(*id)arg4 ;
-(BOOL)allowRequest:(struct ? )arg0 forClient:(id)arg1 throttlerToken:(*id)arg2 error:(*id)arg3 ;
-(BOOL)getThrottleStateFor:(struct ? )arg0 nextSafeRequestTime:(*CGFloat)arg1 availableRequestCount:(*unsigned int)arg2 error:(*id)arg3 ;
-(id)getTokenOrInfoFor:(struct ? )arg0 nextSafeRequestTime:(*CGFloat)arg1 availableRequestCount:(*unsigned int)arg2 error:(*id)arg3 ;


@end


#endif