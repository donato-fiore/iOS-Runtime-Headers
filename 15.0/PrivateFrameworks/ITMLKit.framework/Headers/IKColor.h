// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IKCOLOR_H
#define IKCOLOR_H

@class UIColor, NSString, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface IKColor : NSObject <NSCopying>



@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (copy, nonatomic) NSString *colorMapKey; // ivar: _colorMapKey
@property (nonatomic) NSInteger colorType; // ivar: _colorType
@property (copy, nonatomic) NSArray *gradientColors; // ivar: _gradientColors
@property (nonatomic) NSInteger gradientDirectionType; // ivar: _gradientDirectionType
@property (readonly, copy, nonatomic) NSArray *gradientPoints; // ivar: _gradientPoints
@property (nonatomic) NSInteger gradientType; // ivar: _gradientType


+(void)registerColorNameMap:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithColor:(id)arg0 ;
-(id)initWithColorMapKey:(id)arg0 ;


@end


#endif