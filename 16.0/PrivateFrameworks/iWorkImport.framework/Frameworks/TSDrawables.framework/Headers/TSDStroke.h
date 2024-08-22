// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDSTROKE_H
#define TSDSTROKE_H

@class TSUColor, NSString;
@protocol TSSPropertyCommandSerializing, TSDPathPainter, TSDMixing, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "TSDStrokePattern.h"

@interface TSDStroke : NSObject <TSSPropertyCommandSerializing, TSDPathPainter, TSDMixing, NSCopying, NSMutableCopying>



@property (readonly, nonatomic) CGFloat actualWidth;
@property (readonly, nonatomic) int cap;
@property (readonly, copy, nonatomic) TSUColor *color;
@property (readonly, nonatomic) CGFloat dashSpacing;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL drawsInOneStep;
@property (readonly, nonatomic) BOOL drawsOutsideStrokeBounds;
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (nonatomic) CGFloat i_actualWidth; // ivar: _actualWidth
@property (nonatomic, setter=i_setCap:) int i_cap; // ivar: _cap
@property (copy, nonatomic) TSUColor *i_color; // ivar: _color
@property (nonatomic) int i_join; // ivar: _join
@property (nonatomic) CGFloat i_miterLimit; // ivar: _miterLimit
@property (copy, nonatomic, setter=i_setPattern:) TSDStrokePattern *i_pattern; // ivar: _pattern
@property (nonatomic) CGFloat i_width; // ivar: _width
@property (readonly, nonatomic) BOOL isDash;
@property (readonly, nonatomic) BOOL isFrame;
@property (readonly, nonatomic) BOOL isNearlyWhite;
@property (readonly, nonatomic) BOOL isNullStroke;
@property (readonly, nonatomic) BOOL isRoundDash;
@property (readonly, nonatomic) int join;
@property (readonly, nonatomic) CGFloat miterLimit;
@property (readonly, nonatomic) BOOL needsToExtendJoinsForBoundsCalculation;
@property (readonly, nonatomic) _TSDStrokeOutsets outsets;
@property (readonly, copy, nonatomic) TSDStrokePattern *pattern;
@property (readonly, nonatomic) CGFloat renderedWidth;
@property (readonly, nonatomic) BOOL shouldAntialiasDefeat;
@property (readonly, nonatomic) BOOL shouldRender;
@property (readonly, nonatomic) CGFloat suggestedMinimumLineWidth;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) BOOL supportsColor;
@property (readonly, nonatomic) BOOL supportsLineOptions;
@property (readonly, nonatomic) BOOL supportsPattern;
@property (readonly, nonatomic) BOOL supportsWidth;
@property (readonly, nonatomic) BOOL usesOpenGL;
@property (readonly, nonatomic) CGFloat width;


+(BOOL)canMixWithNilObjects;
+(Class)mutableClass;
+(NSInteger)indexOfStroke:(id)arg0 strokeArray:(id)arg1 ;
+(id)editedStrokeFromModelStroke:(id)arg0 selectedStroke:(id)arg1 ;
+(id)emptyStroke;
+(id)i_newEmptyStroke;
+(id)i_newStroke;
+(id)instanceWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
+(id)stroke;
+(id)strokeWithColor:(id)arg0 width:(CGFloat)arg1 ;
+(id)strokeWithColor:(id)arg0 width:(CGFloat)arg1 cap:(int)arg2 join:(int)arg3 pattern:(id)arg4 ;
-(BOOL)canDrawWithOtherStroke:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)requiresOutlineOnBackgroundWithAppearance:(NSUInteger)arg0 ;
-(CGFloat)horizontalMarginForSwatch;
-(CGFloat)lineEndInsetAdjustment;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(id)colorForCGContext:(struct CGContext *)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initFromPropertyCommandMessage:(struct Message *)arg0 unarchiver:(id)arg1 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithColor:(id)arg0 width:(CGFloat)arg1 cap:(int)arg2 join:(int)arg3 pattern:(id)arg4 ;
-(id)initWithColor:(id)arg0 width:(CGFloat)arg1 cap:(int)arg2 join:(int)arg3 pattern:(id)arg4 miterLimit:(CGFloat)arg5 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)pathForLineEnd:(id)arg0 wrapPath:(BOOL)arg1 atPoint:(struct CGPoint )arg2 atAngle:(CGFloat)arg3 withScale:(CGFloat)arg4 ;
-(id)pathToStrokeFromTSUBezierPath:(id)arg0 ;
-(id)strokeByTransformingByTransform:(struct CGAffineTransform )arg0 ;
-(id)strokeLineEnd:(id)arg0 ;
-(struct CGPath *)pathToStrokeFromCGPath:(struct CGPath *)arg0 ;
-(struct CGRect )boundsForLineEnd:(id)arg0 atPoint:(struct CGPoint )arg1 atAngle:(CGFloat)arg2 withScale:(CGFloat)arg3 transform:(struct CGAffineTransform )arg4 ;
-(struct CGRect )boundsForPath:(id)arg0 ;
-(void)applyInteriorWrapPropertiesToContext:(struct CGContext *)arg0 insideStroke:(BOOL)arg1 ;
-(void)applyToContext:(struct CGContext *)arg0 ;
-(void)applyToContext:(struct CGContext *)arg0 insideStroke:(BOOL)arg1 ;
-(void)drawSwatchInRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)i_setPropertiesFromStroke:(id)arg0 ;
-(void)p_strokePathChunk:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 wantsInteriorStroke:(BOOL)arg2 ;
-(void)paintLineEnd:(id)arg0 atPoint:(struct CGPoint )arg1 atAngle:(CGFloat)arg2 withScale:(CGFloat)arg3 inContext:(struct CGContext *)arg4 ;
-(void)paintLineEnd:(id)arg0 atPoint:(struct CGPoint )arg1 atAngle:(CGFloat)arg2 withScale:(CGFloat)arg3 inContext:(struct CGContext *)arg4 useFastDrawing:(BOOL)arg5 ;
-(void)paintPath:(struct CGPath *)arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintPath:(struct CGPath *)arg0 wantsInteriorStroke:(BOOL)arg1 inContext:(struct CGContext *)arg2 ;
-(void)paintPath:(struct CGPath *)arg0 wantsInteriorStroke:(BOOL)arg1 inContext:(struct CGContext *)arg2 useFastDrawing:(BOOL)arg3 parameterized:(BOOL)arg4 shouldReverseDrawOrder:(BOOL)arg5 ;
-(void)paintRect:(struct CGRect )arg0 inContext:(struct CGContext *)arg1 ;
-(void)paintRect:(struct CGRect )arg0 wantsInteriorStroke:(BOOL)arg1 inContext:(struct CGContext *)arg2 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;
-(void)saveToPropertyCommandMessage:(struct Message *)arg0 archiver:(id)arg1 ;


@end


#endif