// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPAREGION_H
#define IPAREGION_H

@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>


@interface IPARegion : NSObject <NSCopying, NSMutableCopying>

 {
    *void _imp;
}




+(id)region;
+(id)regionWithRect:(struct CGRect )arg0 ;
+(id)regionWithRectArray:(id)arg0 ;
+(id)regionWithRegion:(id)arg0 ;
-(BOOL)includesRect:(struct CGRect )arg0 ;
-(BOOL)includesRegion:(id)arg0 ;
-(BOOL)intersectsRect:(struct CGRect )arg0 ;
-(BOOL)intersectsRegion:(id)arg0 ;
-(BOOL)isEmpty;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRegion:(id)arg0 ;
-(CGFloat)area;
-(NSUInteger)count;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithRect:(struct CGRect )arg0 ;
-(id)initWithRectArray:(id)arg0 ;
-(id)initWithRegion:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(id)regionByAddingRect:(struct CGRect )arg0 ;
-(id)regionByAddingRectArray:(id)arg0 ;
-(id)regionByAddingRegion:(id)arg0 ;
-(id)regionByApplyingAffineTransform:(struct CGAffineTransform )arg0 ;
-(id)regionByApplyingOrientation:(NSInteger)arg0 imageSize:(struct CGSize )arg1 ;
-(id)regionByClippingToRect:(struct CGRect )arg0 ;
-(id)regionByClippingToRectArray:(id)arg0 ;
-(id)regionByClippingToRegion:(id)arg0 ;
-(id)regionByExcludingRect:(struct CGRect )arg0 ;
-(id)regionByExcludingRegion:(id)arg0 ;
-(id)regionByFlippingInRect:(struct CGRect )arg0 ;
-(id)regionByGrowingBy:(struct CGPoint )arg0 ;
-(id)regionByGrowingBy:(struct CGPoint )arg0 inRect:(struct CGRect )arg1 ;
-(id)regionByRemovingRect:(struct CGRect )arg0 ;
-(id)regionByRemovingRectArray:(id)arg0 ;
-(id)regionByRemovingRegion:(id)arg0 ;
-(id)regionByRoundingDown;
-(id)regionByRoundingUp;
-(id)regionByScalingBy:(struct CGPoint )arg0 ;
-(id)regionByShrinkingBy:(struct CGPoint )arg0 ;
-(id)regionByShrinkingBy:(struct CGPoint )arg0 inRect:(struct CGRect )arg1 ;
-(id)regionByTranslatingBy:(struct CGPoint )arg0 ;
-(struct CGRect )bounds;
-(void)dealloc;
-(void)enumerateRects:(id)arg0 ;


@end


#endif