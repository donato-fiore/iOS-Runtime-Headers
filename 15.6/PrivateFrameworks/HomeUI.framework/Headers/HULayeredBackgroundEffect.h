// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HULAYEREDBACKGROUNDEFFECT_H
#define HULAYEREDBACKGROUNDEFFECT_H

@class UIBlurEffect, UIColor;

#import <Foundation/Foundation.h>


@interface HULayeredBackgroundEffect : NSObject

@property (retain, nonatomic) UIBlurEffect *blurEffect; // ivar: _blurEffect
@property (retain, nonatomic) UIColor *fillColor; // ivar: _fillColor


+(id)backgroundWithBlurEffect:(id)arg0 ;
+(id)backgroundWithFillColor:(id)arg0 ;


@end


#endif