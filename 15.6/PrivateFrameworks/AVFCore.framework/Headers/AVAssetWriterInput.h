// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVASSETWRITERINPUT_H
#define AVASSETWRITERINPUT_H

@class NSString, NSArray, NSDictionary;
@protocol AVWeakObservable, AVKeyPathDependencyHost;

#import <Foundation/Foundation.h>

#import "AVAssetWriterInputInternal.h"
#import "AVAssetWriterInputHelper.h"
#import "AVOutputSettings.h"
#import "AVWeakReference.h"

@interface AVAssetWriterInput : NSObject <AVWeakObservable, AVKeyPathDependencyHost>

 {
    AVAssetWriterInputInternal *_internal;
}


@property (nonatomic, getter=_alternateGroupID, setter=_setAlternateGroupID:) short alternateGroupID;
@property (readonly, nonatomic, getter=_isAttachedToAdaptor) BOOL attachedToAdaptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL expectsMediaDataInRealTime;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic, getter=_helper, setter=_setHelper:) AVAssetWriterInputHelper *helper;
@property (readonly, getter=_markAsFinishedCalled) BOOL markAsFinishedCalled;
@property (readonly, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSArray *metadata;
@property (readonly) NSInteger numberOfAppendFailures;
@property (readonly, nonatomic) NSDictionary *outputSettings;
@property (readonly, nonatomic, getter=_outputSettingsObject) AVOutputSettings *outputSettingsObject;
@property (readonly, nonatomic, getter=_pixelBufferPool) *__CVPixelBufferPool pixelBufferPool;
@property (nonatomic, getter=_provisionalAlternateGroupID, setter=_setProvisionalAlternateGroupID:) short provisionalAlternateGroupID;
@property (readonly, nonatomic, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;
@property (readonly, nonatomic) *opaqueCMFormatDescription sourceFormatHint;
@property (copy, nonatomic, getter=_sourcePixelBufferAttributes, setter=_setSourcePixelBufferAttributes:) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic, getter=_status) NSInteger status;
@property (readonly) Class superclass;
@property (readonly, nonatomic, getter=_trackReferences) NSDictionary *trackReferences;
@property (retain, nonatomic, getter=_weakReferenceToAssetWriter, setter=_setWeakReferenceToAssetWriter:) AVWeakReference *weakReferenceToAssetWriter;


+(id)assetWriterInputWithMediaType:(id)arg0 outputSettings:(id)arg1 ;
+(id)assetWriterInputWithMediaType:(id)arg0 outputSettings:(id)arg1 sourceFormatHint:(struct opaqueCMFormatDescription *)arg2 ;
+(void)initialize;
-(BOOL)_appendPixelBuffer:(struct __CVBuffer *)arg0 withPresentationTime:(struct ? )arg1 ;
-(BOOL)_prepareForWritingWithFigAssetWriter:(struct OpaqueFigAssetWriter *)arg0 mediaFileType:(id)arg1 error:(*id)arg2 ;
-(BOOL)_prepareToFinishWritingReturningError:(*id)arg0 ;
-(BOOL)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 ;
-(BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg0 type:(id)arg1 ;
-(BOOL)canPerformMultiplePasses;
-(BOOL)marksOutputTrackAsEnabled;
-(BOOL)maximizePowerEfficiency;
-(BOOL)performsMultiPassEncodingIfSupported;
-(BOOL)writesMediaDataToBeginningOfFile;
-(NSInteger)_appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
-(NSInteger)layer;
-(NSInteger)preferredMediaChunkAlignment;
-(NSInteger)preferredMediaChunkSize;
-(float)preferredVolume;
-(id)_attachedAdaptor;
-(id)associatedInputsWithTrackAssociationType:(id)arg0 ;
-(id)availableTrackAssociationTypes;
-(id)currentPassDescription;
-(id)extendedLanguageTag;
-(id)init;
-(id)initWithMediaType:(id)arg0 outputSettings:(id)arg1 ;
-(id)initWithMediaType:(id)arg0 outputSettings:(id)arg1 sourceFormatHint:(struct opaqueCMFormatDescription *)arg2 ;
-(id)languageCode;
-(id)mediaDataLocation;
-(id)sampleReferenceBaseURL;
-(int)mediaTimeScale;
-(int)outputTrackID;
-(struct ? )preferredMediaChunkDuration;
-(struct CGAffineTransform )transform;
-(struct CGSize )naturalSize;
-(void)_didStartInitialSession;
-(void)_prepareToEndSession;
-(void)_setAttachedAdaptor:(id)arg0 ;
-(void)_tellAssetWriterToTransitionToFailedStatusWithError:(id)arg0 ;
-(void)_transitionToTerminalStatus:(NSInteger)arg0 ;
-(void)addCallbackToCancelDuringDeallocation:(id)arg0 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg0 type:(id)arg1 ;
-(void)dealloc;
-(void)declareKeyPathDependenciesWithRegistry:(id)arg0 ;
-(void)markAsFinished;
-(void)markCurrentPassAsFinished;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg0 usingBlock:(id)arg1 ;
-(void)respondToEachPassDescriptionOnQueue:(id)arg0 usingBlock:(id)arg1 ;
-(void)setExtendedLanguageTag:(id)arg0 ;
-(void)setLanguageCode:(id)arg0 ;
-(void)setLayer:(NSInteger)arg0 ;
-(void)setMarksOutputTrackAsEnabled:(BOOL)arg0 ;
-(void)setMaximizePowerEfficiency:(BOOL)arg0 ;
-(void)setMediaDataLocation:(id)arg0 ;
-(void)setMediaTimeScale:(int)arg0 ;
-(void)setNaturalSize:(struct CGSize )arg0 ;
-(void)setPerformsMultiPassEncodingIfSupported:(BOOL)arg0 ;
-(void)setPreferredMediaChunkAlignment:(NSInteger)arg0 ;
-(void)setPreferredMediaChunkDuration:(struct ? )arg0 ;
-(void)setPreferredMediaChunkSize:(NSInteger)arg0 ;
-(void)setPreferredVolume:(float)arg0 ;
-(void)setSampleReferenceBaseURL:(id)arg0 ;
-(void)setTransform:(struct CGAffineTransform )arg0 ;
-(void)setWritesMediaDataToBeginningOfFile:(BOOL)arg0 ;
-(void)stopRequestingMediaData;


@end


#endif