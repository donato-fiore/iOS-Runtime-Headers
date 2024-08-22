// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETWRITER_H
#define AVASSETWRITER_H

@class NSArray, NSString, NSURL, NSError;
@protocol AVWeakObservable, AVKeyPathDependencyHost;

#import <Foundation/Foundation.h>

#import "AVAssetWriterInternal.h"
#import "AVAssetWriterHelper.h"

@interface AVAssetWriter : NSObject <AVWeakObservable, AVKeyPathDependencyHost>

 {
    AVAssetWriterInternal *_internal;
}


@property (readonly, nonatomic) NSArray *availableMediaTypes;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *directoryForTemporaryFiles;
@property (readonly) NSError *error;
@property (readonly) NSUInteger hash;
@property (readonly, retain, getter=_helper) AVAssetWriterHelper *helper;
@property (readonly, nonatomic) NSArray *inputs;
@property (copy, nonatomic) NSArray *metadata;
@property (readonly, copy, nonatomic) NSString *outputFileType;
@property (readonly, copy, nonatomic) NSURL *outputURL;
@property (nonatomic) BOOL shouldOptimizeForNetworkUse;
@property (readonly) NSInteger status;
@property (readonly) Class superclass;


+(BOOL)automaticallyNotifiesObserversForKey:(id)arg0 ;
+(id)_errorForOSStatus:(int)arg0 ;
+(id)assetWriterWithURL:(id)arg0 fileType:(id)arg1 error:(*id)arg2 ;
+(void)initialize;
-(BOOL)_initInternalObject;
-(BOOL)_supportsSampleReferencesReturningError:(*id)arg0 ;
-(BOOL)canAddInput:(id)arg0 ;
-(BOOL)canAddInputGroup:(id)arg0 ;
-(BOOL)canApplyOutputSettings:(id)arg0 forMediaType:(id)arg1 ;
-(BOOL)finishWriting;
-(BOOL)producesCombinableFragments;
-(BOOL)startWriting;
-(NSInteger)initialMovieFragmentSequenceNumber;
-(float)preferredRate;
-(float)preferredVolume;
-(id)delegate;
-(id)finishWritingDelegate;
-(id)init;
-(id)initWithContentType:(id)arg0 ;
-(id)initWithFileType:(id)arg0 error:(*id)arg1 ;
-(id)initWithURL:(id)arg0 fileType:(id)arg1 error:(*id)arg2 ;
-(id)inputGroups;
-(int)movieTimeScale;
-(struct ? )initialSegmentStartTime;
-(struct ? )movieFragmentInterval;
-(struct ? )overallDurationHint;
-(struct ? )preferredOutputSegmentInterval;
-(struct CGAffineTransform )preferredTransform;
-(void)_transitionToFailedStatusWithError:(id)arg0 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg0 ;
-(void)addInput:(id)arg0 ;
-(void)addInputGroup:(id)arg0 ;
-(void)cancelWriting;
-(void)dealloc;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg0 ;
-(void)endSessionAtSourceTime:(struct ? )arg0 ;
-(void)finishWritingWithCompletionHandler:(id)arg0 ;
-(void)flush;
-(void)flushSegment;
-(void)setDelegate:(id)arg0 ;
-(void)setFinishWritingDelegate:(id)arg0 ;
-(void)setInitialMovieFragmentSequenceNumber:(NSInteger)arg0 ;
-(void)setInitialSegmentStartTime:(struct ? )arg0 ;
-(void)setMovieFragmentInterval:(struct ? )arg0 ;
-(void)setMovieTimeScale:(int)arg0 ;
-(void)setOverallDurationHint:(struct ? )arg0 ;
-(void)setPreferredOutputSegmentInterval:(struct ? )arg0 ;
-(void)setPreferredRate:(float)arg0 ;
-(void)setPreferredTransform:(struct CGAffineTransform )arg0 ;
-(void)setPreferredVolume:(float)arg0 ;
-(void)setProducesCombinableFragments:(BOOL)arg0 ;
-(void)setWritesSinglePassUsingPredeterminedFileSize:(NSInteger)arg0 mediaDataSize:(NSInteger)arg1 ;
-(void)startSessionAtSourceTime:(struct ? )arg0 ;


@end


#endif