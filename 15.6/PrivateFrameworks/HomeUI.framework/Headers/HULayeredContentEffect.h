// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HULAYEREDCONTENTEFFECT_H
#define HULAYEREDCONTENTEFFECT_H

@class UIColor, UIVibrancyEffect;

#import <Foundation/Foundation.h>


@interface HULayeredContentEffect : NSObject

@property (retain, nonatomic) UIColor *tintColor; // ivar: _tintColor
@property (retain, nonatomic) UIVibrancyEffect *vibrancyEffect; // ivar: _vibrancyEffect


+(id)contentWithTintColor:(id)arg0 ;
+(id)contentWithVibrancyEffect:(id)arg0 ;


@end


#endif