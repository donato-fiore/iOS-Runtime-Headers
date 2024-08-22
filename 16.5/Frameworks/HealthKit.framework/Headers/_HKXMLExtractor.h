// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _HKXMLEXTRACTOR_H
#define _HKXMLEXTRACTOR_H

@class NSMutableArray, NSString, NSMutableDictionary;
@protocol NSXMLParserDelegate;

#import <Foundation/Foundation.h>


@interface _HKXMLExtractor : NSObject <NSXMLParserDelegate>

 {
    NSMutableArray *_allTagSpecifications;
    NSMutableArray *_stackOfElements;
    NSString *_matchedTagSpecification;
    NSMutableDictionary *_resultTagContent;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)_matchSpecificationWithAttributes:(id)arg0 ;
-(id)getDataForTagSpecification:(id)arg0 ;
-(id)init;
-(void)_parseWithXMLParser:(id)arg0 ;
-(void)_resetScanningState;
-(void)addTagSpecificationForExtraction:(id)arg0 ;
-(void)parseWithData:(id)arg0 ;
-(void)parseWithStream:(id)arg0 ;
-(void)parser:(id)arg0 didEndElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 ;
-(void)parser:(id)arg0 didStartElement:(id)arg1 namespaceURI:(id)arg2 qualifiedName:(id)arg3 attributes:(id)arg4 ;
-(void)parser:(id)arg0 foundCharacters:(id)arg1 ;


@end


#endif