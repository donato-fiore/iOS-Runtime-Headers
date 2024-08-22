// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTTRANSLATIONSESSION_H
#define _LTTRANSLATIONSESSION_H

@class NSMutableDictionary, NSString, NSURL;
@protocol _LTSpeechTranslationDelegate, _LTTextTranslationService, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "_LTSafariLatencyLoggingRequest.h"
#import "_LTRateLimiter.h"
#import "_LTTranslator.h"

@interface _LTTranslationSession : NSObject <_LTSpeechTranslationDelegate>

 {
    NSMutableDictionary *_outstandingRequests;
    _LTSafariLatencyLoggingRequest *_logging;
    NSString *_sessionID;
    BOOL _waitingForService;
}


@property (copy, nonatomic) NSURL *URL; // ivar: _URL
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSString *logIdentifier; // ivar: _logIdentifier
@property (retain, nonatomic) _LTRateLimiter *rateLimiter; // ivar: _rateLimiter
@property (retain, nonatomic) NSObject<_LTTextTranslationService> *service; // ivar: _service
@property (readonly) Class superclass;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *translationQueue; // ivar: _translationQueue
@property (retain, nonatomic) _LTTranslator *translator; // ivar: _translator


-(id)initForFutureService;
-(id)initWithTranslator:(id)arg0 ;
-(void)_commonInit;
// -(void)_ensureServiceConnection:(id)arg0 useDedicatedTextMachPort:(unk)arg1  ;
-(void)markFirstParagraphComplete;
-(void)markPageComplete;
-(void)markPageLoaded;
-(void)markProgressDone;
-(void)paragraphTranslation:(id)arg0 result:(id)arg1 error:(id)arg2 ;
-(void)prepareWithService:(id)arg0 ;
-(void)provideFeedback:(id)arg0 ;
-(void)translate:(id)arg0 ;
-(void)translate:(id)arg0 useDedicatedTextMachPort:(BOOL)arg1 ;


@end


#endif