// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSINKSUBSCRIBER_H
#define AVSINKSUBSCRIBER_H

@class NSString;
@protocol AVCancellable;

#import <Foundation/Foundation.h>

#import "AVPublisher.h"

@interface AVSinkSubscriber : NSObject <AVCancellable>

 {
    AVPublisher *_publisher;
    id *_sink;
    id<AVCancellable> *_token;
    *OpaqueFigSimpleMutex _cancelMutex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithPublisher:(id)arg0 requestingInitialValue:(BOOL)arg1 sink:(id)arg2 ;
-(void)cancel;
-(void)dealloc;


@end


#endif