// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHCONCRETENODE_H
#define PGGRAPHCONCRETENODE_H

@class NSMutableDictionary, NSString;


#import "PGGraphNode.h"

@interface PGGraphConcreteNode : PGGraphNode {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    NSString *_label;
}




-(BOOL)hasProperties;
-(NSUInteger)propertiesCount;
-(id)UUID;
-(id)_stringValueForPropertyWithKey:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)label;
-(id)name;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(id)propertyKeys;
-(unsigned short)domain;
-(void)enumeratePropertiesUsingBlock:(id)arg0 ;


@end


#endif