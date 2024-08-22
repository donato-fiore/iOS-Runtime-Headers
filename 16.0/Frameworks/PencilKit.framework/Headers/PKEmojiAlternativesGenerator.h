// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKEMOJIALTERNATIVESGENERATOR_H
#define PKEMOJIALTERNATIVESGENERATOR_H

@class NSXPCConnection, TIDocumentState, NSArray, NSString, UITextRange, UIWKDocumentContext;
@protocol TIEmojiAlternativesProtocol, UITextInput, UIWKInteractionViewProtocol><UITextInput;

#import <Foundation/Foundation.h>


@interface PKEmojiAlternativesGenerator : NSObject {
    NSXPCConnection *_connection;
    id<TIEmojiAlternativesProtocol> *_remoteObject;
    id<UITextInput> *_textInput;
    TIDocumentState *_documentState;
    NSArray *_localeIdentifiers;
    NSString *_textWithAlternatives;
    UITextRange *_rangeWithAlternatives;
    id<UIWKInteractionViewProtocol><UITextInput> *_wkInteractionView;
    UIWKDocumentContext *_wkDocumentContext;
}




-(id)init;
-(void)_generateAlternatives;
-(void)_generateAlternativesForWebKit;


@end


#endif