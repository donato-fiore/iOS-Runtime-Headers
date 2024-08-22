// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDSMARTSTROKE_H
#define TSDSMARTSTROKE_H

@class NSString;


#import "TSDStroke.h"

@interface TSDSmartStroke : TSDStroke {
    NSString *mStrokeName;
}


@property (readonly, nonatomic) CGFloat deprecatedPatternOffsetDistance; // ivar: mDeprecatedPatternOffsetDistance
@property (readonly, copy, nonatomic) NSString *strokeName;


+(Class)classForName:(id)arg0 ;
+(id)p_mapOfStrokeNamesToAlternatesForOldVersions;
+(id)strokeWithName:(id)arg0 color:(id)arg1 width:(CGFloat)arg2 ;
-(BOOL)canApplyDirectlyToRepRenderable;
-(BOOL)canDrawWithOtherStroke:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)shouldAntialiasDefeat;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithName:(id)arg0 color:(id)arg1 width:(CGFloat)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 ;
-(id)initWithName:(id)arg0 color:(id)arg1 width:(CGFloat)arg2 cap:(int)arg3 join:(int)arg4 pattern:(id)arg5 miterLimit:(CGFloat)arg6 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif