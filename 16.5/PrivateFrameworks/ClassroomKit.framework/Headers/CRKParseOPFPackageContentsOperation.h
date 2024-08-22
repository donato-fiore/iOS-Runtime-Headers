// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKPARSEOPFPACKAGECONTENTSOPERATION_H
#define CRKPARSEOPFPACKAGECONTENTSOPERATION_H

@class CATOperation, NSXMLParser, NSString, NSMutableString;
@protocol NSXMLParserDelegate;


#import "CRKOPFPackageContents.h"

@interface CRKParseOPFPackageContentsOperation : CATOperation <NSXMLParserDelegate>

 {
    NSXMLParser *mOPFParser;
    NSString *mOPFFilePath;
    CRKOPFPackageContents *mPackageContents;
    NSMutableString *mCurrentText;
    NSString *mCoverItemID;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)isAsynchronous;
-(id)initWithOPFFilePath:(id)arg0 identifierType:(id)arg1 identifier:(id)arg2 ;
-(void)main;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;
-(void)parser:(id)arg0 parseErrorOccurred:(id)arg1 ;
-(void)parserDidEndDocument:(id)arg0 ;


@end


#endif