// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSCONTENTCUTOUTBOUNDSCALCULATOR_H
#define CSCONTENTCUTOUTBOUNDSCALCULATOR_H


#import <Foundation/Foundation.h>


@interface CSContentCutoutBoundsCalculator : NSObject



+(struct CGRect )_contentCutoutBoundsForPortrait:(BOOL)arg0 forModal:(BOOL)arg1 ;
+(struct CGRect )_normalizedContentCutoutForScreenBounds:(struct CGRect )arg0 contentBoundingRect:(struct CGRect )arg1 ;
+(struct CGRect )_screenBoundsForPortrait:(BOOL)arg0 ;
+(struct CGRect )contentCutoutBoundsForInterfaceOrientation:(NSInteger)arg0 ;
+(struct CGRect )contentCutoutBoundsForOrientation:(NSInteger)arg0 ;
+(struct CGRect )modalContentCutoutBoundsForInterfaceOrientation:(NSInteger)arg0 ;
+(struct CGRect )modalContentCutoutBoundsForOrientation:(NSInteger)arg0 ;
+(struct CGRect )modalNormalizedContentCutoutBoundsForOrientation:(NSInteger)arg0 ;
+(struct CGRect )normalizedContentCutoutBoundsForOrientation:(NSInteger)arg0 ;


@end


#endif