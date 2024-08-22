// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETWRITERCONFIGURATIONSTATE_H
#define AVASSETWRITERCONFIGURATIONSTATE_H

@class NSURL, NSArray, NSString;
@protocol AVAssetWriterDelegate;

#import <Foundation/Foundation.h>

#import "AVMediaFileType.h"

@interface AVAssetWriterConfigurationState : NSObject

@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (weak) NSObject<AVAssetWriterDelegate> *delegate; // ivar: _delegate
@property (copy, nonatomic) NSURL *directoryForTemporaryFiles; // ivar: _directoryForTemporaryFiles
@property (nonatomic) NSInteger initialMovieFragmentSequenceNumber; // ivar: _initialMovieFragmentSequenceNumber
@property (nonatomic) ? initialSegmentStartTime; // ivar: _initialSegmentStartTime
@property (copy, nonatomic) NSArray *inputGroups; // ivar: _inputGroups
@property (copy, nonatomic) NSArray *inputs; // ivar: _inputs
@property (copy, nonatomic) AVMediaFileType *mediaFileType; // ivar: _mediaFileType
@property (copy, nonatomic) NSArray *metadataItems; // ivar: _metadataItems
@property (nonatomic) ? movieFragmentInterval; // ivar: _movieFragmentInterval
@property (nonatomic) int movieTimeScale; // ivar: _movieTimeScale
@property (copy, nonatomic) NSString *outputFileTypeProfile; // ivar: _outputFileTypeProfile
@property (nonatomic) ? overallDurationHint; // ivar: _overallDurationHint
@property (nonatomic) ? preferredOutputSegmentInterval; // ivar: _preferredOutputSegmentInterval
@property (nonatomic) float preferredRate; // ivar: _preferredRate
@property (nonatomic) CGAffineTransform preferredTransform; // ivar: _preferredTransform
@property (nonatomic) float preferredVolume; // ivar: _preferredVolume
@property (nonatomic) BOOL producesCombinableFragments; // ivar: _producesCombinableFragments
@property (nonatomic) BOOL requiresInProcessOperation; // ivar: _requiresInProcessOperation
@property (nonatomic) BOOL shouldOptimizeForNetworkUse; // ivar: _shouldOptimizeForNetworkUse
@property (nonatomic) NSInteger singlePassFileSize; // ivar: _singlePassFileSize
@property (nonatomic) NSInteger singlePassMediaDataSize; // ivar: _singlePassMediaDataSize
@property (nonatomic) BOOL usesVirtualCaptureCard; // ivar: _usesVirtualCaptureCard


-(void)dealloc;


@end


#endif