// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TVCOLOR_H
#define TVCOLOR_H

@class UIColor, NSArray, IKColor;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface TVColor : NSObject <NSCopying>



@property (readonly, nonatomic) UIColor *color;
@property (readonly, nonatomic) NSInteger colorType;
@property (readonly, nonatomic) NSArray *gradientColors;
@property (readonly, nonatomic) NSArray *gradientPoints;
@property (readonly, weak, nonatomic) IKColor *ikColor; // ivar: _ikColor


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithColor:(id)arg0 ;


@end


#endif