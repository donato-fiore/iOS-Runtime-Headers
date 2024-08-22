// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MKBARVIEWOPTIONS_H
#define MKBARVIEWOPTIONS_H

@class UIColor, NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface MKBarViewOptions : NSObject <NSCopying>



@property (copy, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (nonatomic) CGFloat currentAmount; // ivar: _currentAmount
@property (copy, nonatomic) NSArray *fillColors; // ivar: _fillColors
@property (copy, nonatomic) NSArray *gradientStops; // ivar: _gradientStops
@property (nonatomic) CGFloat thickness; // ivar: _thickness
@property (nonatomic) CGFloat totalAmount; // ivar: _totalAmount


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;


@end


#endif