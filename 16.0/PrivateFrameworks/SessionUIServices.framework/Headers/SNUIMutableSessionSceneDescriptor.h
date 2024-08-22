// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNUIMUTABLESESSIONSCENEDESCRIPTOR_H
#define SNUIMUTABLESESSIONSCENEDESCRIPTOR_H

@class NSString, NSData;


#import "SNUISessionSceneDescriptor.h"
#import "SNUISessionSceneMetrics.h"
#import "SNUIActivityMetricsRequest.h"

@interface SNUIMutableSessionSceneDescriptor : SNUISessionSceneDescriptor

@property (retain, nonatomic) SNUISessionSceneMetrics *metrics;
@property (retain, nonatomic) SNUIActivityMetricsRequest *metricsRequest; // ivar: metricsRequest
@property (copy, nonatomic) NSString *sceneOwnerBundleIdentifier;
@property (copy, nonatomic) NSData *sessionDescriptor;
@property (copy, nonatomic) NSString *sessionIdentifier; // ivar: sessionIdentifier
@property (nonatomic) NSInteger sessionSceneType; // ivar: sessionSceneType


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif