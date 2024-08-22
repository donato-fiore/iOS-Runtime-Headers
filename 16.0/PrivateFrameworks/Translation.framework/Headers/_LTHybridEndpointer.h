// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTHYBRIDENDPOINTER_H
#define _LTHYBRIDENDPOINTER_H

@class _EAREndpointer, NSNumber, EARCaesuraSilencePosteriorGenerator, NSString, NSDictionary;
@protocol EARCaesuraSilencePosteriorGeneratorDelegate, _LTSpeechTranslationDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_LTTranslationContext.h"
#import "_LTHybridEndpointerAssetInfo.h"
#import "_LTServerEndpointerFeatures.h"

@interface _LTHybridEndpointer : NSObject <EARCaesuraSilencePosteriorGeneratorDelegate>

 {
    _LTTranslationContext *_context;
    _LTHybridEndpointerAssetInfo *_asset;
    _EAREndpointer *_sourceEndpointer;
    NSNumber *_sourceEndpointerThreshold;
    NSNumber *_sourceDisconnectedEndpointerThreshold;
    _LTServerEndpointerFeatures *_sourceEndpointerFeatures;
    _EAREndpointer *_targetEndpointer;
    NSNumber *_targetEndpointerThreshold;
    NSNumber *_targetDisconnectedEndpointerThreshold;
    _LTServerEndpointerFeatures *_targetEndpointerFeatures;
    EARCaesuraSilencePosteriorGenerator *_spg;
    id<_LTSpeechTranslationDelegate> *_delegate;
    BOOL _didEndpoint;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_featureQueue;
    NSUInteger _endpointerSignpostID;
}


@property (readonly, nonatomic) NSInteger audioBitDepth; // ivar: _audioBitDepth
@property (nonatomic) CGFloat clampedSFLatencyMsForClientLag; // ivar: _clampedSFLatencyMsForClientLag
@property (nonatomic) CGFloat clientLagThresholdMs; // ivar: _clientLagThresholdMs
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSDictionary *endpointerThreshold; // ivar: _endpointerThreshold
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInteger samplingRate; // ivar: _samplingRate
@property (readonly) Class superclass;
@property (nonatomic) BOOL useDefaultServerFeaturesOnClientLag; // ivar: _useDefaultServerFeaturesOnClientLag


-(BOOL)didEndpointWithFeatures:(id)arg0 silenceFeatures:(id)arg1 endpointer:(id)arg2 ;
-(id)init;
-(void)addSpeechAudioData:(id)arg0 ;
-(void)clientSilenceFeaturesAvailable:(id)arg0 ;
-(void)endAudio;
-(void)setServerEndpointerFeatures:(id)arg0 withLocale:(id)arg1 ;
-(void)startEndpointingWithContext:(id)arg0 delegate:(id)arg1 ;


@end


#endif