// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MPUHTMLPARSERSTATE_H
#define _MPUHTMLPARSERSTATE_H

@class NSData, NSMutableArray, NSMutableAttributedString, NSString;
@protocol MPUHTMLParserState, MPUHTMLParserDelegate;

#import <Foundation/Foundation.h>

#import "MPUHTMLParser.h"

@interface _MPUHTMLParserState : NSObject <MPUHTMLParserState>

 {
    NSData *_data;
    *void _selfRef;
    MPUHTMLParser *_parser;
    id<MPUHTMLParserDelegate> *_delegate;
    NSMutableArray *_errors;
    NSMutableAttributedString *_attributedString;
    NSMutableArray *_attributeDictionaries;
    NSMutableArray *_tagStack;
    NSMutableArray *_stringStack;
    ? _delegateCapabilites;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)parse:(*id)arg0 ;
-(id)attributedString;
-(id)attributes;
-(id)currentTagAttributes;
-(id)initWithParser:(id)arg0 data:(id)arg1 ;
-(id)tagStack;
-(void)_appendString:(id)arg0 ;
-(void)_characters:(char *)arg0 length:(int)arg1 ;
-(void)_endDocument;
-(void)_endElement:(char *)arg0 ;
-(void)_error:(NSInteger)arg0 msg:(char *)arg1 args:(char *)arg2 ;
-(void)_startDocument;
-(void)_startElement:(char *)arg0 attrs:(*char *)arg1 ;


@end


#endif