// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKHIDGAMECONTROLLEREVENTPROCESSOR_H
#define BKHIDGAMECONTROLLEREVENTPROCESSOR_H

@class NSString;
@protocol BKHIDEventProcessor;

#import <Foundation/Foundation.h>


@interface BKHIDGameControllerEventProcessor : NSObject <BKHIDEventProcessor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(NSInteger)processEvent:(struct __IOHIDEvent **)arg0 sender:(id)arg1 dispatcher:(id)arg2 ;


@end


#endif