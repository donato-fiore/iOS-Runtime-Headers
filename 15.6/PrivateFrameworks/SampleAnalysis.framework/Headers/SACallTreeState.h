// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SACALLTREESTATE_H
#define SACALLTREESTATE_H

@class NSMutableArray, NSString;
@protocol SAJSONSerialization;


#import "SACallTreeNode.h"
#import "SAWaitInfo.h"
#import "SATurnstileInfo.h"

@interface SACallTreeState : SACallTreeNode <SAJSONSerialization>

 {
    unsigned char _threadPriority;
    int _pid;
    unsigned int _microstackshotState;
    NSUInteger _threadId;
    SAWaitInfo *_waitInfo;
    SATurnstileInfo *_turnstileInfo;
    NSUInteger _state;
    NSMutableArray *_timeRanges;
    NSUInteger _endSampleIndex;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)initWithWaitInfo:(id)arg0 turnstileInfo:(id)arg1 state:(NSUInteger)arg2 microstackshotState:(unsigned int)arg3 pid:(int)arg4 threadId:(NSUInteger)arg5 threadPriority:(unsigned char)arg6 timeRange:(id)arg7 startSampleIndex:(NSUInteger)arg8 sampleCount:(NSUInteger)arg9 ;
-(void)writeJSONDictionaryEntriesToStream:(id)arg0 ;


@end


#endif