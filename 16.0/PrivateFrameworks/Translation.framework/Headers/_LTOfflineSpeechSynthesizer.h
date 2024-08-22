// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _LTOFFLINESPEECHSYNTHESIZER_H
#define _LTOFFLINESPEECHSYNTHESIZER_H

@class NSString;
@protocol VSSpeechSynthesizerDelegate;

#import <Foundation/Foundation.h>


@interface _LTOfflineSpeechSynthesizer : NSObject <VSSpeechSynthesizerDelegate>

 {
    id *_completion;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(NSInteger)preferredVoiceGender;
+(void)initialize;
-(id)initWithCompletion:(id)arg0 ;
-(void)cancel;
-(void)speak:(id)arg0 withContext:(id)arg1 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingRequest:(id)arg1 successfully:(BOOL)arg2 phonemesSpoken:(id)arg3 withError:(id)arg4 ;
-(void)speechSynthesizer:(id)arg0 didFinishSpeakingRequest:(id)arg1 withInstrumentMetrics:(id)arg2 ;
-(void)speechSynthesizer:(id)arg0 willSpeakRangeOfSpeechString:(struct _NSRange )arg1 forRequest:(id)arg2 ;


@end


#endif