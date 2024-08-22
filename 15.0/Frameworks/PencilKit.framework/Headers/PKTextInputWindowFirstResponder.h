// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTEXTINPUTWINDOWFIRSTRESPONDER_H
#define PKTEXTINPUTWINDOWFIRSTRESPONDER_H

@class UITextInputAssistantItem;

#import <Foundation/Foundation.h>


@interface PKTextInputWindowFirstResponder : NSObject

@property (nonatomic) BOOL disableInputAssistant; // ivar: _disableInputAssistant
@property (readonly, nonatomic, getter=isEditableTextInput) BOOL editableTextInput; // ivar: _editableTextInput
@property (readonly, nonatomic, getter=isEditableTextInputWithPencilTextInputSource) BOOL editableTextInputWithPencilTextInputSource;
@property (readonly, nonatomic) UITextInputAssistantItem *inputAssistantItem; // ivar: _inputAssistantItem
@property (readonly, nonatomic, getter=isVisible) BOOL isVisible; // ivar: _isVisible
@property (nonatomic, getter=isNotesHandwritingResponder) BOOL notesHandwritingResponder; // ivar: _notesHandwritingResponder
@property (readonly, nonatomic, getter=isPencilTextInputSource) BOOL pencilTextInputSource;
@property (readonly, nonatomic) NSInteger textInputSource; // ivar: _textInputSource


-(id)initWithIsVisible:(BOOL)arg0 isEditableTextInput:(BOOL)arg1 textInputSource:(NSInteger)arg2 inputAssistantItem:(id)arg3 ;


@end


#endif