// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTKPTRIGGERTIME_H
#define DTKPTRIGGERTIME_H



#import "DTKPTrigger.h"

@interface DTKPTriggerTime : DTKPTrigger

@property (nonatomic) BOOL profileEveryThread; // ivar: _profileEveryThread
@property (nonatomic) NSUInteger sampleRate; // ivar: _sampleRate
@property (readonly, nonatomic) unsigned int timerID; // ivar: _timerID


+(int)reinitializeKperf:(*id)arg0 ;
-(NSUInteger)_recordConfigWordsIntoBuffer:(*NSUInteger)arg0 ;
-(NSUInteger)triggerKind;
-(id)initWithCounterAllocatorProvider:(id)arg0 ;
-(int)_configureTimer:(unsigned int)arg0 actionID:(unsigned int)arg1 period:(NSUInteger)arg2 userData:(unsigned int)arg3 ;
-(int)start:(*id)arg0 ;
-(int)stop:(*id)arg0 ;
-(void)_timerIDDdealloc:(unsigned int)arg0 ;
-(void)dealloc;


@end


#endif