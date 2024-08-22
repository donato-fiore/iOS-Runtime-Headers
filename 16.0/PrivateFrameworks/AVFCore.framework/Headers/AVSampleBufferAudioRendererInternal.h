// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVSAMPLEBUFFERAUDIORENDERERINTERNAL_H
#define AVSAMPLEBUFFERAUDIORENDERERINTERNAL_H

@class NSString, AVAudioSession, NSError;

#import <Foundation/Foundation.h>

#import "AVScheduledAudioParameters.h"
#import "AVWeakReference.h"
#import "AVContentKeySession.h"
#import "AVOutputContext.h"

@interface AVSampleBufferAudioRendererInternal : NSObject {
    NSString *audioOutputDeviceUniqueID;
    NSString *audioTimePitchAlgorithm;
    NSUInteger allowedAudioSpatializationFormats;
    *opaqueMTAudioProcessingTap audioProcessingTap;
    AVAudioSession *audioSession;
    ? mediaDataRequester;
    float rate;
    float volume;
    BOOL muted;
    AVScheduledAudioParameters *scheduledAudioParameters;
    *OpaqueCMTimebase readOnlyControlTimebase;
    AVWeakReference *weakReferenceToSynchronizer;
    AVWeakReference *weakReferenceToSelf;
    NSInteger status;
    NSError *error;
    AVContentKeySession *weakContentKeySession;
    *opaqueCMFormatDescription lastFormatDescription;
    *OpaqueFigCPECryptor lastCryptor;
    *OpaqueFigSampleBufferAudioRenderer figAudioRenderer;
    AVOutputContext *outputContext;
}






@end


#endif