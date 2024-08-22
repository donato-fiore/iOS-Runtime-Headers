// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef XMLWRAPPERDOC_H
#define XMLWRAPPERDOC_H

@class NSDictionary, NSData;

#import <Foundation/Foundation.h>

#import "XMLWrapperElement.h"
#import "XMLWrapperQuery.h"

@interface XMLWrapperDoc : NSObject {
    ? _doc;
    ? _docNode;
}


@property (retain, nonatomic) XMLWrapperElement *documentElement; // ivar: _documentElement
@property (readonly, nonatomic) NSDictionary *namespaces; // ivar: _namespaces
@property (retain, nonatomic) XMLWrapperQuery *query; // ivar: _query
@property (retain, nonatomic) NSData *schemaData; // ivar: _schemaData
@property (retain, nonatomic) NSData *xmlData; // ivar: _xmlData


-(?)docNode;
-(?)docPtr;
-(?)nodePtr;
-(BOOL)createDocument:(*id)arg0 ;
-(BOOL)setXMLDoc:(*id)arg0 ;
-(id)createDocumentElement:(*id)arg0 ;
-(id)firstResultByXpathQuery:(id)arg0 error:(*id)arg1 ;
-(id)getResultsByXpathQuery:(id)arg0 error:(*id)arg1 ;
-(id)initWithData:(id)arg0 schema:(id)arg1 error:(*id)arg2 ;
-(id)initWithElement:(id)arg0 schema:(id)arg1 error:(*id)arg2 ;
-(id)xmlString:(*id)arg0 ;
-(void)dealloc;
-(void)setNamespace:(id)arg0 ;


@end


#endif