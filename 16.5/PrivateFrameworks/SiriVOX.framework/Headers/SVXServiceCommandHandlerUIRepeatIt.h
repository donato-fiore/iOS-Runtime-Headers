// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SVXSERVICECOMMANDHANDLERUIREPEATIT_H
#define SVXSERVICECOMMANDHANDLERUIREPEATIT_H

@class NSString;
@protocol SVXSpeechSynthesisListening, SVXServiceCommandHandling, SVXPerforming;

#import <Foundation/Foundation.h>

#import "SVXSpeechSynthesizer.h"
#import "SVXSpeechSynthesisRequest.h"

@interface SVXServiceCommandHandlerUIRepeatIt : NSObject <SVXSpeechSynthesisListening, SVXServiceCommandHandling>

 {
    SVXSpeechSynthesizer *_speechSynthesizer;
    id<SVXPerforming> *_performer;
    SVXSpeechSynthesisRequest *_lastStartedRequest;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly) Class superclass;


+(Class)supportedCommandClass;
-(BOOL)isCommandUUFR:(id)arg0 ;
-(BOOL)shouldDependOnCommand:(id)arg0 ;
-(id)initWithSpeechSynthesizer:(id)arg0 performer:(id)arg1 ;
-(void)handleCommand:(id)arg0 withContext:(id)arg1 taskTracker:(id)arg2 completion:(id)arg3 ;
-(void)speechSynthesizerDidBecomeBusy;
-(void)speechSynthesizerDidBecomeIdle;
-(void)speechSynthesizerDidCancelRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)speechSynthesizerDidFailRequest:(id)arg0 taskTracker:(id)arg1 error:(id)arg2 ;
-(void)speechSynthesizerDidFinishRequest:(id)arg0 utteranceInfo:(id)arg1 record:(id)arg2 taskTracker:(id)arg3 ;
-(void)speechSynthesizerDidInterruptRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)speechSynthesizerDidStartRequest:(id)arg0 record:(id)arg1 taskTracker:(id)arg2 ;
-(void)speechSynthesizerWillEnqueueRequest:(id)arg0 taskTracker:(id)arg1 ;
-(void)speechSynthesizerWillStartRequest:(id)arg0 taskTracker:(id)arg1 ;


@end


#endif