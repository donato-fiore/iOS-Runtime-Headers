// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RCOPERATIONIMMEDIATERETRYSIGNAL_H
#define RCOPERATIONIMMEDIATERETRYSIGNAL_H

@class NSString;
@protocol RCOperationRetrySignal;

#import <Foundation/Foundation.h>


@interface RCOperationImmediateRetrySignal : NSObject <RCOperationRetrySignal>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)onQueue:(id)arg0 signal:(id)arg1 ;


@end


#endif