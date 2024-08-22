// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TTSSPEECHREQUESTOWNER_H
#define TTSSPEECHREQUESTOWNER_H

@class NSString;
@protocol TTSSpeechRequestDelegate, TTSSpeechConnectionDelegate, TTSSpeechService;

#import <Foundation/Foundation.h>

#import "TTSSpeechRequest.h"

@interface TTSSpeechRequestOwner : NSObject <TTSSpeechRequestDelegate>



@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<TTSSpeechConnectionDelegate> *delegate; // ivar: _delegate
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) TTSSpeechRequest *request; // ivar: _request
@property (weak, nonatomic) NSObject<TTSSpeechService> *speechService; // ivar: _speechService
@property (readonly) Class superclass;


-(BOOL)isSystemSpeakingOnBehalfOfCurrentConnection;
-(id)availableVoicesForLanguageCode:(id)arg0 queryingMobileAssets:(BOOL)arg1 ;
-(id)init;
-(id)initWithSpeechService:(id)arg0 ;
-(void)continueCurrentSpeechRequest;
-(void)dealloc;
-(void)pauseCurrentSpeechRequestAtMark:(NSInteger)arg0 waitUntilPaused:(BOOL)arg1 ;
-(void)speechRequest:(id)arg0 didStopWithSuccess:(BOOL)arg1 phonemesSpoken:(id)arg2 forService:(id)arg3 error:(id)arg4 ;
-(void)speechRequest:(id)arg0 didSynthesizeSilentlyToURL:(id)arg1 ;
-(void)speechRequest:(id)arg0 withMark:(NSInteger)arg1 didStartForRange:(struct _NSRange )arg2 forService:(id)arg3 ;
-(void)speechRequestDidContinue:(id)arg0 forService:(id)arg1 ;
-(void)speechRequestDidPause:(id)arg0 forService:(id)arg1 ;
-(void)speechRequestDidStart:(id)arg0 forService:(id)arg1 ;
-(void)startSpeechRequest:(id)arg0 ;
-(void)stopCurrentSpeechRequestAtMark:(NSInteger)arg0 waitUntilStopped:(BOOL)arg1 ;


@end


#endif