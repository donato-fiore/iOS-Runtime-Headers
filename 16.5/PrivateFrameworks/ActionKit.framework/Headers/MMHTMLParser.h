// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MMHTMLPARSER_H
#define MMHTMLPARSER_H


#import <Foundation/Foundation.h>


@interface MMHTMLParser : NSObject



-(BOOL)_parseAttributeValueWithScanner:(id)arg0 ;
-(BOOL)_parseEndTag:(id)arg0 withScanner:(id)arg1 ;
-(BOOL)_parseStringWithScanner:(id)arg0 ;
-(id)_parseLenientBlockTagWithScanner:(id)arg0 ;
-(id)_parseStrictBlockTagWithScanner:(id)arg0 ;
-(id)parseBlockTagWithScanner:(id)arg0 ;
-(id)parseCommentWithScanner:(id)arg0 ;
-(id)parseInlineTagWithScanner:(id)arg0 ;
-(struct _NSRange )_parseNameWithScanner:(id)arg0 ;
-(void)_parseAttributesWithScanner:(id)arg0 ;


@end


#endif