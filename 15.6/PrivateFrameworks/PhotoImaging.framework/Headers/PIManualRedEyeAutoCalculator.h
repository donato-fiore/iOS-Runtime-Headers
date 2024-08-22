// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PIMANUALREDEYEAUTOCALCULATOR_H
#define PIMANUALREDEYEAUTOCALCULATOR_H



#import "PIRedEyeAutoCalculator.h"

@interface PIManualRedEyeAutoCalculator : PIRedEyeAutoCalculator {
    CGPoint _location;
    CGFloat _touchDiameter;
}




-(id)_options;
-(id)initWithComposition:(id)arg0 location:(struct CGPoint )arg1 touchDiameter:(CGFloat)arg2 ;
-(void)_configureRequest:(id)arg0 ;


@end


#endif