// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IMSUPERTOPLAINPARSERCONTEXT_H
#define IMSUPERTOPLAINPARSERCONTEXT_H

@class NSMutableString, NSString;


#import "IMFromSuperParserContext.h"

@interface IMSuperToPlainParserContext : IMFromSuperParserContext {
    NSMutableString *_plainString;
    BOOL _extractLinks;
}


@property (readonly, nonatomic) NSMutableString *mutablePlainString; // ivar: _mutablePlainString
@property (readonly, nonatomic) NSString *plainString;


-(id)initWithAttributedString:(id)arg0 ;
-(id)initWithAttributedString:(id)arg0 extractLinks:(BOOL)arg1 ;
-(id)name;
-(id)resultsForLogging;
-(void)dealloc;
-(void)parser:(id)arg0 foundAttributes:(id)arg1 inRange:(struct _NSRange )arg2 characters:(id)arg3 ;


@end


#endif