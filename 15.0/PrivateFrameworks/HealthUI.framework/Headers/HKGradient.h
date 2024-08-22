// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKGRADIENT_H
#define HKGRADIENT_H

@class UIColor, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface HKGradient : NSObject <NSCopying>



@property (readonly, nonatomic) UIColor *bottomColor;
@property (retain, nonatomic) NSArray *colors; // ivar: _colors
@property (retain, nonatomic) NSArray *locations; // ivar: _locations
@property (readonly, nonatomic) UIColor *topColor;


+(id)defaultGradient;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToHKGradient:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithColors:(id)arg0 locations:(id)arg1 ;
-(id)initWithTopColor:(id)arg0 bottomColor:(id)arg1 ;


@end


#endif