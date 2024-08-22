// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VUIHTMLMARKUPPARSER_H
#define VUIHTMLMARKUPPARSER_H

@class NSString;
@protocol VUIHTMLMarkupParser;

#import <Foundation/Foundation.h>


@interface VUIHTMLMarkupParser : NSObject

@property (nonatomic) *_xmlParserCtxt _parserContext; // ivar: __parserContext
@property (weak, nonatomic) NSObject<VUIHTMLMarkupParser> *delegate; // ivar: _delegate
@property (readonly, copy, nonatomic) NSString *string; // ivar: _string


+(void)initialize;
-(id)init;
-(id)initWithString:(id)arg0 ;
-(void)parse;
-(void)reportErrorWithCode:(NSUInteger)arg0 userInfo:(id)arg1 ;
-(void)reportParseError:(struct _xmlError *)arg0 ;


@end


#endif