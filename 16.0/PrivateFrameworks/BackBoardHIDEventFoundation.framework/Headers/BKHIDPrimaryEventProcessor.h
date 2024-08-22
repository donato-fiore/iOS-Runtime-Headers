// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BKHIDPRIMARYEVENTPROCESSOR_H
#define BKHIDPRIMARYEVENTPROCESSOR_H

@class NSSet, NSString;
@protocol BKHIDEventProcessor, BKHIDBufferedEventProcessor;

#import <Foundation/Foundation.h>


@interface BKHIDPrimaryEventProcessor : NSObject <BKHIDEventProcessor, BKHIDBufferedEventProcessor>

 {
    NSArray" _subProcessors;
    id<BKHIDEventProcessor> *_defaultProcessor;
    NSArray" _bufferedSubProcessors;
    NSSet *_allBufferedEventProcessors;
    id<BKHIDBufferedEventProcessor> *_defaultBufferedEventProcessor;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(?)processEvent:(?)arg0 senderdispatcher;
-(?)processEvent:(?)arg0 withContext:(?)arg1 buffer:(?)arg2 sequence:(?)arg3 sender:(?)arg4 dispatcherresolution;
-(id)_eventProcessorsForEventType:(unsigned int)arg0 ;
-(id)initWithSubProcessors:(id)arg0 defaultProcessor:(id)arg1 ;
-(void)bufferDidEndDraining:(id)arg0 ;
-(void)bufferWillBeginDraining:(id)arg0 ;
-(void)bufferingDidAddNewBuffers:(id)arg0 ;
-(void)conformsToBKHIDBufferedEventProcessor;
-(void)postEvent:(struct __IOHIDEvent *)arg0 withContext:(id)arg1 toResolution:(id)arg2 fromSequence:(id)arg3 ;


@end


#endif