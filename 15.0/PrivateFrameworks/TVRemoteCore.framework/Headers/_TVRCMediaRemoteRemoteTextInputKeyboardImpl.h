// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCMEDIAREMOTEREMOTETEXTINPUTKEYBOARDIMPL_H
#define _TVRCMEDIAREMOTEREMOTETEXTINPUTKEYBOARDIMPL_H

@class RTIInputSystemSourceSession, NSString, NSDate;
@protocol RTIInputSystemSessionDelegate, RTIInputSystemPayloadDelegate, _TVRXKeyboardImpl;

#import <Foundation/Foundation.h>

#import "TVRCKeyboardAttributes.h"
#import "_TVRXKeyboardController.h"
#import "_TVRCMRTelevisionWrapper.h"

@interface _TVRCMediaRemoteRemoteTextInputKeyboardImpl : NSObject <RTIInputSystemSessionDelegate, RTIInputSystemPayloadDelegate, _TVRXKeyboardImpl>



@property (retain, nonatomic) TVRCKeyboardAttributes *currentAttributes; // ivar: _currentAttributes
@property (retain, nonatomic) RTIInputSystemSourceSession *currentSession; // ivar: _currentSession
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL editing; // ivar: _editing
@property (readonly) NSUInteger hash;
@property (weak, nonatomic) _TVRXKeyboardController *keyboardController; // ivar: _keyboardController
@property (retain, nonatomic) NSDate *lastSessionTimestamp; // ivar: _lastSessionTimestamp
@property (readonly) Class superclass;
@property (retain, nonatomic) _TVRCMRTelevisionWrapper *television; // ivar: _television


-(BOOL)_shouldAllowSourceSession;
-(BOOL)isEditing;
-(id)attributes;
-(id)text;
-(void)_receivedInputSourceSession:(id)arg0 ;
-(void)_stopObservingTelevisionEditingSession;
-(void)dealloc;
-(void)handleTextActionPayload:(id)arg0 ;
-(void)inputSessionDidBegin:(id)arg0 ;
-(void)inputSessionDidDie:(id)arg0 ;
-(void)inputSessionDidEnd:(id)arg0 ;
-(void)sendReturnKey;
-(void)setText:(id)arg0 ;
-(void)setTextActionPayload:(id)arg0 ;


@end


#endif