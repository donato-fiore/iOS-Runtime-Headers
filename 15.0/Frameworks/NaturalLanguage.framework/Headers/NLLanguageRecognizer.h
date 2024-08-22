// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NLLANGUAGERECOGNIZER_H
#define NLLANGUAGERECOGNIZER_H

@class NSArray, NSDictionary, NSString;

#import <Foundation/Foundation.h>


@interface NLLanguageRecognizer : NSObject {
    *void _identifier;
    NSArray *_languageConstraints;
    NSDictionary *_languageHints;
}


@property (readonly, copy, nonatomic) NSString *dominantLanguage;
@property (copy, nonatomic) NSArray *languageConstraints;
@property (copy, nonatomic) NSDictionary *languageHints;


+(id)dominantLanguageForString:(id)arg0 ;
-(id)init;
-(id)languageHypothesesWithMaximum:(NSUInteger)arg0 ;
-(void)dealloc;
-(void)processString:(id)arg0 ;
-(void)processString:(id)arg0 range:(struct _NSRange )arg1 ;
-(void)reset;


@end


#endif