// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSVTUIASRGRAMMARS_H
#define CSVTUIASRGRAMMARS_H

@class NSDictionary, NSString;
@protocol NSURLSessionDelegate;

#import <Foundation/Foundation.h>


@interface CSVTUIASRGrammars : NSObject <NSURLSessionDelegate>

 {
    NSDictionary *_grammar;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)sharedGrammars;
-(id)_getLMEWithGrammar:(id)arg0 withLocale:(id)arg1 ;
-(id)_getLeadingPatternsWithGrammars:(id)arg0 withLocale:(id)arg1 ;
-(id)_getRegexPatternsWithGrammars:(id)arg0 withUtt:(NSInteger)arg1 withLocale:(id)arg2 ;
-(id)_getTrailingPatternsWithGrammars:(id)arg0 withLocale:(id)arg1 ;
-(id)createGrammars;
-(id)getLMEforLocale:(id)arg0 ;
-(id)getLeadingPatternsForUtt:(NSInteger)arg0 Locale:(id)arg1 ;
-(id)getRegexPatternsForUtt:(NSInteger)arg0 Locale:(id)arg1 ;
-(id)getTrailingPatternsForUtt:(NSInteger)arg0 Locale:(id)arg1 ;
-(id)init;


@end


#endif