// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MACONCRETEEDGE_H
#define MACONCRETEEDGE_H

@class NSMutableDictionary, NSString;


#import "MAEdge.h"

@interface MAConcreteEdge : MAEdge {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    float _weight;
    NSString *_label;
}




-(BOOL)hasProperties;
-(NSUInteger)memoryFootprint:(id)arg0 ;
-(NSUInteger)propertiesCount;
-(float)weight;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)label;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(id)propertyKeys;
-(unsigned short)domain;
-(void)enumeratePropertiesUsingBlock:(id)arg0 ;


@end


#endif