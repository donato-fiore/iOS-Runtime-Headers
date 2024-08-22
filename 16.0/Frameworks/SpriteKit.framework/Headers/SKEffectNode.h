// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKEFFECTNODE_H
#define SKEFFECTNODE_H

@class NSDictionary, NSString, CIFilter;
@protocol SKWarpable;


#import "SKNode.h"
#import "SKShader.h"
#import "SKWarpGeometry.h"

@interface SKEffectNode : SKNode <SKWarpable>

 {
    *void _skcEffectNode;
}


@property (copy, nonatomic) NSDictionary *attributeValues;
@property (nonatomic) NSInteger blendMode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) CIFilter *filter;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) SKShader *shader;
@property (nonatomic) BOOL shouldCenterFilter;
@property (nonatomic) BOOL shouldEnableEffects;
@property (nonatomic) BOOL shouldRasterize;
@property (nonatomic) NSInteger subdivisionLevels;
@property (readonly) Class superclass;
@property (retain, nonatomic) SKWarpGeometry *warpGeometry;


+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg0 onObject:(id)arg1 outOptions:(*id)arg2 outError:(*id)arg3 ;
-(*void)_makeBackingNode;
-(BOOL)isEqualToNode:(id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)valueForAttributeNamed:(id)arg0 ;
-(void)_didMakeBackingNode;
-(void)_flippedChangedFrom:(BOOL)arg0 to:(BOOL)arg1 ;
-(void)_scaleFactorChangedFrom:(float)arg0 to:(float)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValue:(id)arg0 forAttributeNamed:(id)arg1 ;


@end


#endif