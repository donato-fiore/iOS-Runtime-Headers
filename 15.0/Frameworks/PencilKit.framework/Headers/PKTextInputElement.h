// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKTEXTINPUTELEMENT_H
#define PKTEXTINPUTELEMENT_H

@class UIView, NSNumber;
@protocol UICoordinateSpace, UITextInput, PKScribbleInteractionWrapper, NSObject><NSCopying;

#import <Foundation/Foundation.h>


@interface PKTextInputElement : NSObject {
    CGRect _lastKnownFrame;
    id<UICoordinateSpace> *_coordinateSpace;
    BOOL __requestingPlaceholderSuppression;
    BOOL __waitingForMatchingDidFinishWriting;
    BOOL _legacyHasBeenFocusedWithinContainer;
    NSInteger __elementType;
    id<UITextInput> *_textInput;
    UIView *_elementTextInputView;
    id<PKScribbleInteractionWrapper> *__viewScribbleInteraction;
    id<PKScribbleInteractionWrapper> *__containerInteraction;
    NSInteger __orderInContainer;
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
-(void)dealloc;
-(void)didEndWriting;
-(void)notifyTextInputTextDidChange;
-(void)notifyTextInputTextWillChange;
-(void)swapWritingStateWithElement:(id)arg0 ;
-(void)willBeginWriting;


@end


#endif