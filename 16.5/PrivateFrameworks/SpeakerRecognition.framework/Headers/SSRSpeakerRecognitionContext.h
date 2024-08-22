// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SSRSPEAKERRECOGNITIONCONTEXT_H
#define SSRSPEAKERRECOGNITIONCONTEXT_H

@class CSAsset, NSString, NSUUID, NSDictionary, NSURL, NSArray;

#import <Foundation/Foundation.h>

#import "SSRLoggingAggregator.h"

@interface SSRSpeakerRecognitionContext : NSObject

@property (readonly, nonatomic) NSUInteger activeChannel; // ivar: _activeChannel
@property (retain, nonatomic) CSAsset *asset; // ivar: _asset
@property (readonly, nonatomic) float combinationWeight; // ivar: _combinationWeight
@property (readonly, nonatomic) NSString *configVersion; // ivar: _configVersion
@property (readonly, nonatomic) NSString *debugUtteranceAudioFile; // ivar: _debugUtteranceAudioFile
@property (readonly, nonatomic) NSString *debugUtteranceMetaFile; // ivar: _debugUtteranceMetaFile
@property (retain, nonatomic) NSUUID *endpointUUID; // ivar: _endpointUUID
@property (readonly, nonatomic) NSDictionary *expModelsContext; // ivar: _expModelsContext
@property (retain, nonatomic) NSString *locale; // ivar: _locale
@property (retain, nonatomic) SSRLoggingAggregator *logAggregator; // ivar: _logAggregator
@property (readonly, nonatomic) NSUInteger maxAllowedAudioSamples; // ivar: _maxAllowedAudioSamples
@property (readonly, nonatomic) NSDictionary *modelsContext; // ivar: _modelsContext
@property (readonly, nonatomic) NSDictionary *numEnrollmentUtterances;
@property (readonly, nonatomic) BOOL osTransactionReqd; // ivar: _osTransactionReqd
@property (readonly, nonatomic) NSUInteger recognitionStyle; // ivar: _recognitionStyle
@property (readonly, nonatomic) NSURL *resourceFilePath; // ivar: _resourceFilePath
@property (readonly, nonatomic) NSUInteger scoreType; // ivar: _scoreType
@property (readonly, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (nonatomic) NSUInteger spIdType; // ivar: _spIdType
@property (readonly, nonatomic) NSURL *vadResourcePath; // ivar: _vadResourcePath
@property (retain, nonatomic) NSArray *voiceProfileArray; // ivar: _voiceProfileArray
@property (readonly, nonatomic) NSDictionary *vtEventInfo; // ivar: _vtEventInfo


-(BOOL)_checkIfModelsPresentForProfiles:(id)arg0 forSpIdType:(NSUInteger)arg1 forAsset:(id)arg2 ;
-(id)description;
-(id)initWithVoiceRecognitionContext:(id)arg0 error:(*id)arg1 ;
-(id)pickAssetForProfiles:(id)arg0 forSpIdType:(NSUInteger)arg1 ;
-(id)pickAssetForProfiles:(id)arg0 forSpIdType:(NSUInteger)arg1 withAssetArray:(id)arg2 ;
-(void)composeModelContextsForProfiles:(id)arg0 forSpIdType:(NSUInteger)arg1 forAsset:(id)arg2 completion:(id)arg3 ;
-(void)dealloc;


@end


#endif