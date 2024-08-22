// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MDHTMLPARSING_H
#define _MDHTMLPARSING_H

@class NSMutableDictionary, NSString;

#import <Foundation/Foundation.h>


@interface _MDHTMLParsing : NSObject {
    *unsigned short uniChars;
    NSUInteger uniCharLen;
    NSUInteger uniCharSize;
    unsigned char newLineBuffer;
    NSUInteger newLineLength;
    NSMutableDictionary *attributes;
    NSString *metaName;
    NSString *metaHttpEquiv;
    NSString *metaContent;
    NSUInteger sourceEncoding;
    unsigned int sourceCFEncoding;
    NSUInteger indexingLimit;
    char * titleStart;
    unsigned int titleLength;
    BOOL inHead;
    BOOL inTitle;
    BOOL inScript;
    BOOL inStyle;
    char * hiddenElementName;
    NSUInteger hiddenElementNameLength;
    NSUInteger hiddenCount;
    BOOL hiddenAttr;
}




+(void)initialize;
-(id)initWithEncoding:(NSUInteger)arg0 ;
-(void)appendNewline;
-(void)appendText:(char *)arg0 length:(NSUInteger)arg1 ;
-(void)appendUnichars:(*unsigned short)arg0 length:(NSUInteger)arg1 ;
-(void)dealloc;


@end


#endif