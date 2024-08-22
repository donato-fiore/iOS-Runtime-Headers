// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TITYPINGSESSIONLOGGER_H
#define TITYPINGSESSIONLOGGER_H

@class NSString, NSArray;
@protocol NSSecureCoding, TIKeyboardInteractionProtocol;

#import <Foundation/Foundation.h>


@interface TITypingSessionLogger : NSObject <NSSecureCoding, TIKeyboardInteractionProtocol>

 {
    id<TIKeyboardInteractionProtocol> *_typingSession;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger eventCount;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly) NSArray *typingEvents; // ivar: _typingEvents


+(BOOL)supportsSecureCoding;
-(BOOL)shouldPrintEvent:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithTypingSession:(id)arg0 ;
-(id)logDetailsForKeyboardState:(id)arg0 ;
-(id)typingSession;
-(void)acceptingCandidateWithTrigger:(id)arg0 ;
-(void)addDrawInputWithSyllableCount:(NSUInteger)arg0 keyboardState:(id)arg1 ;
-(void)addKeyInput:(id)arg0 keyboardState:(id)arg1 ;
-(void)addTouchEvent:(id)arg0 ;
-(void)candidateAccepted:(id)arg0 withInput:(id)arg1 documentState:(id)arg2 inputContext:(id)arg3 inputStem:(id)arg4 predictionBarHit:(BOOL)arg5 useCandidateSelection:(BOOL)arg6 candidateIndex:(NSInteger)arg7 keyboardState:(id)arg8 ;
-(void)candidatesOffered:(id)arg0 keyboardState:(id)arg1 ;
-(void)changingContextWithTrigger:(id)arg0 ;
-(void)contextDidChange:(id)arg0 wordDelete:(BOOL)arg1 cursorMoved:(BOOL)arg2 extendsPriorWord:(BOOL)arg3 inWord:(id)arg4 range:(struct _NSRange )arg5 selectionLocation:(NSUInteger)arg6 keyboardState:(id)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)layoutDidChange:(id)arg0 keyboardState:(id)arg1 ;
-(void)sendTo:(id)arg0 ;
-(void)setClientID:(id)arg0 keyboardState:(id)arg1 ;


@end


#endif