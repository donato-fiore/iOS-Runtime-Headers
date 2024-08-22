// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC14SIRITTSSERVICE14AVSBARPLAYBACK_H
#define _TTC14SIRITTSSERVICE14AVSBARPLAYBACK_H

@class SwiftObject;



@interface _TtC14SiriTTSService14AVSBARPlayback : SwiftObject {
    ? error;
    ? audioQueueBufferLock;
    ? renderer;
    ? synchronizer;
    ? dataQueue;
    ? stateLock;
    ? mappedAudioQueuedTimeStamp;
    ? rendererEnqueuedAudioDuration;
    ? mappedData;
    ? enqueuedMappedAudioInfo;
    ? startedProvidingData;
    ? noRemainTasks;
    ? asbd;
    ? discontinuedDuringPlayback;
    ? audioPowerProvider;
}




-(void)handleMediaServerReset;


@end


#endif