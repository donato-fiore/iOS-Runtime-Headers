// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IMATTRIBUTEDSTRINGPARSERCONTEXT_H
#define IMATTRIBUTEDSTRINGPARSERCONTEXT_H

@class NSAttributedString, NSString, NSArray;

#import <Foundation/Foundation.h>


@interface IMAttributedStringParserContext : NSObject

@property (readonly, retain) NSAttributedString *inString; // ivar: _inString
@property (readonly, retain) NSString *name;
@property (readonly, retain) NSArray *resultsForLogging;
@property (readonly) BOOL shouldPreprocess;


-(id)initWithAttributedString:(id)arg0 ;
-(id)parser:(id)arg0 preprocessedAttributesForAttributes:(id)arg1 range:(struct _NSRange )arg2 ;
-(void)dealloc;
-(void)parser:(id)arg0 foundAttributes:(id)arg1 inRange:(struct _NSRange )arg2 ;
-(void)parserDidEnd:(id)arg0 ;
-(void)parserDidStart:(id)arg0 ;


@end


#endif