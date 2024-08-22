// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TSDPATHSOURCE_H
#define TSDPATHSOURCE_H

@protocol TSDMixing, NSCopying;

#import <Foundation/Foundation.h>


@interface TSDPathSource : NSObject <TSDMixing, NSCopying>



@property BOOL hasHorizontalFlip; // ivar: mHorizontalFlip
@property BOOL hasVerticalFlip; // ivar: mVerticalFlip


+(id)pathSourceForShapeType:(int)arg0 naturalSize:(struct CGSize )arg1 ;
-(BOOL)isCircular;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isRectangular;
-(BOOL)isRectangularForever;
-(CGFloat)uniformScaleForScalingToNaturalSize:(struct CGSize )arg0 ;
-(Class)preferredControllerClass;
-(NSInteger)mixingTypeWithObject:(id)arg0 ;
-(id)bezierPath;
-(id)bezierPathWithoutFlips;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)interiorWrapPath;
-(id)mixedObjectWithFraction:(CGFloat)arg0 ofObject:(id)arg1 ;
-(id)valueForSetSelector:(SEL)arg0 ;
-(struct CGAffineTransform )pathFlipTransform;
-(struct CGSize )naturalSize;
-(void)scaleToNaturalSize:(struct CGSize )arg0 ;
-(void)setNaturalSize:(struct CGSize )arg0 ;


@end


#endif