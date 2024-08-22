// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TSDPOINTPATHSOURCE_H
#define TSDPOINTPATHSOURCE_H

@protocol TSDMixing, TSDSmartPathSource;


#import "TSDPathSource.h"

@interface TSDPointPathSource : TSDPathSource <TSDMixing, TSDSmartPathSource>



@property CGSize naturalSize; // ivar: mNaturalSize
@property (readonly) NSUInteger numberOfControlKnobs;
@property CGPoint point; // ivar: mPoint
@property int type; // ivar: mType


+(id)doubleArrowWithPoint:(struct CGPoint )arg0 naturalSize:(struct CGSize )arg1 ;
+(id)leftSingleArrowWithPoint:(struct CGPoint )arg0 naturalSize:(struct CGSize )arg1 ;
+(id)pathSourceWithType:(int)arg0 point:(struct CGPoint )arg1 naturalSize:(struct CGSize )arg2 ;
+(id)plusWithPoint:(struct CGPoint )arg0 naturalSize:(struct CGSize )arg1 ;
+(id)rightSingleArrowWithPoint:(struct CGPoint )arg0 naturalSize:(struct CGSize )arg1 ;
+(id)starWithPoint:(struct CGPoint )arg0 naturalSize:(struct CGSize )arg1 ;
-(BOOL)isCircular;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRectangular;
-(BOOL)p_isFlippedDoubleArrow;
-(BOOL)p_isRightFacingArrow;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(NSUInteger)hash;
-(id)bezierPathWithoutFlips;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getFeedbackStringForKnob:(NSUInteger)arg0 ;
-(id)init;
-(id)initWithType:(int)arg0 point:(struct CGPoint )arg1 naturalSize:(struct CGSize )arg2 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)valueForSetSelector:(SEL)arg0 ;
-(struct CGPath *)newFeedbackPathForKnob:(NSUInteger)arg0 ;
-(struct CGPath *)p_newArrowPath;
-(struct CGPath *)p_newPlusPath;
-(struct CGPath *)p_newStarPath;
-(struct CGPoint )getControlKnobPosition:(NSUInteger)arg0 ;
-(struct CGPoint )maxPointValue;
-(struct CGPoint )minPointValue;
-(struct CGPoint )p_getControlKnobPointForArrow;
-(struct CGPoint )p_getControlKnobPointForPlus;
-(struct CGPoint )p_getControlKnobPointForStarInnerRadius;
-(struct CGPoint )p_getControlKnobPointForStarPoints;
-(struct CGSize )scaleFactorForInscribedRectangle;
-(void)p_setControlKnobPointForArrow:(struct CGPoint )arg0 ;
-(void)p_setControlKnobPointForPlus:(struct CGPoint )arg0 ;
-(void)p_setControlKnobPointForStarInnerRadius:(struct CGPoint )arg0 ;
-(void)p_setControlKnobPointForStarPoints:(struct CGPoint )arg0 ;
-(void)scaleToNaturalSize:(struct CGSize )arg0 ;
-(void)setControlKnobPosition:(NSUInteger)arg0 toPoint:(struct CGPoint )arg1 ;


@end


#endif