// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVTSTICKERSHADERMODIFIER_H
#define AVTSTICKERSHADERMODIFIER_H

@class NSString, NSDictionary, NSArray;

#import <Foundation/Foundation.h>


@interface AVTStickerShaderModifier : NSObject

@property (readonly, nonatomic) NSString *data; // ivar: _data
@property (retain, nonatomic) NSDictionary *dictionary; // ivar: _dictionary
@property (readonly, nonatomic) NSString *entryPoint; // ivar: _entryPoint
@property (readonly, nonatomic) BOOL forceDoubleSided; // ivar: _forceDoubleSided
@property (readonly, nonatomic) id *nodeNames; // ivar: _nodeNames
@property (readonly, nonatomic) NSArray *properties; // ivar: _properties


+(id)encapsulateShaderData:(id)arg0 ;
+(id)entryPointForModifierName:(id)arg0 ;
+(id)shaderModifierCache;
+(id)shaderModifierFromDictionary:(id)arg0 assetsPath:(id)arg1 ;
-(id)cloneWithProperties:(id)arg0 ;
-(id)description;
-(id)dictionaryWithTargetPath:(id)arg0 ;
-(id)initWithEntryPoint:(id)arg0 nodeNames:(id)arg1 data:(id)arg2 properties:(id)arg3 forceDoubleSided:(BOOL)arg4 ;
-(void)applyToAllMaterialsOfNode:(id)arg0 reversionContext:(id)arg1 ;
-(void)applyToMaterial:(id)arg0 reversionContext:(id)arg1 ;
-(void)applyToMaterialsOfMatchedNodesInHierarchy:(id)arg0 reversionContext:(id)arg1 ;


@end


#endif