// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PGGRAPHPERFORMERNODE_H
#define PGGRAPHPERFORMERNODE_H

@class NSString, PPNamedEntity;
@protocol PGGraphPortraitNamedEntity, PGAssetCollectionFeature;


#import "PGGraphOptimizedNode.h"
#import "PGGraphPerformerNodeCollection.h"

@interface PGGraphPerformerNode : PGGraphOptimizedNode <PGGraphPortraitNamedEntity, PGAssetCollectionFeature>



@property (readonly, nonatomic) PGGraphPerformerNodeCollection *collection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *featureIdentifier;
@property (readonly, nonatomic) NSUInteger featureType;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly) NSString *name; // ivar: _name
@property (readonly, nonatomic) PPNamedEntity *pg_namedEntity;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) NSString *uuid; // ivar: _uuid


+(id)filter;
-(BOOL)hasProperties:(id)arg0 ;
-(id)initWithLabel:(id)arg0 domain:(unsigned short)arg1 properties:(id)arg2 ;
-(id)initWithName:(id)arg0 uuid:(id)arg1 ;
-(id)label;
-(id)propertyDictionary;
-(unsigned short)domain;


@end


#endif