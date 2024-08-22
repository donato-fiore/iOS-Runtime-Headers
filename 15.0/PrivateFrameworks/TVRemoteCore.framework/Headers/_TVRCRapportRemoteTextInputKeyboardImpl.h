// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCRAPPORTREMOTETEXTINPUTKEYBOARDIMPL_H
#define _TVRCRAPPORTREMOTETEXTINPUTKEYBOARDIMPL_H

@class RTIInputSystemSourceSession, NSString;
@protocol RTIInputSystemSessionDelegate, RTIInputSystemPayloadDelegate, _TVRXKeyboardImpl;

#import <Foundation/Foundation.h>

#import "_TVRCRPCompanionLinkClientWrapper.h"
#import "TVRCKeyboardAttributes.h"
#import "_TVRXKeyboardController.h"

@interface _TVRCRapportRemoteTextInputKeyboardImpl : NSObject <RTIInputSystemSessionDelegate, RTIInputSystemPayloadDelegate, _TVRXKeyboardImpl>



@property (retain, nonatomic) _TVRCRPCompanionLinkClientWrapper *companionLinkWrapper; // ivar: _companionLinkWrapper
@property (retain, nonatomic) TVRCKeyboardAttributes *currentAttributes; // ivar: _currentAttributes
@property (retain, nonatomic) RTIInputSystemSourceSession *currentSession; // ivar: _currentSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editing; // ivar: _editing
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) _TVRXKeyboardController *keyboardController; // ivar: _keyboardController
@property (readonly) Class superclass;


-(BOOL)isEditing;
-(id)attributes;
-(id)text;
-(void)_receivedInputSourceSession:(id)arg0 ;
-(void)_stopObservingTelevisionEditingSession;
-(void)handleTextActionPayload:(id)arg0 ;
-(void)inputSessionDidBegin:(id)arg0 ;
-(void)inputSessionDidDie:(id)arg0 ;
-(void)inputSessionDidEnd:(id)arg0 ;
-(void)sendReturnKey;
-(void)setText:(id)arg0 ;
-(void)setTextActionPayload:(id)arg0 ;


@end


#endif