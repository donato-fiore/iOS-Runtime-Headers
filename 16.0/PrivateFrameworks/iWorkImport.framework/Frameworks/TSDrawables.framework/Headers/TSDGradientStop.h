// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TSDGRADIENTSTOP_H
#define TSDGRADIENTSTOP_H

@class TSUColor;
@protocol TSDMixing, NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface TSDGradientStop : NSObject <TSDMixing, NSCopying, NSMutableCopying>



@property (readonly, copy, nonatomic) TSUColor *color; // ivar: mColor
@property (readonly, nonatomic) CGFloat fraction; // ivar: mFraction
@property (readonly, nonatomic) CGFloat inflection; // ivar: mInflection


+(id)gradientStopWithColor:(id)arg0 fraction:(CGFloat)arg1 ;
+(id)gradientStopWithColor:(id)arg0 fraction:(CGFloat)arg1 inflection:(CGFloat)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)mixingTypeWithObject:(id)arg0 context:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)gradientStopWithColor:(id)arg0 ;
-(id)gradientStopWithInflection:(CGFloat)arg0 ;
-(id)initWithArchive:(*void)arg0 unarchiver:(id)arg1 ;
-(id)initWithColor:(id)arg0 fraction:(CGFloat)arg1 ;
-(id)initWithColor:(id)arg0 fraction:(CGFloat)arg1 inflection:(CGFloat)arg2 ;
-(id)initWithGradientStop:(id)arg0 ;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)saveToArchive:(*void)arg0 archiver:(id)arg1 ;


@end


#endif