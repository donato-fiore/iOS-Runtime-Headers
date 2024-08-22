// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef POXSCOMPLEXTYPEDEFINITION_H
#define POXSCOMPLEXTYPEDEFINITION_H

@class NSMutableArray, NSMutableDictionary, NSArray, NSString;


#import "POXSDefinition.h"

@interface POXSComplexTypeDefinition : POXSDefinition {
    NSMutableArray *_attributes;
    NSMutableArray *_elements;
    NSMutableDictionary *_elementAttributes;
    NSMutableDictionary *_attributeAttributes;
    NSMutableArray *_namespaces;
    NSMutableDictionary *_properties;
}


@property (readonly, copy, nonatomic) NSArray *attributes;
@property (readonly, copy, nonatomic) NSString *contentPropertyName; // ivar: _contentPropertyName
@property (readonly, copy, nonatomic) NSArray *elements;
@property (readonly, copy, nonatomic) NSArray *namespaces;


+(id)_descriptionForValue:(id)arg0 prefix:(id)arg1 ;
+(id)descriptionForValue:(id)arg0 ;
-(BOOL)flattenMultiValueElementWithName:(id)arg0 ;
-(NSUInteger)maxCountForElementName:(id)arg0 ;
-(NSUInteger)minCountForElementName:(id)arg0 ;
-(id)_attributeForName:(id)arg0 ofAttributeWithName:(id)arg1 ;
-(id)_attributeForName:(id)arg0 ofElementWithName:(id)arg1 ;
-(id)_attributeForName:(id)arg0 ofNodeWithName:(id)arg1 attributes:(id)arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)isSpecifiedKeyForAttributeName:(id)arg0 ;
-(id)isSpecifiedKeyForElementName:(id)arg0 ;
-(id)namespaceForAttributeName:(id)arg0 ;
-(id)propertyForName:(id)arg0 ;
-(void)_setAttribute:(id)arg0 forName:(id)arg1 ofAttributeWithName:(id)arg2 ;
-(void)_setAttribute:(id)arg0 forName:(id)arg1 ofElementWithName:(id)arg2 ;
-(void)_setAttribute:(id)arg0 forName:(id)arg1 ofNodeWithName:(id)arg2 attributes:(id)arg3 ;
-(void)addAttributeWithName:(id)arg0 type:(Class)arg1 ;
-(void)addAttributeWithName:(id)arg0 type:(Class)arg1 isSpecifiedKey:(id)arg2 ;
-(void)addAttributeWithName:(id)arg0 type:(Class)arg1 namespaceURI:(id)arg2 ;
-(void)addElementWithName:(id)arg0 namespaceURI:(id)arg1 type:(Class)arg2 ;
-(void)addElementWithName:(id)arg0 namespaceURI:(id)arg1 type:(Class)arg2 isSpecifiedKey:(id)arg3 ;
-(void)addElementWithName:(id)arg0 namespaceURI:(id)arg1 type:(Class)arg2 maxOccurs:(NSUInteger)arg3 minOccurs:(NSUInteger)arg4 ;
-(void)addElementWithName:(id)arg0 namespaceURI:(id)arg1 type:(Class)arg2 maxOccurs:(NSUInteger)arg3 minOccurs:(NSUInteger)arg4 flattenMultiValue:(BOOL)arg5 ;
-(void)addNamespaceWithURI:(id)arg0 ;
-(void)addUnboundedElementWithName:(id)arg0 namespaceURI:(id)arg1 type:(Class)arg2 ;
-(void)setIsSpecifiedKey:(id)arg0 onElementWithName:(id)arg1 ;
-(void)setProperty:(id)arg0 forName:(id)arg1 ;


@end


#endif