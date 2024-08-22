// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MACONCRETENODE_H
#define MACONCRETENODE_H

@class NSMutableDictionary, NSString;


#import "MANode.h"

@interface MAConcreteNode : MANode {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    float _weight;
    NSString *_label;
}




-(BOOL)hasProperties;
-(NSUInteger)memoryFootprint:(id)arg0 ;
-(NSUInteger)propertiesCount;
-(float)weight;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 weight:(float)arg2 properties:(id)arg3 ;
-(id)label;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(id)propertyKeys;
-(unsigned short)domain;
-(void)enumeratePropertiesUsingBlock:(id)arg0 ;


@end


#endif