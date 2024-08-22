// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETREADERTRACKOUTPUTINTERNAL_H
#define AVASSETREADERTRACKOUTPUTINTERNAL_H

@class NSString;

#import <Foundation/Foundation.h>

#import "AVAssetTrack.h"
#import "AVOutputSettings.h"
#import "AVWeakReference.h"

@interface AVAssetReaderTrackOutputInternal : NSObject {
    AVAssetTrack *track;
    AVOutputSettings *outputSettings;
    NSString *audioTimePitchAlgorithm;
    BOOL appliesPreferredTrackTransform;
    AVWeakReference *weakReferenceToAttachedAdaptor;
}






@end


#endif