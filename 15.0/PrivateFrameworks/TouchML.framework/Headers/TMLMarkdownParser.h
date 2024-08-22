// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TMLMARKDOWNPARSER_H
#define TMLMARKDOWNPARSER_H

@class NSArray, NSScanner, NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface TMLMarkdownParser : NSObject {
    NSArray *_rules;
    NSScanner *_scanner;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_tag;
    NSArray *_regex;
    NSArray *_extraRules;
    NSArray *_extraRegex;
}




+(id)parse:(id)arg0 tags:(*id)arg1 withRules:(id)arg2 ;
+(id)postProcessString:(id)arg0 ;
+(id)preProcessString:(id)arg0 ;
+(id)regexFromRules:(id)arg0 ;
+(id)stringOfTagType:(id)arg0 andCount:(NSUInteger)arg1 ;
+(id)unescapeString:(id)arg0 ;
-(BOOL)isListTagOpen:(id)arg0 ;
-(id)init;
-(id)parse:(id)arg0 tags:(*id)arg1 ;
-(id)replacestring:(id)arg0 usingRule:(id)arg1 atIndex:(NSUInteger)arg2 additonalRules:(BOOL)arg3 ;
-(id)tagFromType:(int)arg0 ;


@end


#endif