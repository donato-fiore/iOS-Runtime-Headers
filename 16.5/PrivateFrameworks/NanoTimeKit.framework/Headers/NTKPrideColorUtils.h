// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NTKPRIDECOLORUTILS_H
#define NTKPRIDECOLORUTILS_H


#import <Foundation/Foundation.h>


@interface NTKPrideColorUtils : NSObject



+(id)axialColorGradientLayer:(NSUInteger)arg0 forDevice:(id)arg1 ;
+(id)gradientColorsForColor:(NSUInteger)arg0 device:(id)arg1 ;
+(id)layerForGradientWithColors:(id)arg0 type:(id)arg1 gradientLocations:(id)arg2 startPoint:(struct CGPoint )arg3 endPoint:(struct CGPoint )arg4 ;
+(id)prideColorGradientColors2020;


@end


#endif