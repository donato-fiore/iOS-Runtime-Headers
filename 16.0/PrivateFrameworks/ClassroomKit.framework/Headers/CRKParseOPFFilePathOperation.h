// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKPARSEOPFFILEPATHOPERATION_H
#define CRKPARSEOPFFILEPATHOPERATION_H

@class CATOperation, NSXMLParser, NSString;
@protocol NSXMLParserDelegate;



@interface CRKParseOPFFilePathOperation : CATOperation <NSXMLParserDelegate>

 {
    NSXMLParser *mContainerParser;
    NSString *mBookFilePath;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isAsynchronous;
-(id)initWithBookFilePath:(id)arg0 ;
-(void)main;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg0 ;


@end


#endif