// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSMUTABLEWIDGETTINTPARAMETERS_H
#define CHSMUTABLEWIDGETTINTPARAMETERS_H

@class BSColor;


#import "CHSWidgetTintParameters.h"

@interface CHSMutableWidgetTintParameters : CHSWidgetTintParameters

@property (nonatomic) BOOL accentedAlternateBackground;
@property (nonatomic) NSInteger fallbackFilterStyle;
@property (nonatomic) NSInteger filterStyle;
@property (nonatomic) CGFloat fraction;
@property (retain, nonatomic) BSColor *primaryTintColor;
@property (retain, nonatomic) BSColor *secondaryTintColor;




@end


#endif