// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CSWIDGETMETRICSPROVIDER_H
#define CSWIDGETMETRICSPROVIDER_H

@class NSString, CHSWidgetMetricsSpecification;
@protocol SBSWidgetMetricsProviding;

#import <Foundation/Foundation.h>


@interface CSWidgetMetricsProvider : NSObject <SBSWidgetMetricsProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) CHSWidgetMetricsSpecification *lockScreenWidgetMetricsSpecifications;
@property (readonly) Class superclass;


-(id)_transparentMediumMetrics;
-(id)previewMetricsSpecificationForBundleIdentifier:(id)arg0 ;
-(id)previewMetricsSpecificationForDeviceContext:(id)arg0 displayContext:(id)arg1 bundleIdentifier:(id)arg2 ;
-(id)systemMetricsForWidget:(id)arg0 ;


@end


#endif