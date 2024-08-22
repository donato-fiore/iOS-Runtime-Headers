// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ONOXMLELEMENT_H
#define ONOXMLELEMENT_H

@class NSDictionary, NSArray, NSDate, NSString, NSNumber;
@protocol ONOSearching, NSCopying, NSCoding;

#import <Foundation/Foundation.h>

#import "ONOXMLDocument.h"
#import "ONOXMLElement.h"

@interface ONOXMLElement : NSObject <ONOSearching, NSCopying, NSCoding>

 {
    ? _xmlNode;
}


@property (retain, nonatomic) NSDictionary *attributes; // ivar: _attributes
@property (readonly, nonatomic, getter=isBlank) BOOL blank;
@property (retain, nonatomic) NSArray *children;
@property (copy, nonatomic) NSDate *dateValue; // ivar: _dateValue
@property (weak, nonatomic) ONOXMLDocument *document; // ivar: _document
@property (nonatomic) NSUInteger lineNumber; // ivar: _lineNumber
@property (copy, nonatomic) NSString *namespace; // ivar: _namespace
@property (retain, nonatomic) ONOXMLElement *nextSibling; // ivar: _nextSibling
@property (copy, nonatomic) NSNumber *numberValue; // ivar: _numberValue
@property (retain, nonatomic) ONOXMLElement *parent; // ivar: _parent
@property (retain, nonatomic) ONOXMLElement *previousSibling; // ivar: _previousSibling
@property (copy, nonatomic) NSString *rawXMLString; // ivar: _rawXMLString
@property (copy, nonatomic) NSString *stringValue; // ivar: _stringValue
@property (copy, nonatomic) NSString *tag; // ivar: _tag
@property ? xmlNode;


-(BOOL)isEqual:(id)arg0 ;
-(id)CSS:(id)arg0 ;
-(id)XPath:(id)arg0 ;
-(id)childrenAtIndexes:(id)arg0 ;
-(id)childrenWithTag:(id)arg0 ;
-(id)childrenWithTag:(id)arg0 inNamespace:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)firstChildWithCSS:(id)arg0 ;
-(id)firstChildWithTag:(id)arg0 ;
-(id)firstChildWithTag:(id)arg0 inNamespace:(id)arg1 ;
-(id)firstChildWithXPath:(id)arg0 ;
-(id)functionResultByEvaluatingXPath:(id)arg0 ;
-(id)indexesOfChildrenPassingTest:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)methodSignatureForSelector:(SEL)arg0 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)valueForAttribute:(id)arg0 ;
-(id)valueForAttribute:(id)arg0 inNamespace:(id)arg1 ;
-(struct _xmlXPathObject *)xmlXPathObjectPtrWithXPath:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)enumerateElementsWithCSS:(id)arg0 block:(id)arg1 ;
-(void)enumerateElementsWithCSS:(id)arg0 usingBlock:(id)arg1 ;
-(void)enumerateElementsWithXPath:(id)arg0 block:(id)arg1 ;
-(void)enumerateElementsWithXPath:(id)arg0 usingBlock:(id)arg1 ;
-(void)forwardInvocation:(id)arg0 ;


@end


#endif