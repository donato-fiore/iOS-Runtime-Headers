// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCOPERATIONIMMEDIATERETRYSIGNAL_H
#define FCOPERATIONIMMEDIATERETRYSIGNAL_H

@class NSString;
@protocol FCOperationRetrySignal;

#import <Foundation/Foundation.h>


@interface FCOperationImmediateRetrySignal : NSObject <FCOperationRetrySignal>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(void)onQueue:(id)arg0 signal:(id)arg1 ;


@end


#endif