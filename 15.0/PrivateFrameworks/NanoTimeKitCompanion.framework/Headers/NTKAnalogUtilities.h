// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NTKANALOGUTILITIES_H
#define NTKANALOGUTILITIES_H


#import <Foundation/Foundation.h>


@interface NTKAnalogUtilities : NSObject



+(CGFloat)dialDiameterForDevice:(id)arg0 ;
+(CGFloat)dialDiameterForDevice:(id)arg0 withRounding:(NSUInteger)arg1 ;
+(CGFloat)largeDialDiameterForDevice:(id)arg0 ;
+(CGFloat)largeDialDiameterForDevice:(id)arg0 withRounding:(NSUInteger)arg1 ;
+(CGFloat)whistlerMediumDialDiameterForDevice:(id)arg0 ;
+(struct CGSize )dialSizeForDevice:(id)arg0 ;
+(struct CGSize )largeDialSizeForDevice:(id)arg0 ;
+(struct CGSize )sceneSizeForDevice:(id)arg0 ;


@end


#endif