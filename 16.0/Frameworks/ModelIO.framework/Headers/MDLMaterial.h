// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MDLMATERIAL_H
#define MDLMATERIAL_H

@class NSMutableArray, NSString;
@protocol MDLNamed, NSFastEnumeration;

#import <Foundation/Foundation.h>

#import "MDLScatteringFunction.h"
#import "MDLMaterial.h"

@interface MDLMaterial : NSObject <MDLNamed, NSFastEnumeration>

 {
    NSMutableArray *_userProperties;
    NSMutableArray *_builtinProperties;
    MDLScatteringFunction *_scatteringFunction;
}


@property (retain, nonatomic) MDLMaterial *baseMaterial; // ivar: _baseMaterial
@property (readonly, nonatomic) NSUInteger count;
@property (nonatomic) NSUInteger materialFace; // ivar: _materialFace
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (readonly, retain, nonatomic) MDLScatteringFunction *scatteringFunction;


+(id)decodeMaterialWithCoder:(id)arg0 allocator:(id)arg1 ;
-(NSUInteger)countByEnumeratingWithState:(struct ? *)arg0 objects:(*id)arg1 count:(NSUInteger)arg2 ;
-(id)init;
-(id)initWithName:(id)arg0 physicallyPlausibleBSDF:(struct PhysicallyPlausibleDistribution *)arg1 ;
-(id)initWithName:(id)arg0 scatteringFunction:(id)arg1 ;
-(id)objectAtIndexedSubscript:(NSUInteger)arg0 ;
-(id)objectForKeyedSubscript:(id)arg0 ;
-(id)propertiesWithSemantic:(NSUInteger)arg0 ;
-(id)propertyNamed:(id)arg0 ;
-(id)propertyWithSemantic:(NSUInteger)arg0 ;
-(struct BidirectionalScatteringDistributionFunction *)bsdf;
-(void)conformToMatProperties;
-(void)encodeMaterialWithCoder:(id)arg0 allocator:(id)arg1 ;
-(void)loadTexturesUsingArchiveAssetResolver:(id)arg0 cache:(id)arg1 ;
-(void)loadTexturesUsingResolver:(id)arg0 ;
-(void)loadTexturesUsingResolver:(id)arg0 cache:(id)arg1 ;
-(void)removeAllProperties;
-(void)removeProperty:(id)arg0 ;
-(void)resolveTexturesWithResolver:(id)arg0 ;
-(void)setProperty:(id)arg0 ;


@end


#endif