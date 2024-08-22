// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef UIKBGRADIENT_H
#define UIKBGRADIENT_H

@class NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface UIKBGradient : NSObject <NSCopying>

 {
    NSString *_gradientName;
    NSString *_flatColorName;
    NSString *_startColorName;
    NSString *_endColorName;
    NSArray *_colors;
    NSArray *_middleLocations;
    BOOL _usesRGBColors;
    BOOL _didQueryRGBColors;
}


@property (readonly, nonatomic) NSString *flatColorName;
@property (nonatomic) BOOL horizontal; // ivar: _horizontal
@property (nonatomic) CGFloat opacity; // ivar: _opacity
@property (readonly, nonatomic) BOOL usesRGBColors;


+(id)gradientWith3Colors:(id)arg0 middleLocation:(CGFloat)arg1 ;
+(id)gradientWithColors:(id)arg0 middleLocations:(id)arg1 ;
+(id)gradientWithFlatColor:(id)arg0 ;
+(id)gradientWithName:(id)arg0 ;
+(id)gradientWithStartColor:(id)arg0 endColor:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWith3Colors:(id)arg0 middleLocation:(CGFloat)arg1 ;
-(id)initWithColors:(id)arg0 middleLocations:(id)arg1 ;
-(id)initWithFlatColor:(id)arg0 ;
-(id)initWithName:(id)arg0 ;
-(id)initWithStartColor:(id)arg0 endColor:(id)arg1 ;
-(struct CGGradient *)CGGradient;
-(void)dealloc;


@end


#endif