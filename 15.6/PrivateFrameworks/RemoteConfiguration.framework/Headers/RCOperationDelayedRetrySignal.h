// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef RCOPERATIONDELAYEDRETRYSIGNAL_H
#define RCOPERATIONDELAYEDRETRYSIGNAL_H

@class NSString;
@protocol RCOperationRetrySignal;

#import <Foundation/Foundation.h>


@interface RCOperationDelayedRetrySignal : NSObject <RCOperationRetrySignal>

 {
    NSUInteger _signalTime;
    CGFloat _delay;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithDelay:(CGFloat)arg0 ;
-(void)onQueue:(id)arg0 signal:(id)arg1 ;


@end


#endif