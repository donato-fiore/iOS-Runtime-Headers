// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef WFSPEAKTEXTACTIONOPERATION_H
#define WFSPEAKTEXTACTIONOPERATION_H

@class NSMutableArray, NSString, NSProgress;
@protocol WFActionExtendedOperation, WFSpeechSynthesizerDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "WFSpeechSynthesizer.h"

@interface WFSpeakTextActionOperation : NSObject <WFActionExtendedOperation, WFSpeechSynthesizerDelegate>



@property (readonly, nonatomic) NSMutableArray *completionHandlers; // ivar: _completionHandlers
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) NSProgress *progress; // ivar: _progress
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue
@property (readonly) Class superclass;
@property (readonly, nonatomic) WFSpeechSynthesizer *synthesizer; // ivar: _synthesizer


-(id)init;
-(void)addCompletionHandlerIfRunning:(id)arg0 ;
-(void)callCompletionHandlersWithError:(id)arg0 ;
-(void)cancel;
-(void)cleanupSpeechSynthesizer;
-(void)speakTextUsingSynthesizer:(id)arg0 voice:(id)arg1 rate:(float)arg2 pitch:(float)arg3 ;
-(void)speechSynthesizer:(id)arg0 didFailSpeakingUtterance:(id)arg1 error:(id)arg2 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingUtterance:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 willSpeakRangeOfUtterance:(struct _NSRange )arg1 utterance:(id)arg2 ;


@end


#endif