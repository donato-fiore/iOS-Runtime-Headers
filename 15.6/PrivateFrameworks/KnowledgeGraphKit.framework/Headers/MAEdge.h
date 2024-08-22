// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MAEDGE_H
#define MAEDGE_H

@class NSString, NSArray, NSDictionary;
@protocol MAElement, NSCopying, KGEdge, MAGraphProxy;

#import <Foundation/Foundation.h>

#import "MAGraphReference.h"
#import "MANode.h"

@interface MAEdge : NSObject <MAElement, NSCopying, KGEdge>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) unsigned short domain;
@property (readonly, nonatomic) NSObject<MAGraphProxy> *graph;
@property (retain, nonatomic) MAGraphReference *graphReference; // ivar: _graphReference
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSString *label;
@property (readonly, copy, nonatomic) NSArray *labels;
@property (readonly, copy, nonatomic) NSDictionary *properties;
@property (readonly, nonatomic) MANode *sourceNode; // ivar: _sourceNode
@property (readonly) Class superclass;
@property (readonly, nonatomic) MANode *targetNode; // ivar: _targetNode
@property (readonly, nonatomic) float weight;


-(BOOL)conformsToEdgeSchema:(id)arg0 ;
-(BOOL)hasEqualPropertiesToEdge:(id)arg0 ;
-(BOOL)hasProperties;
-(BOOL)hasProperties:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToEdge:(id)arg0 ;
-(BOOL)isIdentifiedByProperties:(id)arg0 ;
-(BOOL)isLoop;
-(BOOL)isSameEdgeAsEdge:(id)arg0 ;
-(BOOL)isUnique;
-(NSUInteger)memoryFootprint:(id)arg0 ;
-(id)commonNode:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(NSUInteger)arg0 labels:(id)arg1 weight:(float)arg2 properties:(id)arg3 sourceNode:(id)arg4 targetNode:(id)arg5 ;
-(id)initWithLabel:(id)arg0 sourceNode:(id)arg1 targetNode:(id)arg2 domain:(unsigned short)arg3 weight:(float)arg4 properties:(id)arg5 ;
-(id)initWithSourceNode:(id)arg0 targetNode:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)oppositeNode:(id)arg0 ;
-(id)oppositeNodeFromNode:(id)arg0 ;
-(id)propertyDictionary;
-(id)propertyForKey:(id)arg0 ;
-(id)propertyForKey:(id)arg0 kindOfClass:(Class)arg1 ;
-(id)propertyKeys;
-(id)shortDescription;
-(id)visualString;
-(id)visualStringWithName:(id)arg0 ;
-(id)visualStringWithName:(id)arg0 andPropertyKeys:(id)arg1 ;
-(void)enumeratePropertiesUsingBlock:(id)arg0 ;
-(void)resolveIdentifier:(NSUInteger)arg0 ;


@end


#endif