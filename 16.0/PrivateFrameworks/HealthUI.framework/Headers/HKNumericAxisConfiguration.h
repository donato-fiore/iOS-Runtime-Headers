// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKNUMERICAXISCONFIGURATION_H
#define HKNUMERICAXISCONFIGURATION_H

@protocol HKAxisLabelDimension;


#import "HKAxisConfiguration.h"

@interface HKNumericAxisConfiguration : HKAxisConfiguration

@property (nonatomic) CGFloat bottomVerticalLabelPadding; // ivar: _bottomVerticalLabelPadding
@property (retain, nonatomic) NSObject<HKAxisLabelDimension> *labelDimension; // ivar: _labelDimension
@property (nonatomic) CGFloat topVerticalLabelPadding; // ivar: _topVerticalLabelPadding


-(id)init;
-(void)applyOverridesFromNumericAxisConfiguration:(id)arg0 ;


@end


#endif