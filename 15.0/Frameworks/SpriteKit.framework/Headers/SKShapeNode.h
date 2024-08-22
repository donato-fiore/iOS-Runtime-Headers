// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SKSHAPENODE_H
#define SKSHAPENODE_H

@class NSDictionary, UIColor;


#import "SKNode.h"
#import "SKShader.h"
#import "SKTexture.h"

@interface SKShapeNode : SKNode {
    *void _skcShapeNode;
}


@property (nonatomic, getter=isAntialiased) BOOL antialiased;
@property (copy, nonatomic) NSDictionary *attributeValues;
@property (nonatomic) NSInteger blendMode;
@property (retain, nonatomic) UIColor *fillColor;
@property (retain, nonatomic) SKShader *fillShader;
@property (retain, nonatomic) SKTexture *fillTexture;
@property (nonatomic) CGFloat glowWidth;
@property (nonatomic) int lineCap;
@property (nonatomic) int lineJoin;
@property (readonly, nonatomic) CGFloat lineLength;
@property (nonatomic) CGFloat lineWidth;
@property (nonatomic) CGFloat miterLimit;
@property (nonatomic) *CGPath path;
@property (nonatomic) CGFloat renderQualityRatio;
@property (retain, nonatomic) UIColor *strokeColor;
@property (retain, nonatomic) SKShader *strokeShader;
@property (retain, nonatomic) SKTexture *strokeTexture;


+(BOOL)supportsSecureCoding;
+(id)debugHierarchyPropertyDescriptions;
+(id)debugHierarchyValueForPropertyWithName:(id)arg0 onObject:(id)arg1 outOptions:(*id)arg2 outError:(*id)arg3 ;
+(id)shapeNodeWithCircleOfRadius:(CGFloat)arg0 ;
+(id)shapeNodeWithEllipseInRect:(struct CGRect )arg0 ;
+(id)shapeNodeWithEllipseOfSize:(struct CGSize )arg0 ;
+(id)shapeNodeWithPath:(struct CGPath *)arg0 ;
+(id)shapeNodeWithPath:(struct CGPath *)arg0 centered:(BOOL)arg1 ;
+(id)shapeNodeWithPoints:(struct CGPoint *)arg0 count:(NSUInteger)arg1 ;
+(id)shapeNodeWithRect:(struct CGRect )arg0 ;
+(id)shapeNodeWithRect:(struct CGRect )arg0 cornerRadius:(CGFloat)arg1 ;
+(id)shapeNodeWithRectOfSize:(struct CGSize )arg0 ;
+(id)shapeNodeWithRectOfSize:(struct CGSize )arg0 cornerRadius:(CGFloat)arg1 ;
+(id)shapeNodeWithSplinePoints:(struct CGPoint *)arg0 count:(NSUInteger)arg1 ;
+(id)shapeNodeWithTriangleA:(struct CGPoint )arg0 B:(struct CGPoint )arg1 C:(struct CGPoint )arg2 ;
-(*void)_makeBackingNode;
-(BOOL)containsPoint:(struct CGPoint )arg0 ;
-(BOOL)isEqualToNode:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)valueForAttributeNamed:(id)arg0 ;
-(void)_didMakeBackingNode;
-(void)_initialize;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setValue:(id)arg0 forAttributeNamed:(id)arg1 ;


@end


#endif