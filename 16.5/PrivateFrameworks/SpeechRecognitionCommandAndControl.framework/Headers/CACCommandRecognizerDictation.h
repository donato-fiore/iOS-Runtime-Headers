// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CACCOMMANDRECOGNIZERDICTATION_H
#define CACCOMMANDRECOGNIZERDICTATION_H



#import "CACCommandRecognizer.h"
#import "CACProfanityNode.h"

@interface CACCommandRecognizerDictation : CACCommandRecognizer {
    CACProfanityNode *_rootProfanityNode;
    BOOL _suppressProfanity;
}




-(id)_attributedStringFromResult:(struct __RXLanguageObject *)arg0 ;
-(struct __RXLanguageObject *)_adLibLanguageObjectFromLanguageModel:(struct __RXLanguageObject *)arg0 ;
-(void)_didBeginUtteranceWithID:(NSUInteger)arg0 ;
-(void)dictationConnectionDidRecognizeAttributedString:(id)arg0 isHypothesis:(BOOL)arg1 utteranceID:(NSUInteger)arg2 ;
-(void)handleDictation:(id)arg0 ;
-(void)speechRecognizer:(id)arg0 didBeginUtteranceWithID:(NSUInteger)arg1 ;
-(void)speechRecognizer:(id)arg0 didRecognizeRXResult:(struct __RXLanguageObject *)arg1 ;


@end


#endif