// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BKHIDGENERICGESTUREEVENTPROCESSOR_H
#define BKHIDGENERICGESTUREEVENTPROCESSOR_H

@class NSString, NSMutableDictionary;
@protocol BKHIDEventProcessor;

#import <Foundation/Foundation.h>


@interface BKHIDGenericGestureEventProcessor : NSObject <BKHIDEventProcessor>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableDictionary *pendingDestinationsPerSenderID; // ivar: _pendingDestinationsPerSenderID
@property (readonly) Class superclass;


-(NSInteger)processEvent:(struct __IOHIDEvent **)arg0 sender:(id)arg1 dispatcher:(id)arg2 ;


@end


#endif