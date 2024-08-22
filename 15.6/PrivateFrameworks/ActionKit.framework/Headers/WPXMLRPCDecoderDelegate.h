// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef WPXMLRPCDECODERDELEGATE_H
#define WPXMLRPCDECODERDELEGATE_H

@class NSMutableArray, NSString;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>

#import "WPXMLRPCDecoderDelegate.h"

@interface WPXMLRPCDecoderDelegate : NSObject <NSXMLParserDelegate>

 {
    WPXMLRPCDecoderDelegate *myParent;
    NSMutableArray *myChildren;
    int myElementType;
    NSString *myElementKey;
    id *myElementValue;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isDictionaryElementType:(int)arg0 ;
-(id)elementKey;
-(id)elementValue;
-(id)initWithParent:(id)arg0 ;
-(id)parent;
-(id)parseBoolean:(id)arg0 ;
-(id)parseData:(id)arg0 ;
-(id)parseDate:(id)arg0 ;
-(id)parseDateString:(id)arg0 withFormat:(id)arg1 ;
-(id)parseDouble:(id)arg0 ;
-(id)parseInteger:(id)arg0 ;
-(id)parseString:(id)arg0 ;
-(int)elementType;
-(void)addElementValueToParent;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;
-(void)setElementKey:(id)arg0 ;
-(void)setElementType:(int)arg0 ;
-(void)setElementValue:(id)arg0 ;
-(void)setParent:(id)arg0 ;


@end


#endif