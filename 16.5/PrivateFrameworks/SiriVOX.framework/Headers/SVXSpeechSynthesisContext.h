// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSPEECHSYNTHESISCONTEXT_H
#define SVXSPEECHSYNTHESISCONTEXT_H

@class NSDictionary, VSInstrumentMetrics, NSString, VSPresynthesizedAudioRequest, VSSpeechRequest, NSArray;
@protocol SVXTaskTracking;

#import <Foundation/Foundation.h>

#import "SVXAudioSessionAssertion.h"
#import "SVXSpeechSynthesisRequest.h"

@interface SVXSpeechSynthesisContext : NSObject {
    id *_preparation;
    NSUInteger _audioChunkCount;
    id *_audioChunkHandler;
    id *_finalization;
}


@property (readonly, copy, nonatomic) NSDictionary *analyticsContext; // ivar: _analyticsContext
@property (retain, nonatomic) SVXAudioSessionAssertion *audioSessionAssertion; // ivar: _audioSessionAssertion
@property (readonly, nonatomic) unsigned int audioSessionID; // ivar: _audioSessionID
@property (readonly, nonatomic) NSInteger gender; // ivar: _gender
@property (nonatomic) BOOL handledPresynthesizedAudioRequest; // ivar: _handledPresynthesizedAudioRequest
@property (nonatomic) BOOL handledSpeechRequest; // ivar: _handledSpeechRequest
@property (retain, nonatomic) VSInstrumentMetrics *instrumentMetrics; // ivar: _instrumentMetrics
@property (nonatomic) BOOL isStreamingSynthesisRequest; // ivar: _isStreamingSynthesisRequest
@property (readonly, copy, nonatomic) NSString *languageCode; // ivar: _languageCode
@property (readonly, nonatomic) NSInteger operationType; // ivar: _operationType
@property (retain, nonatomic) VSPresynthesizedAudioRequest *presynthesizedAudioRequest; // ivar: _presynthesizedAudioRequest
@property (readonly, copy, nonatomic) SVXSpeechSynthesisRequest *request; // ivar: _request
@property (retain, nonatomic) VSSpeechRequest *speechRequest; // ivar: _speechRequest
@property (copy, nonatomic) NSArray *speechWordTimingInfoArray; // ivar: _speechWordTimingInfoArray
@property (readonly, nonatomic) NSObject<SVXTaskTracking> *taskTracker; // ivar: _taskTracker
@property (readonly, copy, nonatomic) NSString *voiceName; // ivar: _voiceName


-(id)description;
// -(id)initWithOperationType:(NSInteger)arg0 request:(id)arg1 languageCode:(id)arg2 voiceName:(id)arg3 gender:(NSInteger)arg4 audioSessionID:(unsigned int)arg5 preparation:(id)arg6 audioChunkHandler:(unk)arg7 finalization:(id)arg8 taskTracker:(unk)arg9 analyticsContext:(id)arg10  ;
-(void)dealloc;
-(void)finalizeWithResultType:(NSInteger)arg0 utteranceInfo:(id)arg1 error:(id)arg2 ;
-(void)handleAudioChunkData:(id)arg0 ;
-(void)prepare;


@end


#endif