// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ONOXMLDOCUMENT_H
#define ONOXMLDOCUMENT_H

@class NSDateFormatter, NSMutableDictionary, NSNumberFormatter, NSString;
@protocol ONOSearching, NSCopying, NSCoding;

#import <Foundation/Foundation.h>

#import "ONOXMLElement.h"

@interface ONOXMLDocument : NSObject <ONOSearching, NSCopying, NSCoding>



@property (retain, nonatomic) NSDateFormatter *dateFormatter; // ivar: _dateFormatter
@property (retain, nonatomic) NSMutableDictionary *defaultNamespaces; // ivar: _defaultNamespaces
@property (retain, nonatomic) NSNumberFormatter *numberFormatter; // ivar: _numberFormatter
@property (retain, nonatomic) ONOXMLElement *rootElement; // ivar: _rootElement
@property (nonatomic) NSUInteger stringEncoding; // ivar: _stringEncoding
@property (copy, nonatomic) NSString *version; // ivar: _version
@property (nonatomic) *_xmlDoc xmlDocument; // ivar: _xmlDocument


+(id)HTMLDocumentWithData:(id)arg0 error:(*id)arg1 ;
+(id)HTMLDocumentWithString:(id)arg0 encoding:(NSUInteger)arg1 error:(*id)arg2 ;
+(id)XMLDocumentWithData:(id)arg0 error:(*id)arg1 ;
+(id)XMLDocumentWithString:(id)arg0 encoding:(NSUInteger)arg1 error:(*id)arg2 ;
-(?)initWithDocument;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)CSS:(id)arg0 ;
-(id)XPath:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)elementWithNode:(struct _xmlNode *)arg0 ;
-(id)enumeratorWithXPathObject:(struct _xmlXPathObject *)arg0 ;
-(id)firstChildWithCSS:(id)arg0 ;
-(id)firstChildWithXPath:(id)arg0 ;
-(id)functionResultByEvaluatingXPath:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)definePrefix:(id)arg0 forDefaultNamespace:(id)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateElementsWithCSS:(id)arg0 block:(id)arg1 ;
-(void)enumerateElementsWithCSS:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateElementsWithXPath:(id)arg0 block:(id)arg1 ;
-(void)enumerateElementsWithXPath:(id)arg0 usingBlock:(id)arg1 ;


@end


#endif