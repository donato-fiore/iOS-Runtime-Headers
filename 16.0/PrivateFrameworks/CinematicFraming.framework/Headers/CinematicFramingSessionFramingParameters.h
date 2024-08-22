// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CINEMATICFRAMINGSESSIONFRAMINGPARAMETERS_H
#define CINEMATICFRAMINGSESSIONFRAMINGPARAMETERS_H


#import <Foundation/Foundation.h>


@interface CinematicFramingSessionFramingParameters : NSObject

@property (nonatomic) float deadbandHeightFractionOfScreenHeight; // ivar: deadbandHeightFractionOfScreenHeight
@property (nonatomic) float deadbandTopOffsetFractionOfScreenHeight; // ivar: deadbandTopOffsetFractionOfScreenHeight
@property (nonatomic) float deadbandWidthFractionOfScreenWidth; // ivar: deadbandWidthFractionOfScreenWidth
@property (nonatomic) float deadbandWidthMaxFraction; // ivar: deadbandWidthMaxFraction
@property (nonatomic) float deadbandWidthMinFraction; // ivar: deadbandWidthMinFraction
@property (nonatomic) float horizontalMinAbsoluteDifferenceThreshold; // ivar: horizontalMinAbsoluteDifferenceThreshold
@property (nonatomic) float horizontalMinRelativeDifferenceThreshold; // ivar: horizontalMinRelativeDifferenceThreshold
@property (nonatomic) float minCropSize; // ivar: minCropSize
@property (nonatomic) float subjectHeightPaddingMultiplier; // ivar: subjectHeightPaddingMultiplier
@property (nonatomic) float subjectWidthPaddingMultiplier; // ivar: subjectWidthPaddingMultiplier
@property (nonatomic) float topMarginFractionRelaxed; // ivar: topMarginFractionRelaxed
@property (nonatomic) float topMarginFractionTight; // ivar: topMarginFractionTight
@property (nonatomic) float widthPaddingAdditive; // ivar: widthPaddingAdditive
@property (nonatomic) float widthPaddingMultiplierNoFocusRelaxed; // ivar: widthPaddingMultiplierNoFocusRelaxed
@property (nonatomic) float widthPaddingMultiplierNoFocusTight; // ivar: widthPaddingMultiplierNoFocusTight


-(id)asPlist;
-(id)initWithPlist:(id)arg0 ;
-(id)initWithPlistPath:(id)arg0 ;
-(void)_initializeWithPlist:(id)arg0 ;


@end


#endif