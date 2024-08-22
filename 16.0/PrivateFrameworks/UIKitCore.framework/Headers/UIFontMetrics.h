// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef UIFONTMETRICS_H
#define UIFONTMETRICS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface UIFontMetrics : NSObject {
    NSString *_textStyle;
}




+(CGFloat)scaledValueForValue:(CGFloat)arg0 withTextStyle:(id)arg1 bodyLeading:(CGFloat)arg2 compatibleWithTraitCollection:(id)arg3 ;
+(id)defaultMetrics;
+(id)metricsForTextStyle:(id)arg0 ;
-(CGFloat)scaledValueForValue:(CGFloat)arg0 ;
-(CGFloat)scaledValueForValue:(CGFloat)arg0 compatibleWithTraitCollection:(id)arg1 ;
-(id)ib_scaledFontForFont:(id)arg0 ;
-(id)ib_scaledFontForFont:(id)arg0 maximumPointSize:(CGFloat)arg1 ;
-(id)init;
-(id)initForTextStyle:(id)arg0 ;
-(id)scaledFontForFont:(id)arg0 ;
-(id)scaledFontForFont:(id)arg0 compatibleWithTraitCollection:(id)arg1 ;
-(id)scaledFontForFont:(id)arg0 maximumPointSize:(CGFloat)arg1 ;
-(id)scaledFontForFont:(id)arg0 maximumPointSize:(CGFloat)arg1 compatibleWithTraitCollection:(id)arg2 ;


@end


#endif