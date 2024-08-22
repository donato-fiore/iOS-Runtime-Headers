// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUDTOUCHINFO_H
#define HUDTOUCHINFO_H

@class UIView, UIImageView, UITouch;

#import <Foundation/Foundation.h>


@interface HUDTouchInfo : NSObject

@property (retain, nonatomic) UIView *bar; // ivar: _bar
@property (retain, nonatomic) UIImageView *dot; // ivar: _dot
@property (nonatomic) CGPoint locationInHUD; // ivar: _locationInHUD
@property (nonatomic) CGPoint plottedLocation; // ivar: _plottedLocation
@property (nonatomic) ? stockValue; // ivar: _stockValue
@property (weak, nonatomic) UITouch *touch; // ivar: _touch


-(id)description;


@end


#endif