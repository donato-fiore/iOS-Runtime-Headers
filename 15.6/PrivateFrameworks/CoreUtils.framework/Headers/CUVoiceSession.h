// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUVOICESESSION_H
#define CUVOICESESSION_H

@class NSMutableArray, VSSpeechSynthesizer, NSString;
@protocol VSSpeechSynthesizerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "CUVoiceRequest.h"

@interface CUVoiceSession : NSObject <VSSpeechSynthesizerDelegate>

 {
    CUVoiceRequest *_currentRequest;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    unsigned int _invalidateFlags;
    NSMutableArray *_requests;
    VSSpeechSynthesizer *_speechSynthesizer;
    *LogCategory _ucat;
    NSMutableArray *_voiceRequests;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // ivar: _dispatchQueue
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *label; // ivar: _label
@property (readonly) Class superclass;


-(id)init;
-(void)_completeAllRequestsWithError:(id)arg0 ;
-(void)_completeRequest:(id)arg0 error:(id)arg1 ;
-(void)_invalidate;
-(void)_invalidated;
-(void)_processQueuedRequests;
-(void)_speakText:(id)arg0 flags:(unsigned int)arg1 completion:(id)arg2 ;
-(void)dealloc;
-(void)invalidate;
-(void)invalidateWithFlags:(unsigned int)arg0 ;
-(void)speakText:(id)arg0 flags:(unsigned int)arg1 completion:(id)arg2 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingRequest:(id)arg1 successfully:(BOOL)arg2 phonemesSpoken:(id)arg3 withError:(id)arg4 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingRequest:(id)arg1 successfully:(BOOL)arg2 withError2:(id)arg3 ;
-(void)speechSynthesizer:(id)arg0 didStartSpeakingRequest:(id)arg1 ;
-(void)stopSpeaking;


@end


#endif