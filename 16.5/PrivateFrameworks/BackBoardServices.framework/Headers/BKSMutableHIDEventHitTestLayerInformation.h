// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BKSMUTABLEHIDEVENTHITTESTLAYERINFORMATION_H
#define BKSMUTABLEHIDEVENTHITTESTLAYERINFORMATION_H

@class NSArray;


#import "BKSHIDEventHitTestLayerInformation.h"

@interface BKSMutableHIDEventHitTestLayerInformation : BKSHIDEventHitTestLayerInformation

@property (nonatomic) float backgroundAverage;
@property (nonatomic) float backgroundAverageContrastThreshold;
@property (nonatomic) float backgroundStandardDeviation;
@property (nonatomic) BOOL backgroundStatisticsValid; // ivar: _backgroundStatisticsValid
@property (nonatomic) CATransform3D cumulativeContentsTransform;
@property (nonatomic) CATransform3D cumulativeLayerTransform;
@property (nonatomic) float cumulativeOpacity;
@property (nonatomic) CATransform3D cumulativeTransform;
@property (nonatomic) BOOL detectedOcclusion;
@property (nonatomic) BOOL hasInsecureFilter;
@property (copy, nonatomic) NSArray *maximumBackgroundColor;
@property (copy, nonatomic) NSArray *minimumBackgroundColor;
@property (nonatomic) NSUInteger validMask;




@end


#endif