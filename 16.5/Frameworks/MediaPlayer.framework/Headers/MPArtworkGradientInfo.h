// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPARTWORKGRADIENTINFO_H
#define MPARTWORKGRADIENTINFO_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface MPArtworkGradientInfo : NSObject

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) CGFloat y1; // ivar: _y1
@property (nonatomic) CGFloat y2; // ivar: _y2


-(id)initWithColor:(id)arg0 y1:(CGFloat)arg1 y2:(CGFloat)arg2 ;


@end


#endif