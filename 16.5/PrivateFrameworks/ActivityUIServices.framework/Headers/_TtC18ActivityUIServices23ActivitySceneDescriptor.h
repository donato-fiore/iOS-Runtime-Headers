// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC18ACTIVITYUISERVICES23ACTIVITYSCENEDESCRIPTOR_H
#define _TTC18ACTIVITYUISERVICES23ACTIVITYSCENEDESCRIPTOR_H

@class NSData, NSString;

#import <Foundation/Foundation.h>

#import "_TtC18ActivityUIServices20ActivitySceneMetrics.h"
#import "_TtC18ActivityUIServices22ActivityMetricsRequest.h"

@interface _TtC18ActivityUIServices23ActivitySceneDescriptor : NSObject {
    ? activityIdentifier;
    ? activityDescriptor;
    ? payloadID;
}


@property (nonatomic, readonly) NSData *activityDescriptor;
@property (nonatomic, readonly) NSData *activityDescriptorData; // ivar: activityDescriptorData
@property (nonatomic, readonly) NSString *activityIdentifier;
@property (nonatomic, readonly) NSInteger activitySceneType; // ivar: activitySceneType
@property (nonatomic, readonly) _TtC18ActivityUIServices20ActivitySceneMetrics *metrics;
@property (nonatomic, readonly) _TtC18ActivityUIServices22ActivityMetricsRequest *metricsRequest; // ivar: metricsRequest
@property (nonatomic, readonly) NSString *payloadID;


-(id)init;
-(id)initWithActivitySceneType:(NSInteger)arg0 activityDescriptor:(id)arg1 metricsRequest:(id)arg2 payloadID:(id)arg3 ;


@end


#endif