// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTEXTINPUTELEMENT_H
#define PKTEXTINPUTELEMENT_H

@class UIView, NSNumber;
@protocol UICoordinateSpace, PKScribbleInteractionWrapper, UITextInput, NSObject><NSCopying;

#import <Foundation/Foundation.h>

#import "PKTextInputWritingSession.h"

@interface PKTextInputElement : NSObject {
    CGRect _lastKnownFrame;
    id<UICoordinateSpace> *_coordinateSpace;
    BOOL __requestingPlaceholderSuppression;
    BOOL __waitingForMatchingDidFinishWriting;
    BOOL _legacyHasBeenFocusedWithinContainer;
    NSInteger __elementType;
    UIView *_elementTextInputView;
    id<PKScribbleInteractionWrapper> *__viewScribbleInteraction;
    id<PKScribbleInteractionWrapper> *__containerInteraction;
    NSInteger __orderInContainer;
    PKTextInputWritingSession *__writingSession;
    id<UITextInput> *_textInput;
    NSNumber *_recognitionIdentifier;
    id<NSObject><NSCopying> *_containerElementIdentifier;
}




-(BOOL)clearActivePreview;
-(BOOL)showSelectionCommands;
-(id)description;
-(id)selectionHighlightColor;
-(struct CGRect )selectionClipRectInCoordinateSpace:(id)arg0 ;
-(struct _NSRange )activePreviewRange;
-(void)_beginSuppressingFieldPlaceholder;
-(void)_finishSuppressingFieldPlaceholderIfNeeded;
-(void)beginSuppressingPlaceholderIfNecessary;
-(void)dealloc;
-(void)didEndWriting;
-(void)didInsertText;
-(void)didMoveToWritingSession:(id)arg0 ;
-(void)endSuppressingPlaceholderIfNecessary;
-(void)notifyTextInputTextDidChange;
-(void)notifyTextInputTextWillChange;
-(void)swapWritingStateWithElement:(id)arg0 ;
-(void)willBeginWriting;


@end


#endif