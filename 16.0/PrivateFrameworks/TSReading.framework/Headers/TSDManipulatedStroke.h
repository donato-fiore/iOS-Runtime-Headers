// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDMANIPULATEDSTROKE_H
#define TSDMANIPULATEDSTROKE_H

@class NSMutableDictionary;


#import "TSDSmartStroke.h"
#import "TSDPathManipulation.h"

@interface TSDManipulatedStroke : TSDSmartStroke {
    NSMutableDictionary *mArrows;
}


@property (retain, nonatomic) TSDPathManipulation *pathManipulation; // ivar: mManipulation
@property (nonatomic) unsigned int randomSeed; // ivar: mRandomSeed


+(Class)mutableClass;
-(BOOL)canApplyToShapeRenderable;
-(BOOL)drawsOutsideStrokeBounds;
-(BOOL)prefersToApplyToShapeRenderableDuringManipulation;
-(CGFloat)renderedWidth;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithName:(id)arg0 color:(id)arg1 width:(CGFloat)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(CGFloat)arg6 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)strokeLineEnd:(id)arg0 ;
-(struct CGPath *)manipulatePath:(struct CGPath *)arg0 withLineWidth:(CGFloat)arg1 ;
-(struct CGPath *)pathToStrokeFromCGPath:(struct CGPath *)arg0 ;
-(struct CGPath *)strokedPath:(struct CGPath *)arg0 withLineWidth:(CGFloat)arg1 insideStroke:(BOOL)arg2 ;
-(void)applyInteriorWrapPropertiesInContext:(struct CGContext *)arg0 insideStroke:(BOOL)arg1 ;
-(void)dealloc;
-(void)p_setupDoodlesManipulation;
-(void)paintPath:(struct CGPath *)arg0 wantsInteriorStroke:(BOOL)arg1 inContext:(struct CGContext *)arg2 useFastDrawing:(BOOL)arg3 parameterized:(BOOL)arg4 shouldReverseDrawOrder:(BOOL)arg5 ;
-(void)seedRandom;


@end


#endif