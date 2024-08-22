// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKTEXTINPUTELEMENTCONTENT_H
#define PKTEXTINPUTELEMENTCONTENT_H

@class UITextInputTraits, UIView<UIWKInteractionViewProtocol>, UIWKDocumentContext, NSString;
@protocol UITextInput;

#import <Foundation/Foundation.h>

#import "PKTextInputElement.h"

@interface PKTextInputElementContent : NSObject {
    PKTextInputElement *_element;
    UITextInputTraits *_textInputTraits;
    NSInteger _dataLoadedState;
    id<UITextInput> *__textInput;
    UIView<UIWKInteractionViewProtocol> *__webDocumentSourceView;
    id<UITextInput> *__webTextInput;
    UIWKDocumentContext *__webDocumentContext;
    NSString *__webComposedContextString;
}




-(id)description;


@end


#endif