// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef WAAQIGRADIENTSTOP_H
#define WAAQIGRADIENTSTOP_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface WAAQIGradientStop : NSObject

@property (readonly, nonatomic) UIColor *color; // ivar: _color
@property (readonly, nonatomic) float location; // ivar: _location


+(id)gradientStopWithColor:(id)arg0 location:(float)arg1 ;
-(id)initWithColor:(id)arg0 location:(float)arg1 ;


@end


#endif