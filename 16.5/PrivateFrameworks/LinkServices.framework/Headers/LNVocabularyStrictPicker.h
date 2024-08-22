// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LNVOCABULARYSTRICTPICKER_H
#define LNVOCABULARYSTRICTPICKER_H

@class NSString;
@protocol LNVocabularyPicker;

#import <Foundation/Foundation.h>


@interface LNVocabularyStrictPicker : NSObject <LNVocabularyPicker>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)pickTermsFromCorpora:(id)arg0 ;


@end


#endif