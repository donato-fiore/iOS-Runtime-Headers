// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _NSLEXICONMORPHUNDICTIONARY_H
#define _NSLEXICONMORPHUNDICTIONARY_H

@class NSLocale;
@protocol _NSLexiconAttributeLookup;

#import <Foundation/Foundation.h>

#import "NSString.h"

@interface _NSLexiconMorphunDictionary : NSObject <_NSLexiconAttributeLookup>

 {
    NSLocale *_appropriateLocale;
    *MANAConfigurableAnalyzer _analyzer;
    *MTokenizer _tokenizer;
    *MDDictionaryMetaData _dictionary;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)allPossibleWordAttributesForWord:(id)arg0 ;
-(id)initWithLanguage:(id)arg0 ;
-(void)dealloc;


@end


#endif