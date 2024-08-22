// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HKLINESERIESPOINTMARKERSTYLE_H
#define HKLINESERIESPOINTMARKERSTYLE_H

@class UIColor;

#import <Foundation/Foundation.h>


@interface HKLineSeriesPointMarkerStyle : NSObject

@property (retain, nonatomic) UIColor *pointColor; // ivar: _pointColor
@property (nonatomic) NSInteger pointMarkerStyle; // ivar: _pointMarkerStyle
@property (nonatomic) CGFloat radius; // ivar: _radius


-(id)initWithColor:(id)arg0 radius:(CGFloat)arg1 style:(NSInteger)arg2 ;


@end


#endif