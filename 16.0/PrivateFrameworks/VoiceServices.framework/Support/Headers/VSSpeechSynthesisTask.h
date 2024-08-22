// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSSPEECHSYNTHESISTASK_H
#define VSSPEECHSYNTHESISTASK_H

@class NSString;
@protocol VSSpeechEagerProtocol;


#import "VSSpeechSpeakTask.h"

@interface VSSpeechSynthesisTask : VSSpeechSpeakTask <VSSpeechEagerProtocol>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL readyForEagerTask; // ivar: _readyForEagerTask
@property (retain, nonatomic) VSSpeechSpeakTask *speakTask; // ivar: _speakTask
@property (readonly) Class superclass;


-(BOOL)isSpeaking;
-(id)initWithRequest:(id)arg0 ;
-(void)main;
-(void)reportFinish;
-(void)reportInstrumentMetrics;
-(void)reportSpeechStart;
-(void)reportTimingInfo;
-(void)setObserverForWordTimings:(id)arg0 ;
-(void)synthesize;


@end


#endif