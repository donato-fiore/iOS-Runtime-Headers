// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTMFEVENTHANDLER_H
#define DTMFEVENTHANDLER_H

@class NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface DTMFEventHandler : NSObject {
    NSMutableArray *dtmfEventQueue;
    NSObject<OS_dispatch_queue> *dtmfQueue;
    int _currentEventState;
    BOOL currentEventNeedsEndBlock;
    NSUInteger currentEventRetransmitFinalPacketCount;
    unsigned char currentEvent;
    unsigned char currentVolume;
    unsigned int currentStartTimestamp;
    unsigned int currentDurationCounter;
    unsigned int currentEndTimestamp;
    unsigned int _currentPauseCompleteTimestamp;
}




-(BOOL)insertStartBlockWithEvent:(unsigned char)arg0 volume:(unsigned char)arg1 timestamp:(unsigned int)arg2 ;
-(BOOL)insertStopBlockWithEndTimestamp:(unsigned int)arg0 withPauseCompleteTimestamp:(unsigned int)arg1 ;
-(BOOL)shouldAdjustForLastPauseCompleteTimestamp:(*unsigned int)arg0 ;
-(BOOL)shouldTransmitDTMFWithTimestamp:(unsigned int)arg0 ;
-(id)init;
-(int)constructDTMFEventPacketWithEvent:(unsigned char)arg0 volume:(unsigned char)arg1 durationCounter:(unsigned int)arg2 interval:(unsigned int)arg3 dataBuffer:(char *)arg4 isEnd:(BOOL)arg5 ;
-(void)dealloc;
-(void)sendDTMFEvent:(id)arg0 atTimestamp:(unsigned int)arg1 withSampleRate:(unsigned int)arg2 ;
-(void)sendingDTMFEventWithTimeStamp:(unsigned int)arg0 interval:(unsigned int)arg1 RTPHandle:(struct tagHANDLE *)arg2 ;
-(void)stopDTMFEventAtTimestamp:(unsigned int)arg0 withSampleRate:(unsigned int)arg1 ;


@end


#endif