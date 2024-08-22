// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AVMOBILESLIDERMARK_H
#define AVMOBILESLIDERMARK_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface AVMobileSliderMark : NSObject

@property (readonly, nonatomic) float endValue; // ivar: _endValue
@property (readonly, nonatomic) UIColor *filledColor; // ivar: _filledColor
@property (readonly, nonatomic) float startValue; // ivar: _startValue
@property (readonly, nonatomic) UIColor *unfilledColor; // ivar: _unfilledColor


-(id)initWithStartValue:(float)arg0 endValue:(float)arg1 filledColor:(id)arg2 unfilledColor:(id)arg3 ;


@end


#endif