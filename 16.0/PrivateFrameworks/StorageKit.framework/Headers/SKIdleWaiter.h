// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKIDLEWAITER_H
#define SKIDLEWAITER_H

@class NSString;
@protocol SKManagerListener, OS_dispatch_semaphore;

#import <Foundation/Foundation.h>


@interface SKIdleWaiter : NSObject <SKManagerListener>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *semaphore; // ivar: _semaphore
@property (readonly) Class superclass;


-(id)init;
-(void)initialPopulateComplete;
-(void)waitForIdle;


@end


#endif