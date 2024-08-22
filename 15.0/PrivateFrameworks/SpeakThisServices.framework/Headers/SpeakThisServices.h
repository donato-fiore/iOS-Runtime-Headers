// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SPEAKTHISSERVICES_H
#define SPEAKTHISSERVICES_H

@class AXUIClient, NSString;
@protocol AXUIClientDelegate;

#import <Foundation/Foundation.h>


@interface SpeakThisServices : NSObject <AXUIClientDelegate>

 {
    AXUIClient *_client;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) id *errorHandlerFromPriorShowControllerAttempt; // ivar: _errorHandlerFromPriorShowControllerAttempt
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL springBoardReady; // ivar: _springBoardReady
@property (readonly) Class superclass;
@property (nonatomic) BOOL triedToShowSpeechControllerBeforeSBReady; // ivar: _triedToShowSpeechControllerBeforeSBReady


+(id)sharedInstance;
+(id)speakThisMessageKeyKBFrame;
-(id)_client;
-(id)_clientIdentifier;
-(id)_descriptionForErrorCode:(NSInteger)arg0 ;
-(id)_descriptionForMessageIdentifier:(NSUInteger)arg0 ;
-(id)init;
-(id)userInterfaceClient:(id)arg0 processMessageFromServer:(id)arg1 withIdentifier:(NSUInteger)arg2 error:(*id)arg3 ;
-(void)_checkSpringBoardStarted;
-(void)_sendMessage:(id)arg0 withIdentifier:(NSUInteger)arg1 errorHandler:(id)arg2 ;
-(void)_sendMessageWithIdentifier:(NSUInteger)arg0 errorHandler:(id)arg1 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg0 ;
-(void)didCancelSpeakThisErrorHandler:(id)arg0 ;
-(void)fastForward:(id)arg0 ;
-(void)hideSpeechController:(id)arg0 ;
-(void)keyboardFrameWillUpdate:(id)arg0 errorHandler:(id)arg1 ;
-(void)pauseSpeaking:(id)arg0 ;
-(void)resumeSpeaking:(id)arg0 ;
-(void)rewind:(id)arg0 ;
-(void)showSpeechController:(id)arg0 ;
-(void)speakFaster:(id)arg0 ;
-(void)speakSlower:(id)arg0 ;
-(void)speakThisWithOptions:(NSInteger)arg0 errorHandler:(id)arg1 ;
-(void)speakThisWithOptions:(NSInteger)arg0 forAppWithBundleID:(id)arg1 errorHandler:(id)arg2 ;
-(void)speakThisWithOptions:(NSInteger)arg0 forSceneID:(id)arg1 errorHandler:(id)arg2 ;
-(void)speakThisWithOptions:(NSInteger)arg0 useAppAtPoint:(struct CGPoint )arg1 errorHandler:(id)arg2 ;
-(void)toggleSpeaking:(id)arg0 ;
-(void)updateSpeakingRateTo:(NSInteger)arg0 errorHandler:(id)arg1 ;


@end


#endif