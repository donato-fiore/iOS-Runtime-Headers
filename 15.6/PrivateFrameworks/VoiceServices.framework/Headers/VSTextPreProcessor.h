// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VSTEXTPREPROCESSOR_H
#define VSTEXTPREPROCESSOR_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface VSTextPreProcessor : NSObject {
    NSArray *_rules;
    NSString *_languageID;
    *__CFStringTokenizer _tokenizer;
}




-(id)initWithContentsOfPath:(id)arg0 languageIdentifier:(id)arg1 ;
-(id)processedTextFromString:(id)arg0 ;
-(void)dealloc;


@end


#endif