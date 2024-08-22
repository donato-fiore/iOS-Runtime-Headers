// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _CHSWIDGETCONFIGURATIONHOST_H
#define _CHSWIDGETCONFIGURATIONHOST_H

@class NSString, NSArray;
@protocol CHSWidgetConfigurationHost_Internal;

#import <Foundation/Foundation.h>

#import "CHSWidgetMetricsSpecification.h"

@interface _CHSWidgetConfigurationHost : NSObject <CHSWidgetConfigurationHost_Internal>

 {
    NSString *_identifier;
    NSArray *_configurations;
    CHSWidgetMetricsSpecification *_metricsSpecification;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) CHSWidgetMetricsSpecification *metricsSpecification;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSArray *widgetConfigurations;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithIdentifier:(id)arg0 configurations:(id)arg1 metricsSpecification:(id)arg2 ;
-(id)widgetConfigurationsForApplicationContainerBundleIdentifier:(id)arg0 ;


@end


#endif