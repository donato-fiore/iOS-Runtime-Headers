// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSRECOGNITIONDISAMBIGUATEACTION_H
#define VSRECOGNITIONDISAMBIGUATEACTION_H

@class NSString, NSMutableDictionary;


#import "VSRecognitionRecognizeAction.h"

@interface VSRecognitionDisambiguateAction : VSRecognitionRecognizeAction {
    NSString *_repeatedSpokenFeedbackString;
    NSString *_sequenceTag;
    NSMutableDictionary *_knownValues;
    NSMutableDictionary *_knownPhoneticValues;
    NSMutableDictionary *_ambiguousValues;
    NSMutableDictionary *_ambiguousPhoneticValues;
    *void _context;
}




-(BOOL)_keywordIndexChanged;
-(id)_actionForEmptyResults;
-(id)_keywords;
-(id)ambiguousValuesForClassIdentifier:(id)arg0 ;
-(id)knownValueForClassIdentifier:(id)arg0 ;
-(id)knownValuesForClassIdentifier:(id)arg0 ;
-(id)repeatedSpokenFeedbackString;
-(id)sequenceTag;
-(int)completionType;
-(struct __VSRecognition *)_createRecognitionInstanceWithCallbacks:(struct ? *)arg0 info:(*void)arg1 ;
-(struct __VSRecognitionDisambiguationContext *)_disambiguationContext;
-(void)dealloc;
-(void)setAmbiguousValues:(id)arg0 phoneticValues:(id)arg1 forClassIdentifier:(id)arg2 ;
-(void)setKeywords:(id)arg0 ;
-(void)setKnownValue:(id)arg0 phoneticValue:(id)arg1 forClassIdentifier:(id)arg2 ;
-(void)setKnownValues:(id)arg0 phoneticValues:(id)arg1 forClassIdentifier:(id)arg2 ;
-(void)setRepeatedSpokenFeedbackString:(id)arg0 ;
-(void)setSequenceTag:(id)arg0 ;


@end


#endif