// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIREUSEPOOL_H
#define _UIREUSEPOOL_H

@class NSMutableSet;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _UIReusePool : NSObject {
    NSMutableSet *_reuseSet;
    NSUInteger _purgePolicy;
    NSObject<OS_dispatch_queue> *_reuseSetAccessQueue;
}


@property (readonly, nonatomic) NSUInteger purgePolicy;


+(void)__applicationDidEnterBackground:(id)arg0 ;
+(void)__applicationWillEnterForeground:(id)arg0 ;
+(void)initialize;
-(id)init;
-(id)initWithPolicy:(NSUInteger)arg0 ;
-(id)reusableObject;
-(void)addObject:(id)arg0 ;
-(void)drainPool;


@end


#endif