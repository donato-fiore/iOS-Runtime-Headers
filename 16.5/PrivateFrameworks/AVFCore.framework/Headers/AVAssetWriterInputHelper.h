// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVASSETWRITERINPUTHELPER_H
#define AVASSETWRITERINPUTHELPER_H

@class NSString, NSArray, NSURL, NSDictionary;

#import <Foundation/Foundation.h>

#import "AVAssetWriterInputConfigurationState.h"
#import "AVAssetWriterInputPassDescription.h"
#import "AVOutputSettings.h"
#import "AVWeakReference.h"

@interface AVAssetWriterInputHelper : NSObject

@property (nonatomic) short alternateGroupID;
@property (readonly, nonatomic) BOOL canPerformMultiplePasses;
@property (readonly, nonatomic) AVAssetWriterInputConfigurationState *configurationState; // ivar: _configurationState
@property (readonly, nonatomic) AVAssetWriterInputPassDescription *currentPassDescription;
@property (nonatomic) BOOL expectsMediaDataInRealTime;
@property (copy, nonatomic) NSString *extendedLanguageTag;
@property (copy, nonatomic) NSString *languageCode;
@property (nonatomic) NSInteger layer;
@property (nonatomic) BOOL marksOutputTrackAsEnabled;
@property (nonatomic) BOOL maximizePowerEfficiency;
@property (copy, nonatomic) NSString *mediaDataLocation;
@property (nonatomic) int mediaTimeScale;
@property (readonly, nonatomic) NSString *mediaType;
@property (copy, nonatomic) NSArray *metadata;
@property (nonatomic) CGSize naturalSize;
@property (readonly, nonatomic) AVOutputSettings *outputSettings;
@property (nonatomic) BOOL performsMultiPassEncodingIfSupported;
@property (readonly, nonatomic) *__CVPixelBufferPool pixelBufferPool;
@property (nonatomic) NSInteger preferredMediaChunkAlignment;
@property (nonatomic) ? preferredMediaChunkDuration;
@property (nonatomic) NSInteger preferredMediaChunkSize;
@property (nonatomic) float preferredVolume;
@property (nonatomic) short provisionalAlternateGroupID;
@property (readonly, nonatomic, getter=isReadyForMoreMediaData) BOOL readyForMoreMediaData;
@property (copy, nonatomic) NSURL *sampleReferenceBaseURL;
@property (readonly, nonatomic) BOOL shouldRespondToInitialPassDescription;
@property (readonly, nonatomic) *opaqueCMFormatDescription sourceFormatHint;
@property (copy, nonatomic) NSDictionary *sourcePixelBufferAttributes;
@property (readonly, nonatomic) NSInteger status;
@property (readonly, nonatomic) int trackID;
@property (readonly, nonatomic) NSDictionary *trackReferences;
@property (nonatomic) CGAffineTransform transform;
@property (retain) AVWeakReference *weakReferenceToAssetWriterInput; // ivar: _weakReferenceToAssetWriterInput


-(BOOL)appendPixelBuffer:(struct __CVBuffer *)arg0 withPresentationTime:(struct ? )arg1 ;
-(BOOL)canAddTrackAssociationWithTrackOfInput:(id)arg0 type:(id)arg1 ;
-(BOOL)canStartRespondingToEachPassDescriptionReturningReason:(*id)arg0 ;
-(BOOL)prepareToFinishWritingReturningError:(*id)arg0 ;
-(NSInteger)appendSampleBuffer:(struct opaqueCMSampleBuffer *)arg0 error:(*id)arg1 ;
-(id)associatedInputsWithTrackAssociationType:(id)arg0 ;
-(id)availableTrackAssociationTypes;
-(id)description;
-(id)initWithConfigurationState:(id)arg0 ;
-(id)transitionToAndReturnTerminalHelperWithTerminalStatus:(NSInteger)arg0 ;
-(void)addTrackAssociationWithTrackOfInput:(id)arg0 type:(id)arg1 ;
-(void)dealloc;
-(void)didStartInitialSession;
-(void)markAsFinished;
-(void)markCurrentPassAsFinished;
-(void)prepareToEndSession;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg0 usingBlock:(id)arg1 ;
-(void)stopRequestingMediaData;
-(void)transitionAssetWriterAndAllInputsToFailedStatusWithError:(id)arg0 ;


@end


#endif