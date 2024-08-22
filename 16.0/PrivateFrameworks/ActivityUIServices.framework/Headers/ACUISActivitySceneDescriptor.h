// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ACUISACTIVITYSCENEDESCRIPTOR_H
#define ACUISACTIVITYSCENEDESCRIPTOR_H

@class ACActivityDescriptor, NSData, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "ACUISActivitySceneMetrics.h"
#import "ACUISActivityMetricsRequest.h"

@interface ACUISActivitySceneDescriptor : NSObject <NSCopying>



@property (readonly, copy, nonatomic) ACActivityDescriptor *activityDescriptor; // ivar: _activityDescriptor
@property (readonly, copy, nonatomic) NSData *activityDescriptorData; // ivar: _activityDescriptorData
@property (readonly, copy, nonatomic) NSString *activityIdentifier;
@property (readonly, nonatomic) NSInteger activitySceneType; // ivar: _activitySceneType
@property (readonly, nonatomic) ACUISActivitySceneMetrics *metrics;
@property (readonly, nonatomic) ACUISActivityMetricsRequest *metricsRequest; // ivar: _metricsRequest
@property (readonly, copy, nonatomic) NSString *sceneOwnerBundleIdentifier;
@property (nonatomic) BOOL useFallbackMetrics; // ivar: _useFallbackMetrics


-(id)_activitySceneDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithActivitySceneDescriptor:(id)arg0 acActivityDescriptor:(id)arg1 ;


@end


#endif