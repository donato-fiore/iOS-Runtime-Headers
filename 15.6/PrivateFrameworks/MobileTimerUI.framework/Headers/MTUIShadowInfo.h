// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTUISHADOWINFO_H
#define MTUISHADOWINFO_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface MTUIShadowInfo : NSObject

@property (copy, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) CGSize offset; // ivar: _offset
@property (nonatomic) CGFloat radius; // ivar: _radius
@property (nonatomic) CGFloat scale; // ivar: _scale


-(id)initWithColor:(id)arg0 radius:(CGFloat)arg1 offset:(struct CGSize )arg2 scale:(CGFloat)arg3 ;


@end


#endif