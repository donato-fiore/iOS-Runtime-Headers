// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CALCULATE_H
#define CALCULATE_H


#import <Foundation/Foundation.h>


@interface Calculate : NSObject



+(id)evaluate:(id)arg0 options:(id)arg1 ;
+(id)evaluate:(id)arg0 options:(id)arg1 needsUpdate:(*BOOL)arg2 ;
+(id)evaluate:(id)arg0 options:(id)arg1 resultHandler:(id)arg2 ;
+(void)_lock;
+(void)_resetGlobals;
+(void)_unlock;


@end


#endif