// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SACALLTREESTATE_H
#define SACALLTREESTATE_H

@class NSString;
@protocol SAJSONSerialization;


#import "SACallTreeNode.h"
#import "SATimestamp.h"
#import "SAWaitInfo.h"
#import "SATurnstileInfo.h"

@interface SACallTreeState : SACallTreeNode <SAJSONSerialization>

 {
    unsigned char _threadPriority;
    int _pid;
    unsigned int _microstackshotState;
    SATimestamp *_startTimestamp;
    NSUInteger _threadId;
    SAWaitInfo *_waitInfo;
    SATurnstileInfo *_turnstileInfo;
    NSUInteger _state;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithWaitInfo:(id)arg0 turnstileInfo:(id)arg1 state:(NSUInteger)arg2 microstackshotState:(unsigned int)arg3 pid:(int)arg4 threadId:(NSUInteger)arg5 threadPriority:(unsigned char)arg6 startSampleIndex:(NSUInteger)arg7 startTimestamp:(id)arg8 sampleCount:(NSUInteger)arg9 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg0 ;


@end


#endif