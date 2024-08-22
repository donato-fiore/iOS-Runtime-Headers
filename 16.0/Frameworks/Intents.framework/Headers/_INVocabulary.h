// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INVOCABULARY_H
#define _INVOCABULARY_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "INVocabularyUpdater.h"
#import "_INVocabularyValidator.h"

@interface _INVocabulary : NSObject {
    INVocabularyUpdater *_vocabularyUpdater;
    _INVocabularyValidator *_validator;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedVocabulary;
+(id)supportedVocabularyStringTypes;
+(void)enumerateVocabularyUsingBlock:(id)arg0 ;
-(id)_validator;
-(id)init;
-(void)_THROW_EXCEPTION_FOR_ATTEMPT_TO_PROVIDE_VOCABULARY_OF_TYPE_THAT_APP_DOES_NOT_HANDLE_:(id)arg0 ;
-(void)_THROW_EXCEPTION_FOR_INVALID_VOCABULARY_TYPE_;
-(void)removeAllVocabularyStrings;
-(void)setValidatedVocabulary:(id)arg0 ofType:(NSInteger)arg1 ;
-(void)setVocabulary:(id)arg0 ofType:(NSInteger)arg1 ;
-(void)setVocabularyStrings:(id)arg0 ofType:(NSInteger)arg1 ;
-(void)validateVocabularyType:(NSInteger)arg0 ;


@end


#endif