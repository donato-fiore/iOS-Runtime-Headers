// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SKLIGHTNODE_H
#define SKLIGHTNODE_H

@class UIColor;


#import "SKNode.h"

@interface SKLightNode : SKNode {
    *void _skcLightNode;
}


@property (retain, nonatomic) UIColor *ambientColor;
@property (nonatomic) unsigned int categoryBitMask;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (nonatomic) CGFloat falloff;
@property (retain, nonatomic) UIColor *lightColor;
@property (retain, nonatomic) UIColor *shadowColor;


+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg0 onObject:(id)arg1 outOptions:(*id)arg2 outError:(*id)arg3 ;
-(*void)_makeBackingNode;
-(BOOL)isEqualToNode:(id)arg0 ;
-(CGFloat)lightDecay;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(unsigned int)lightCategoryBitMask;
-(void)_didMakeBackingNode;
-(void)commonInit;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setLightCategoryBitMask:(unsigned int)arg0 ;
-(void)setLightDecay:(CGFloat)arg0 ;


@end


#endif