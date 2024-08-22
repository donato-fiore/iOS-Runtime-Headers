// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVRCRAPPORTREMOTETEXTINPUTKEYBOARDIMPL_H
#define TVRCRAPPORTREMOTETEXTINPUTKEYBOARDIMPL_H

@class RTIInputSystemSourceSession, NSString;
@protocol RTIInputSystemSessionDelegate, RTIInputSystemPayloadDelegate, TVRXKeyboardImpl;

#import <Foundation/Foundation.h>

#import "TVRCRPCompanionLinkClientWrapper.h"
#import "TVRCKeyboardAttributes.h"
#import "TVRXKeyboardController.h"

@interface TVRCRapportRemoteTextInputKeyboardImpl : NSObject <RTIInputSystemSessionDelegate, RTIInputSystemPayloadDelegate, TVRXKeyboardImpl>



@property (retain, nonatomic) TVRCRPCompanionLinkClientWrapper *companionLinkWrapper; // ivar: _companionLinkWrapper
@property (retain, nonatomic) TVRCKeyboardAttributes *currentAttributes; // ivar: _currentAttributes
@property (retain, nonatomic) RTIInputSystemSourceSession *currentSession; // ivar: _currentSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editing; // ivar: _editing
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) TVRXKeyboardController *keyboardController; // ivar: _keyboardController
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