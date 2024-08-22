// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OIXMLNODE_H
#define OIXMLNODE_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface OIXMLNode : NSObject <NSCopying>



@property (readonly) NSString *XMLString;
@property (readonly) NSString *closingTagString;
@property (readonly) NSString *contentString;
@property (readonly) NSString *name;
@property (readonly) NSString *openingTagString;
@property (retain) NSString *stringValue;


+(void)_escapeCharacters:(*unsigned short)arg0 amount:(unsigned int)arg1 escapeWhiteSpaces:(BOOL)arg2 inString:(id)arg3 appendingToString:(struct __CFString *)arg4 ;
+(void)_escapeHTMLAttributeCharacters:(id)arg0 withQuote:(unsigned short)arg1 appendingToString:(struct __CFString *)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)_appendXMLStringToString:(struct __CFString *)arg0 level:(int)arg1 ;


@end


#endif