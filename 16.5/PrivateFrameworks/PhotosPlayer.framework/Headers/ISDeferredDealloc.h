// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ISDEFERREDDEALLOC_H
#define ISDEFERREDDEALLOC_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface ISDeferredDealloc : NSObject {
    NSObject<OS_dispatch_queue> *_deferredDeallocQueue;
}




+(id)sharedInstance;
-(id)init;
-(void)_performDeferredDealloc:(id)arg0 ;
-(void)_performDeferredDealloc:(id)arg0 withDelay:(CGFloat)arg1 ;
-(void)dealloc;


@end


#endif