// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDSCALARPATHSOURCE_H
#define TSDSCALARPATHSOURCE_H

@protocol TSDMixing, TSDSmartPathSource;


#import "TSDPathSource.h"

@interface TSDScalarPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource>

 {
    CGSize mNaturalSize;
}


@property (readonly, nonatomic) CGFloat cornerRadius;
@property (nonatomic) BOOL isCurveContinuous; // ivar: mIsCurveContinuous
@property (readonly, nonatomic) CGFloat maxCornerRadius;
@property (readonly, nonatomic) CGFloat maxScalar;
@property (readonly, nonatomic) NSUInteger numberOfSides;
@property (nonatomic) CGFloat scalar; // ivar: mScalar
@property (nonatomic) NSUInteger type; // ivar: mType


+(id)chevronWithScalar:(CGFloat)arg0 naturalSize:(struct CGSize )arg1 ;
+(id)pathSourceWithType:(NSUInteger)arg0 scalar:(CGFloat)arg1 naturalSize:(struct CGSize )arg2 ;
+(id)rectangleWithNaturalSize:(struct CGSize )arg0 ;
+(id)regularPolygonWithScalar:(CGFloat)arg0 naturalSize:(struct CGSize )arg1 ;
+(id)roundedRectangleWithScalar:(CGFloat)arg0 naturalSize:(struct CGSize )arg1 continuousCurve:(BOOL)arg2 ;
-(BOOL)isCircular;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRectangular;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(NSUInteger)numberOfControlKnobs;
-(id)bezierPathWithoutFlips;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)inferredAccessibilityDescription;
-(id)init;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithType:(NSUInteger)arg0 scalar:(CGFloat)arg1 naturalSize:(struct CGSize )arg2 continuousCurve:(BOOL)arg3 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)name;
-(struct CGPath *)p_newChevronPath;
-(struct CGPath *)p_newRegularPolygonPath;
-(struct CGPath *)p_newRoundedRectPath;
-(struct CGPoint )getControlKnobPosition:(NSUInteger)arg0 ;
-(struct CGPoint )p_getControlKnobPointForChevron;
-(struct CGPoint )p_getControlKnobPointForRegularPolygon;
-(struct CGPoint )p_getControlKnobPointForRoundedRect;
-(struct CGSize )naturalSize;
-(void)p_setControlKnobPointForChevron:(struct CGPoint )arg0 ;
-(void)p_setControlKnobPointForRegularPolygon:(struct CGPoint )arg0 ;
-(void)p_setControlKnobPointForRoundedRect:(struct CGPoint )arg0 ;
-(void)saveToArchive:(*void)arg0 ;
-(void)scaleToNaturalSize:(struct CGSize )arg0 ;
-(void)setNaturalSize:(struct CGSize )arg0 ;


@end


#endif