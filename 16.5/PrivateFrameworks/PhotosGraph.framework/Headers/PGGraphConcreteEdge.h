// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PGGRAPHCONCRETEEDGE_H
#define PGGRAPHCONCRETEEDGE_H

@class NSMutableDictionary, NSString;


#import "PGGraphEdge.h"

@interface PGGraphConcreteEdge : PGGraphEdge {
    NSMutableDictionary *_properties;
    unsigned short _domain;
    NSString *_label;
}




-(BOOL)hasProperties;
-(NSUInteger)propertiesCount;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 properties:(id)arg4 ;
-(id)label;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(id)propertyKeys;
-(unsigned short)domain;
-(void)enumeratePropertiesUsingBlock:(id)arg0 ;


@end


#endif