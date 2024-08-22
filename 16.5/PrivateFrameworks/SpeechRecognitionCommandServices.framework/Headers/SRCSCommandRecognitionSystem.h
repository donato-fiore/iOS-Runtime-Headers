// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SRCSCOMMANDRECOGNITIONSYSTEM_H
#define SRCSCOMMANDRECOGNITIONSYSTEM_H

@class NSMutableDictionary, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface SRCSCommandRecognitionSystem : NSObject {
    NSMutableDictionary *_resolvedBuiltInIdentifiers;
}


@property (readonly, retain) NSString *localeIdentifier; // ivar: _localeIdentifier
@property (readonly, retain) NSArray *recognizers; // ivar: _recognizers
@property (readonly, nonatomic) NSArray *targetTypes; // ivar: _targetTypes


-(id)initWithLocaleIdentifier:(id)arg0 ;
-(id)languageModelTreeForBuiltInLMIdentifier:(id)arg0 ;
-(id)spokenCommandFromRecognizedAFSpeechPhrases:(id)arg0 ;
-(id)spokenCommandFromRecognizedEARTokenSausage:(struct __CFArray *)arg0 ;
-(void)_initalizeLanguageModelTree;
-(void)_testWithPhrases:(id)arg0 ;
-(void)addRecognizer:(id)arg0 ;


@end


#endif