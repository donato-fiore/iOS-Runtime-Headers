// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NADEALLOCATIONSENTINEL_H
#define NADEALLOCATIONSENTINEL_H

@class NSString;
@protocol NADeallocationTracerDelegate;

#import <Foundation/Foundation.h>

#import "NADeallocationTracer.h"

@interface NADeallocationSentinel : NSObject <NADeallocationTracerDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) id *finalizer; // ivar: _finalizer
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id *targetObject; // ivar: _targetObject
@property (readonly, weak, nonatomic) NADeallocationTracer *tracer; // ivar: _tracer


-(id)initWithTargetObject:(id)arg0 finalizer:(id)arg1 ;
-(void)dealloc;


@end


#endif