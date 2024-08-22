// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVSAMPLEBUFFERAUDIORENDERERINTERNAL_H
#define AVSAMPLEBUFFERAUDIORENDERERINTERNAL_H

@class NSString, NSError;

#import <Foundation/Foundation.h>

#import "AVScheduledAudioParameters.h"
#import "AVWeakReference.h"
#import "AVOutputContext.h"

@interface AVSampleBufferAudioRendererInternal : NSObject {
    NSString *audioOutputDeviceUniqueID;
    NSString *audioTimePitchAlgorithm;
    NSUInteger allowedAudioSpatializationFormats;
    *opaqueMTAudioProcessingTap audioProcessingTap;
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
    *OpaqueFigSampleBufferAudioRenderer figAudioRenderer;
    AVOutputContext *outputContext;
}






@end


#endif