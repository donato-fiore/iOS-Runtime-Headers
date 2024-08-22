// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDCALLOUTPATHSOURCE_H
#define TSDCALLOUTPATHSOURCE_H

@protocol TSDSmartPathSource, TSDMixing;


#import "TSDPathSource.h"

@interface TSDCalloutPathSource : TSDPathSource <TSDSmartPathSource, TSDMixing>

 {
    CGSize _naturalSize;
}


@property (readonly, nonatomic) CGFloat clampedCalloutTailSize;
@property (readonly, nonatomic) CGFloat clampedCornerRadius;
@property (nonatomic) CGFloat cornerRadius; // ivar: _cornerRadius
@property (readonly, nonatomic) BOOL isTailAtCenter; // ivar: _isTailAtCenter
@property (readonly, nonatomic) CGFloat maxCornerRadius;
@property (readonly, nonatomic) CGFloat maxTailSize;
@property (readonly, nonatomic) CGFloat minCornerRadius;
@property (readonly, nonatomic) CGFloat minTailSize;
@property (nonatomic) CGPoint rawTailPosition; // ivar: _tailPosition
@property (nonatomic) CGPoint tailKnobPosition;
@property (nonatomic) CGFloat tailSize; // ivar: _tailSize
@property (nonatomic) CGPoint tailSizeKnobPosition;


+(id)calloutWithCornerRadius:(CGFloat)arg0 tailPosition:(struct CGPoint )arg1 tailSize:(CGFloat)arg2 naturalSize:(struct CGSize )arg3 ;
+(id)quoteBubbleWithTailPosition:(struct CGPoint )arg0 tailSize:(CGFloat)arg1 naturalSize:(struct CGSize )arg2 ;
-(BOOL)isCircular;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isOval;
-(BOOL)isRectangular;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(NSUInteger)numberOfControlKnobs;
-(id)bezierPathWithoutFlips;
-(id)copy;
-(id)description;
-(id)inferredAccessibilityDescription;
-(id)init;
-(id)initWithArchive:(*void)arg0 ;
-(id)initWithCornerRadius:(CGFloat)arg0 tailPosition:(struct CGPoint )arg1 tailSize:(CGFloat)arg2 naturalSize:(struct CGSize )arg3 tailAtCenter:(BOOL)arg4 ;
-(id)interiorWrapPath;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)name;
-(id)p_basePath;
-(id)p_buildPath;
-(struct CGPoint )getControlKnobPosition:(NSUInteger)arg0 ;
-(struct CGPoint )p_adjustedCenterForPath:(id)arg0 ;
-(struct CGPoint )p_getControlKnobPointForRoundedRect;
-(struct CGPoint )p_tailCenter;
-(struct CGPoint )p_tailPosition;
-(struct CGSize )naturalSize;
-(void)p_getTailPath:(id)arg0 center:(struct CGPoint *)arg1 tailSize:(*CGFloat)arg2 intersections:(struct CGPoint )arg3 ;
-(void)p_setControlKnobPointForRoundedRect:(struct CGPoint )arg0 ;
-(void)p_setNaturalSize:(struct CGSize )arg0 ;
-(void)p_setTailAtCenter:(BOOL)arg0 ;
-(void)p_setTailPosition:(struct CGPoint )arg0 ;
-(void)saveToArchive:(*void)arg0 ;
-(void)scaleToNaturalSize:(struct CGSize )arg0 ;
-(void)setNaturalSize:(struct CGSize )arg0 ;


@end


#endif