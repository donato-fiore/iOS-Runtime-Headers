// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UITOOLBARCONFIGURATION_H
#define _UITOOLBARCONFIGURATION_H

@class UIColor, UIImage;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface _UIToolbarConfiguration : NSObject <NSCopying>



@property (retain, nonatomic) UIColor *backgroundColor; // ivar: _backgroundColor
@property (retain, nonatomic) UIImage *backgroundImage; // ivar: _backgroundImage
@property (nonatomic) NSInteger barStyle; // ivar: _barStyle
@property (retain, nonatomic) UIColor *barTintColor; // ivar: _barTintColor
@property (retain, nonatomic) UIImage *shadowImage; // ivar: _shadowImage
@property (nonatomic, getter=isTranslucent) BOOL translucent; // ivar: _translucent


-(id)copyWithZone:(struct _NSZone *)arg0 ;


@end


#endif