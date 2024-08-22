// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLKDEVICEMETRICS_H
#define CLKDEVICEMETRICS_H

@class NSMutableDictionary, NSNumber;

#import <Foundation/Foundation.h>

#import "CLKDevice.h"

@interface CLKDeviceMetrics : NSObject {
    CLKDevice *_device;
    NSUInteger _identitySizeClass;
    NSMutableDictionary *_scales;
}


@property (retain, nonatomic) NSNumber *newestAllowedSizeClass; // ivar: _newestAllowedSizeClass
@property (nonatomic) NSUInteger roundingBehavior; // ivar: _roundingBehavior


+(id)metricsWithDevice:(id)arg0 identitySizeClass:(NSUInteger)arg1 ;
-(CGFloat)_unroundedScaledValue:(CGFloat)arg0 ;
-(CGFloat)constantValue:(CGFloat)arg0 withOverride:(CGFloat)arg1 forSizeClass:(NSUInteger)arg2 ;
-(CGFloat)constantValue:(CGFloat)arg0 withOverrides:(id)arg1 ;
-(CGFloat)scaledValue:(CGFloat)arg0 ;
-(CGFloat)scaledValue:(CGFloat)arg0 withOverride:(CGFloat)arg1 forSizeClass:(NSUInteger)arg2 ;
-(CGFloat)scaledValue:(CGFloat)arg0 withOverrides:(id)arg1 ;
-(CGFloat)valueCompact:(CGFloat)arg0 regular:(CGFloat)arg1 luxoCompact:(CGFloat)arg2 luxoRegular:(CGFloat)arg3 aloeCompact:(CGFloat)arg4 aloeRegular:(CGFloat)arg5 ;
-(CGFloat)valueCompact:(CGFloat)arg0 regular:(CGFloat)arg1 luxoCompact:(CGFloat)arg2 luxoRegular:(CGFloat)arg3 aloeCompact:(CGFloat)arg4 aloeRegular:(CGFloat)arg5 agave:(CGFloat)arg6 ;
-(NSUInteger)_effectiveSizeClass;
-(id)initWithDevice:(id)arg0 identitySizeClass:(NSUInteger)arg1 ;
-(struct CGPoint )constantPoint:(struct CGPoint )arg0 withOverride:(struct CGPoint )arg1 forSizeClass:(NSUInteger)arg2 ;
-(struct CGPoint )constantPoint:(struct CGPoint )arg0 withOverrides:(id)arg1 ;
-(struct CGPoint )pointCompact:(struct CGPoint )arg0 regular:(struct CGPoint )arg1 luxoCompact:(struct CGPoint )arg2 luxoRegular:(struct CGPoint )arg3 aloeCompact:(struct CGPoint )arg4 aloeRegular:(struct CGPoint )arg5 ;
-(struct CGPoint )pointCompact:(struct CGPoint )arg0 regular:(struct CGPoint )arg1 luxoCompact:(struct CGPoint )arg2 luxoRegular:(struct CGPoint )arg3 aloeCompact:(struct CGPoint )arg4 aloeRegular:(struct CGPoint )arg5 agave:(struct CGPoint )arg6 ;
-(struct CGPoint )scaledPoint:(struct CGPoint )arg0 ;
-(struct CGPoint )scaledPoint:(struct CGPoint )arg0 withOverride:(struct CGPoint )arg1 forSizeClass:(NSUInteger)arg2 ;
-(struct CGPoint )scaledPoint:(struct CGPoint )arg0 withOverrides:(id)arg1 ;
-(struct CGSize )constantSize:(struct CGSize )arg0 withOverride:(struct CGSize )arg1 forSizeClass:(NSUInteger)arg2 ;
-(struct CGSize )constantSize:(struct CGSize )arg0 withOverrides:(id)arg1 ;
-(struct CGSize )scaledSize:(struct CGSize )arg0 ;
-(struct CGSize )scaledSize:(struct CGSize )arg0 withOverride:(struct CGSize )arg1 forSizeClass:(NSUInteger)arg2 ;
-(struct CGSize )scaledSize:(struct CGSize )arg0 withOverrides:(id)arg1 ;
-(struct CGSize )sizeCompact:(struct CGSize )arg0 regular:(struct CGSize )arg1 luxoCompact:(struct CGSize )arg2 luxoRegular:(struct CGSize )arg3 aloeCompact:(struct CGSize )arg4 aloeRegular:(struct CGSize )arg5 ;
-(struct CGSize )sizeCompact:(struct CGSize )arg0 regular:(struct CGSize )arg1 luxoCompact:(struct CGSize )arg2 luxoRegular:(struct CGSize )arg3 aloeCompact:(struct CGSize )arg4 aloeRegular:(struct CGSize )arg5 agave:(struct CGSize )arg6 ;
-(void)setScale:(CGFloat)arg0 forSizeClass:(NSUInteger)arg1 ;


@end


#endif