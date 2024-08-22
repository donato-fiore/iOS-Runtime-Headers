// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNUISESSIONSCENEDESCRIPTOR_H
#define SNUISESSIONSCENEDESCRIPTOR_H

@class NSString, NSData;
@protocol NSCopying, NSMutableCopying;

#import <Foundation/Foundation.h>

#import "SNUISessionSceneMetrics.h"
#import "SNUIActivityMetricsRequest.h"

@interface SNUISessionSceneDescriptor : NSObject <NSCopying, NSMutableCopying>



@property (readonly, nonatomic) SNUISessionSceneMetrics *metrics;
@property (readonly, nonatomic) SNUIActivityMetricsRequest *metricsRequest; // ivar: _metricsRequest
@property (readonly, copy, nonatomic) NSString *sceneOwnerBundleIdentifier; // ivar: _sceneOwnerBundleIdentifier
@property (readonly, copy, nonatomic) NSData *sessionDescriptor; // ivar: _sessionDescriptor
@property (readonly, copy, nonatomic) NSString *sessionIdentifier; // ivar: _sessionIdentifier
@property (readonly, nonatomic) NSInteger sessionSceneType; // ivar: _sessionSceneType
@property (nonatomic) BOOL useFallbackMetrics; // ivar: _useFallbackMetrics


-(id)_sessionSceneDescriptor;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithSessionSceneDescriptor:(id)arg0 ;
-(id)initWithSessionSceneType:(NSInteger)arg0 sessionDescriptor:(id)arg1 sessionIdentifier:(id)arg2 sceneOwnerBundleIdentifier:(id)arg3 metricsRequest:(id)arg4 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;


@end


#endif