// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BWMETALINFERENCECONTEXT_H
#define BWMETALINFERENCECONTEXT_H

@protocol MTLCommandQueueSPI, MTLCommandQueue;

#import <Foundation/Foundation.h>


@interface BWMetalInferenceContext : NSObject {
    BOOL _prepared;
    id<MTLCommandQueueSPI> *_commandQueueSPI;
}


@property (readonly, nonatomic) NSObject<MTLCommandQueue> *commandQueue; // ivar: _commandQueue


-(id)initWithSchedulerPriority:(unsigned int)arg0 ;
-(int)prepareForInferenceWithCompletionQueue:(id)arg0 ;
-(void)dealloc;


@end


#endif