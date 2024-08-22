// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _SYQUIESCENCEOBSERVER_H
#define _SYQUIESCENCEOBSERVER_H

@class NSPointerArray, NSMutableSet;
@protocol OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface _SYQuiescenceObserver : NSObject {
    NSPointerArray *_quiescenceQueues;
    NSObject<OS_dispatch_group> *_allocationGroup;
    NSMutableSet *_allocations;
}




+(BOOL)isQuiescenceEnabled;
+(id)sharedInstance;
+(void)setQuiescenceEnabled:(BOOL)arg0 ;
-(BOOL)waitForDeallocationCompleteWithTimeout:(CGFloat)arg0 ;
-(BOOL)waitForQuiescenceWithTimeout:(CGFloat)arg0 ;
-(id)init;
-(void)decrementAllocationCount:(id)arg0 ;
-(void)incrementAllocationCount:(id)arg0 ;
-(void)notifyOnDeallocationComplete:(id)arg0 ;
-(void)notifyOnQuiescence:(id)arg0 ;
-(void)registerQueue:(id)arg0 ;


@end


#endif