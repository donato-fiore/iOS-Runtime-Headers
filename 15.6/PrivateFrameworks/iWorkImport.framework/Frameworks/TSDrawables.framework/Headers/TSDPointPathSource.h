// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDPOINTPATHSOURCE_H
#define TSDPOINTPATHSOURCE_H

@protocol TSDMixing, TSDSmartPathSource;


#import "TSDPathSource.h"

@interface TSDPointPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource>

 {
    CGSize mNaturalSize;
}


@property (readonly, nonatomic) CGFloat arrowHead;
@property (readonly, nonatomic) CGFloat arrowIndent;
@property (readonly, nonatomic) CGFloat maxArrowHead;
@property (readonly, nonatomic) CGFloat maxArrowIndent;
@property (readonly, nonatomic) CGPoint maxPointValue;
@property (readonly, nonatomic) NSUInteger maxStarPoints;
@property (readonly, nonatomic) CGFloat maxStarRadius;
@property (readonly, nonatomic) CGFloat minArrowHead;
@property (readonly, nonatomic) CGFloat minArrowIndent;
@property (readonly, nonatomic) CGPoint minPointValue;
@property (readonly, nonatomic) NSUInteger minStarPoints;
@property (readonly, nonatomic) CGFloat minStarRadius;
@property (nonatomic) CGPoint point; // ivar: mPoint
@property (readonly, nonatomic) NSUInteger starPoints;
@property (readonly, nonatomic) CGFloat starRadius;
@property (nonatomic) NSUInteger type; // ivar: mType


+(id)doubleArrowWithPoint:(struct CGPoint )arg0 naturalSize:(struct CGSize )arg1 ;
+(id)leftSingleArrowWithPoint:(struct CGPoint )arg0 naturalSize:(struct CGSize )arg1 ;
+(id)pathSourceWithType:(NSUInteger)arg0 point:(struct CGPoint )arg1 naturalSize:(struct CGSize )arg2 ;
+(id)plusWithPoint:(struct CGPoint )arg0 naturalSize:(struct CGSize )arg1 ;
+(id)rightSingleArrowWithPoint:(struct CGPoint )arg0 naturalSize:(struct CGSize )arg1 ;
+(id)starWithPoint:(struct CGPoint )arg0 naturalSize:(struct CGSize )arg1 ;
-(BOOL)isCircular;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRectangular;
-(BOOL)p_isArrowType;
-(BOOL)p_isFlippedDoubleArrow;
-(BOOL)p_isRightFacingArrow;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(NSUInteger)numberOfControlKnobs;
-(id)bezierPathWithoutFlips;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)inferredAccessibilityDescription;
-(id)init;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithType:(NSUInteger)arg0 point:(struct CGPoint )arg1 naturalSize:(struct CGSize )arg2 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)name;
-(struct CGPath *)p_newArrowPath;
-(struct CGPath *)p_newPlusPath;
-(struct CGPath *)p_newStarPath;
-(struct CGPoint )getControlKnobPosition:(NSUInteger)arg0 ;
-(struct CGPoint )p_getControlKnobPointForArrow;
-(struct CGPoint )p_getControlKnobPointForPlus;
-(struct CGPoint )p_getControlKnobPointForStarInnerRadius;
-(struct CGPoint )p_getControlKnobPointForStarPoints;
-(struct CGSize )naturalSize;
-(void)p_setControlKnobPointForArrow:(struct CGPoint )arg0 ;
-(void)p_setControlKnobPointForPlus:(struct CGPoint )arg0 ;
-(void)p_setControlKnobPointForStarInnerRadius:(struct CGPoint )arg0 ;
-(void)p_setControlKnobPointForStarPoints:(struct CGPoint )arg0 ;
-(void)saveToArchive:(*void)arg0 ;
-(void)scaleToNaturalSize:(struct CGSize )arg0 ;
-(void)setNaturalSize:(struct CGSize )arg0 ;


@end


#endif