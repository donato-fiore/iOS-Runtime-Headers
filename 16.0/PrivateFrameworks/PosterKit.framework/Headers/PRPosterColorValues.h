// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PRPOSTERCOLORVALUES_H
#define PRPOSTERCOLORVALUES_H

@class UIColor, NSString;

#import <Foundation/Foundation.h>

#import "PRPosterColorHSBValues.h"
#import "PRPosterColorHSLValues.h"

@interface PRPosterColorValues : NSObject

@property (nonatomic) CGFloat alpha; // ivar: _alpha
@property (copy, nonatomic) UIColor *color; // ivar: _color
@property (retain, nonatomic) PRPosterColorHSBValues *hsbValues; // ivar: _hsbValues
@property (retain, nonatomic) PRPosterColorHSLValues *hslValues; // ivar: _hslValues
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithColor:(id)arg0 ;
-(id)initWithColor:(id)arg0 hsbValues:(id)arg1 hslValues:(id)arg2 alpha:(CGFloat)arg3 ;
-(id)initWithHue:(CGFloat)arg0 saturation:(CGFloat)arg1 luminance:(CGFloat)arg2 alpha:(CGFloat)arg3 ;


@end


#endif