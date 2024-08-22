// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BWNODECONNECTION_H
#define BWNODECONNECTION_H

@class NSMutableArray, NSString;
@protocol BWNodeOutputConsumer;

#import <Foundation/Foundation.h>

#import "BWNodeInput.h"
#import "BWNodeOutput.h"
#import "BWPipelineStage.h"

@interface BWNodeConnection : NSObject <BWNodeOutputConsumer>

 {
    BWNodeInput *_input;
    BWNodeOutput *_output;
    BWPipelineStage *_pipelineStage;
    BOOL _stillImagePipelineStageInputHandlesMessages;
    os_unfair_lock_s _suspensionLock;
    BOOL _suspended;
    BOOL _resuming;
    BOOL _messageCachingEnabled;
    BOOL _resumedForEventsOnly;
    NSMutableArray *_messagesToPropagate;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) BWNodeInput *input;
@property (readonly) BWNodeOutput *output;
@property (readonly) BWPipelineStage *pipelineStage;
@property (readonly) Class superclass;
@property (nonatomic) BOOL wantsMessageCachingWhileSuspended; // ivar: _wantsMessageCachingWhileSuspended


+(void)initialize;
-(BOOL)attach;
-(BOOL)detach;
-(BOOL)resolveCommonBufferFormat;
-(id)initWithOutput:(id)arg0 input:(id)arg1 pipelineStage:(id)arg2 ;
-(void)consumeMessage:(id)arg0 fromOutput:(id)arg1 ;
-(void)dealloc;
-(void)resumeForEventsOnly:(BOOL)arg0 ;
-(void)suspendWithMessageCachingAllowed:(BOOL)arg0 ;


@end


#endif