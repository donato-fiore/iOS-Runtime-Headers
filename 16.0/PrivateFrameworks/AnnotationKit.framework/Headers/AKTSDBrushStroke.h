// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AKTSDBRUSHSTROKE_H
#define AKTSDBRUSHSTROKE_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>


@interface AKTSDBrushStroke : NSObject

@property (readonly, retain, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) int join; // ivar: _join
@property (readonly, nonatomic) CGFloat miterLimit; // ivar: _miterLimit
@property (readonly, copy, nonatomic) NSString *strokeName; // ivar: _strokeName
@property (readonly, nonatomic) CGFloat width; // ivar: _width


+(Class)mutableClass;
+(id)cacheDirectory;
+(id)strokeWithName:(id)arg0 color:(id)arg1 width:(CGFloat)arg2 ;
+(id)strokeWithType:(NSInteger)arg0 color:(id)arg1 width:(CGFloat)arg2 ;
+(void)loadBrush:(id)arg0 ;
+(void)loadLineEndsForBrush:(id)arg0 inSVGDoc:(struct _xmlDoc *)arg1 ;
+(void)loadSectionsForBrush:(id)arg0 inSVGDoc:(struct _xmlDoc *)arg1 ;
-(id)brushBoundsForId:(id)arg0 ;
-(id)brushPathsForId:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithName:(id)arg0 color:(id)arg1 width:(CGFloat)arg2 join:(int)arg3 miterLimit:(CGFloat)arg4 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)strokeLineEnd:(id)arg0 ;
-(void)brushPath:(id)arg0 inContext:(struct CGContext *)arg1 ;
-(void)brushPath:(id)arg0 withScaling:(struct ? )arg1 inElementRange:(struct _NSRange )arg2 into:(id)arg3 sectionIndex:(*NSUInteger)arg4 viewScale:(CGFloat)arg5 ;
-(void)brushSection:(id)arg0 sectionIndex:(NSUInteger)arg1 ontoPath:(id)arg2 withScaling:(struct ? )arg3 inElementRange:(struct _NSRange )arg4 into:(id)arg5 viewScale:(CGFloat)arg6 ;
-(void)paintLineEnd:(id)arg0 atPoint:(struct CGPoint )arg1 atAngle:(CGFloat)arg2 withScale:(CGFloat)arg3 inContext:(struct CGContext *)arg4 ;
-(void)paintLineEnd:(id)arg0 atPoint:(struct CGPoint )arg1 atAngle:(CGFloat)arg2 withScale:(CGFloat)arg3 inContext:(struct CGContext *)arg4 useFastDrawing:(BOOL)arg5 ;


@end


#endif