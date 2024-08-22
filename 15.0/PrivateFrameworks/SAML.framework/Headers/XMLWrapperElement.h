// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef XMLWRAPPERELEMENT_H
#define XMLWRAPPERELEMENT_H

@class NSMutableDictionary, NSMutableArray, NSDictionary, NSArray, NSString;

#import <Foundation/Foundation.h>

#import "XMLWrapperQuery.h"

@interface XMLWrapperElement : NSObject {
    ? _xmlNode;
    BOOL _ownsXMLNode;
    NSMutableDictionary *_attributes;
    NSMutableArray *_elements;
}


@property (readonly, nonatomic) NSDictionary *attributes;
@property (retain, nonatomic) NSArray *childElementSequence; // ivar: _childElementSequence
@property (readonly, nonatomic) NSArray *elements;
@property (readonly, nonatomic) NSDictionary *namespaces; // ivar: _namespaces
@property (retain, nonatomic) XMLWrapperQuery *query; // ivar: _query
@property (retain, nonatomic) NSString *tagName; // ivar: _tagName
@property (retain, nonatomic) NSString *textContent; // ivar: _textContent


-(?)xmlNode;
-(id)attributeWithName:(id)arg0 ;
-(id)firstElementByTagName:(id)arg0 ;
-(id)firstResultByXpathQuery:(id)arg0 ;
-(id)getElementsByTagName:(id)arg0 ;
-(id)getResultsByXpathQuery:(id)arg0 ;
-(id)initWithNode:(struct _xmlNode *)arg0 doc:(struct _xmlDoc *)arg1 query:(id)arg2 error:(*id)arg3 ;
-(id)initWithTagName:(id)arg0 error:(*id)arg1 ;
-(id)xmlString:(*id)arg0 ;
-(void)addChildElement:(id)arg0 ;
-(void)addChildElement:(id)arg0 before:(id)arg1 ;
-(void)dealloc;
-(void)removeChildElement:(id)arg0 ;
-(void)reorderChildElements;
-(void)replaceChildElement:(id)arg0 newElement:(id)arg1 ;
-(void)setAttributeWithName:(id)arg0 value:(id)arg1 ;
-(void)setNamespace:(id)arg0 ;


@end


#endif