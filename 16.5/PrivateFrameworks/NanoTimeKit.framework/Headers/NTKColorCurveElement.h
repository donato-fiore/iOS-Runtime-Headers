// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKCOLORCURVEELEMENT_H
#define NTKCOLORCURVEELEMENT_H

@class UIColor, CAMediaTimingFunction;

#import <Foundation/Foundation.h>


@interface NTKColorCurveElement : NSObject

@property (retain, nonatomic) UIColor *color; // ivar: _color
@property (nonatomic) float fraction; // ivar: _fraction
@property (retain, nonatomic) CAMediaTimingFunction *timingFunction; // ivar: _timingFunction


-(id)description;
-(id)initWithColor:(id)arg0 fraction:(float)arg1 ;


@end


#endif