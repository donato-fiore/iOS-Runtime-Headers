// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NUREGION_H
#define NUREGION_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface NURegion : NSObject <NSCopying, NSMutableCopying>

 {
    *void _imp;
}




+(id)region;
+(id)regionWithRect:(struct ? )arg0 ;
+(id)regionWithRegion:(id)arg0 ;
-(BOOL)includesRect:(struct ? )arg0 ;
-(BOOL)includesRegion:(id)arg0 ;
-(BOOL)intersectsRect:(struct ? )arg0 ;
-(BOOL)intersectsRegion:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRegion:(id)arg0 ;
-(CGFloat)area;
-(CGFloat)density;
-(NSUInteger)count;
-(NSUInteger)hash;
-(id)convertImageRegion:(id)arg0 fromRect:(struct ? )arg1 toRect:(struct ? )arg2 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRect:(struct ? )arg0 ;
-(id)initWithRegion:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)regionByAddingRect:(struct ? )arg0 ;
-(id)regionByAddingRegion:(id)arg0 ;
-(id)regionByApplyingAffineTransform:(struct CGAffineTransform )arg0 roundPolicy:(NSInteger)arg1 ;
-(id)regionByApplyingOrientation:(NSInteger)arg0 imageSize:(struct ? )arg1 ;
-(id)regionByClippingToRect:(struct ? )arg0 ;
-(id)regionByClippingToRegion:(id)arg0 ;
-(id)regionByExcludingRect:(struct ? )arg0 ;
-(id)regionByExcludingRegion:(id)arg0 ;
-(id)regionByFlippingInRect:(struct ? )arg0 ;
-(id)regionByGrowingBy:(struct ? )arg0 ;
-(id)regionByGrowingBy:(struct ? )arg0 inRect:(struct ? )arg1 ;
-(id)regionByRemovingRect:(struct ? )arg0 ;
-(id)regionByRemovingRegion:(id)arg0 ;
-(id)regionByScalingBy:(struct CGPoint )arg0 withRounding:(NSInteger)arg1 ;
-(id)regionByShrinkingBy:(struct ? )arg0 ;
-(id)regionByShrinkingBy:(struct ? )arg0 inRect:(struct ? )arg1 ;
-(id)regionByTranslatingBy:(struct ? )arg0 ;
-(id)regionWithSubregionsOfMinimumDensity:(CGFloat)arg0 ;
-(struct ? )bounds;
-(void)dealloc;
-(void)enumerateRects:(id)arg0 ;


@end


#endif