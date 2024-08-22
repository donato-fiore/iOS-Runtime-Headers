// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IIO_CXMLPARSER_H
#define IIO_CXMLPARSER_H

@class NSMutableArray, NSMutableString, NSString;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>


@interface IIO_CXMLParser : NSObject <NSXMLParserDelegate>

 {
    NSMutableArray *_dictionaryStack;
    NSMutableString *_textInProgress;
    *id _errorPointer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)dictionaryForXMLData:(id)arg0 error:(*id)arg1 ;
-(id)initWithError:(*id)arg0 ;
-(id)initializeWithData:(id)arg0 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;


@end


#endif