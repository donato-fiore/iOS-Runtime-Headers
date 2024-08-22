// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVASSETWRITERHELPER_H
#define AVASSETWRITERHELPER_H

@class NSArray, NSURL, NSError, NSString;
@protocol AVAssetWriterDelegate;

#import <Foundation/Foundation.h>

#import "AVAssetWriterConfigurationState.h"
#import "AVMediaFileType.h"
#import "AVWeakReference.h"

@interface AVAssetWriterHelper : NSObject

@property (readonly, nonatomic) NSArray *availableMediaTypes;
@property (readonly, nonatomic) AVAssetWriterConfigurationState *configurationState; // ivar: _configurationState
@property (weak) NSObject<AVAssetWriterDelegate> *delegate;
@property (copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property (readonly, nonatomic) NSError *error;
@property (nonatomic) NSInteger initialMovieFragmentSequenceNumber;
@property (nonatomic) ? initialSegmentStartTime;
@property (readonly, nonatomic) NSArray *inputGroups;
@property (readonly, nonatomic) NSArray *inputs;
@property (readonly, nonatomic) AVMediaFileType *mediaFileType;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) ? movieFragmentInterval;
@property (nonatomic) int movieTimeScale;
@property (copy, nonatomic) NSString *outputFileTypeProfile;
@property (readonly, nonatomic) NSURL *outputURL;
@property (nonatomic) ? overallDurationHint;
@property (nonatomic) ? preferredOutputSegmentInterval;
@property (nonatomic) float preferredRate;
@property (nonatomic) CGAffineTransform preferredTransform;
@property (nonatomic) float preferredVolume;
@property (nonatomic) BOOL producesCombinableFragments;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (nonatomic) NSInteger singlePassFileSize;
@property (nonatomic) NSInteger singlePassMediaDataSize;
@property (readonly, nonatomic) NSInteger status;
@property (retain) AVWeakReference *weakReferenceToAssetWriter; // ivar: _weakReferenceToAssetWriter


-(BOOL)_canApplyOutputSettings:(id)arg0 forMediaType:(id)arg1 sourceFormat:(struct opaqueCMFormatDescription *)arg2 exceptionReason:(*id)arg3 ;
-(BOOL)_canApplyTrackReferences:(id)arg0 exceptionReason:(*id)arg1 ;
-(BOOL)_transitionToClientInitiatedTerminalStatus:(NSInteger)arg0 ;
-(BOOL)canAddInput:(id)arg0 ;
-(BOOL)canAddInputGroup:(id)arg0 ;
-(BOOL)canApplyOutputSettings:(id)arg0 forMediaType:(id)arg1 ;
-(id)init;
-(id)initWithConfigurationState:(id)arg0 ;
-(void)addInput:(id)arg0 ;
-(void)addInputGroup:(id)arg0 ;
-(void)cancelWriting;
-(void)dealloc;
-(void)endSessionAtSourceTime:(struct ? )arg0 ;
-(void)finishWriting;
-(void)finishWritingWithCompletionHandler:(id)arg0 ;
-(void)flush;
-(void)flushSegment;
-(void)startSessionAtSourceTime:(struct ? )arg0 ;
-(void)startWriting;
-(void)transitionToFailedStatusWithError:(id)arg0 ;


@end


#endif