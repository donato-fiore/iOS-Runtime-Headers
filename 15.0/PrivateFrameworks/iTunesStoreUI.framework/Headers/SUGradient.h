// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SUGRADIENT_H
#define SUGRADIENT_H

@class NSMutableArray, NSLock, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SUGradient : NSObject <NSSecureCoding, NSCopying>

 {
    NSMutableArray *_colorStops;
    NSLock *_lock;
    SUGradientPoint _p0;
    SUGradientPoint _p1;
    BOOL _sorted;
    NSInteger _type;
}


@property (readonly) NSArray *colorStopColors;
@property (readonly) NSArray *colorStopOffsets;
@property (readonly) NSInteger gradientType;
@property (readonly) NSInteger numberOfColorStops;
@property (readonly) SUGradientPoint p0;
@property (readonly) SUGradientPoint p1;


+(BOOL)supportsSecureCoding;
+(id)gradientWithColor:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithPoint0:(struct SUGradientPoint )arg0 point1:(struct SUGradientPoint )arg1 type:(NSInteger)arg2 ;
-(id)initWithPropertyList:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 ;
-(id)newPatternColorWithSize:(struct CGSize )arg0 opaque:(BOOL)arg1 ;
-(struct CGGradient *)copyCGGradient;
-(struct CGShading *)copyShading;
-(void)addColorStopWithOffset:(CGFloat)arg0 color:(struct CGColor *)arg1 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif