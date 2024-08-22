// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NTKRING_H
#define NTKRING_H


#import <Foundation/Foundation.h>


@interface NTKRing : NSObject

@property CGFloat backgroundRingAlpha; // ivar: _backgroundRingAlpha
@property CGFloat fillFraction; // ivar: _fillFraction
@property CGFloat radius; // ivar: _radius
@property NSInteger ringStyle; // ivar: _ringStyle
@property CGFloat strokeWidth; // ivar: _strokeWidth


+(id)_fillFractionStringForFillFraction:(float)arg0 withFormatter:(id)arg1 ;
+(id)fillFractionStringForFillFraction:(float)arg0 ;
+(id)fillFractionStringWithSymbolForFillFraction:(float)arg0 ;
-(CGFloat)_validFillFraction:(CGFloat)arg0 ;
-(id)init;
-(id)initWithFillFraction:(CGFloat)arg0 style:(NSInteger)arg1 ;
-(id)initWithFillFraction:(CGFloat)arg0 style:(NSInteger)arg1 radius:(CGFloat)arg2 strokeWidth:(CGFloat)arg3 ;
-(id)ringImage;
-(void)fillFraction:(CGFloat)arg0 ;


@end


#endif