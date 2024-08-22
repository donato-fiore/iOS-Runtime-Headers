// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACCOMMANDRECOGNIZER_H
#define CACCOMMANDRECOGNIZER_H

@class NSDictionary, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "CACSpeechRecognizer.h"

@interface CACCommandRecognizer : NSObject {
    unsigned int _flags;
    NSDictionary *_contextEvaluators;
    NSArray *_builtInLMIdentifiers;
}


@property (retain) id *owner; // ivar: _owner
@property (readonly) CACSpeechRecognizer *speechRecognizer; // ivar: _speechRecognizer
@property (readonly) NSArray *spokenCommands; // ivar: _spokenCommandsCache
@property (retain) NSString *type; // ivar: _type


+(void)_accumulateCloseMatchUsingCommandIdentifier:(id)arg0 substitutionTable:(id)arg1 ;
+(void)_showHintWithAccumulateCloseMatches;
+(void)resetCloseMatchAccumulator;
+(void)suspendCloseMatchAccumulatorForCommand;
-(BOOL)isAppropriateForContext;
-(BOOL)isListening;
-(id)_commandParametersFromCACLanguageModel:(id)arg0 ;
-(id)commandParametersFromCACLanguageModel:(id)arg0 ;
-(id)commandStrings;
-(id)commandTextSequenceFromCACLanguageModel:(id)arg0 ;
-(id)initWithCommands:(id)arg0 contextEvaluators:(id)arg1 builtInLMIdentifiers:(id)arg2 ;
-(id)objectForContextEvaluatorKey:(id)arg0 ;
-(void)_buildLanguageModelUsingCommands;
-(void)_synchronizeSpeechRecognizerSettings;
-(void)handleSpokenCommand:(id)arg0 ;
-(void)speechRecognizer:(id)arg0 didBeginUtteranceWithID:(NSUInteger)arg1 ;
-(void)speechRecognizer:(id)arg0 didRecognizeRXResult:(struct __RXLanguageObject *)arg1 ;
-(void)startListening;
-(void)stopListening;
-(void)synchronizeWithReason:(id)arg0 ;


@end


#endif