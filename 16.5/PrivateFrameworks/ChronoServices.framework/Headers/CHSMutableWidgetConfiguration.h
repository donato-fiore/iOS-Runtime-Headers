// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CHSMUTABLEWIDGETCONFIGURATION_H
#define CHSMUTABLEWIDGETCONFIGURATION_H

@class NSArray;


#import "CHSWidgetConfiguration.h"
#import "CHSWidgetMetricsSpecification.h"

@interface CHSMutableWidgetConfiguration : CHSWidgetConfiguration

@property (copy, nonatomic) NSArray *containerDescriptors;
@property (copy, nonatomic) CHSWidgetMetricsSpecification *metricsSpecification;




@end


#endif