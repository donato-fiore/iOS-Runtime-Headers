// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef WPXMLRPCDECODER_H
#define WPXMLRPCDECODER_H

@class NSXMLParser, NSData, NSMutableString, NSString;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>

#import "WPXMLRPCDecoderDelegate.h"

@interface WPXMLRPCDecoder : NSObject <NSXMLParserDelegate>

 {
    NSXMLParser *_parser;
    WPXMLRPCDecoderDelegate *_delegate;
    BOOL _isFault;
    NSData *_body;
    NSData *_originalData;
    id *_object;
    NSMutableString *_methodName;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isFault;
-(NSInteger)faultCode;
-(id)error;
-(id)faultString;
-(id)initWithData:(id)arg0 ;
-(id)object;
-(void)abortParsing;
-(void)parse;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;


@end


#endif