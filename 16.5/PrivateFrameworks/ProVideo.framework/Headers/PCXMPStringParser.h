// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PCXMPSTRINGPARSER_H
#define PCXMPSTRINGPARSER_H

@class NSMutableString, NSMutableDictionary, NSString, NSArray;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>


@interface PCXMPStringParser : NSObject <NSXMLParserDelegate>

 {
    NSMutableString *tagParent1;
    NSMutableString *tagParent2;
    NSMutableString *tagParent3;
    NSMutableString *valueString;
    NSMutableDictionary *tagDict1;
    NSMutableDictionary *tagDict2;
    NSMutableDictionary *tagDict3;
    NSMutableDictionary *mDict;
    NSString *xmlError;
    NSArray *parentTags1;
    NSArray *parentTags2;
    NSArray *parentTags3;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)parseErrorString;
-(id)parsedData;
-(void)dealloc;
-(void)parseXMPData:(id)arg0 ;
-(void)parseXMPString:(id)arg0 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg0 ;
-(void)parserDidStartDocument:(id)arg0 ;


@end


#endif