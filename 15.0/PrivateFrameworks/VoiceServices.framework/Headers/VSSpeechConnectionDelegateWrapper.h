// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSSPEECHCONNECTIONDELEGATEWRAPPER_H
#define VSSPEECHCONNECTIONDELEGATEWRAPPER_H

@class NSMutableArray, NSMutableDictionary, NSString;
@protocol VSSpeechServiceDelegate, VSSpeechConnectionDelegate;

#import <Foundation/Foundation.h>

#import "VSSpeechConnection.h"
#import "VSPresynthesizedAudioRequest.h"
#import "VSSpeechRequest.h"

@interface VSSpeechConnectionDelegateWrapper : NSObject <VSSpeechServiceDelegate>



@property (retain, nonatomic) NSMutableArray *audioRequests; // ivar: _audioRequests
@property (retain, nonatomic) NSMutableDictionary *concurrentSynthesisRequests; // ivar: _concurrentSynthesisRequests
@property (weak, nonatomic) VSSpeechConnection *connection; // ivar: _connection
@property (retain, nonatomic) VSPresynthesizedAudioRequest *currentAudioRequest; // ivar: _currentAudioRequest
@property (retain, nonatomic) VSSpeechRequest *currentRequest; // ivar: _currentRequest
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<VSSpeechConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) NSMutableArray *requests; // ivar: _requests
@property (readonly) Class superclass;


-(id)getLocalAudioRequest:(id)arg0 ;
-(id)getLocalRequest:(id)arg0 ;
-(id)init;
-(void)audioRequest:(id)arg0 didReportInstrumentMetrics:(id)arg1 error:(id)arg2 ;
-(void)audioRequest:(id)arg0 didStopAtEnd:(BOOL)arg1 error:(id)arg2 ;
-(void)audioRequestDidStart:(id)arg0 ;
-(void)speechRequest:(id)arg0 didReceiveTimingInfo:(id)arg1 ;
-(void)speechRequest:(id)arg0 didReportInstrumentMetrics:(id)arg1 ;
-(void)speechRequest:(id)arg0 didStartWithMark:(NSInteger)arg1 forRange:(struct _NSRange )arg2 ;
-(void)speechRequest:(id)arg0 didStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 error:(id)arg3 ;
-(void)speechRequestDidContinue:(id)arg0 ;
-(void)speechRequestDidPause:(id)arg0 ;
-(void)speechRequestDidStart:(id)arg0 ;
-(void)synthesisRequest:(id)arg0 didFinishWithInstrumentMetrics:(id)arg1 error:(id)arg2 ;
-(void)synthesisRequest:(id)arg0 didGenerateAudioChunk:(id)arg1 ;
-(void)synthesisRequest:(id)arg0 didReceiveTimingInfo:(id)arg1 ;


@end


#endif