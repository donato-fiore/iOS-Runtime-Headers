// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _TTC17SESSIONUISERVICES22SESSIONSCENEDESCRIPTOR_H
#define _TTC17SESSIONUISERVICES22SESSIONSCENEDESCRIPTOR_H

@class NSString, NSData;

#import <Foundation/Foundation.h>

#import "_TtC17SessionUIServices19SessionSceneMetrics.h"
#import "_TtC17SessionUIServices22ActivityMetricsRequest.h"

@interface _TtC17SessionUIServices22SessionSceneDescriptor : NSObject {
    ? sceneOwnerBundleIdentifier;
}


@property (nonatomic, readonly) _TtC17SessionUIServices19SessionSceneMetrics *metrics;
@property (nonatomic, retain) _TtC17SessionUIServices22ActivityMetricsRequest *metricsRequest; // ivar: metricsRequest
@property (nonatomic, copy) NSString *sceneOwnerBundleIdentifier;
@property (nonatomic, retain) NSData *sessionDescriptor; // ivar: sessionDescriptor
@property (nonatomic, retain) NSString *sessionIdentifier; // ivar: sessionIdentifier
@property (nonatomic) NSInteger sessionSceneType; // ivar: sessionSceneType


-(id)init;
-(id)initWithSessionSceneType:(NSInteger)arg0 sessionDescriptor:(id)arg1 sessionIdentifier:(id)arg2 sceneOwnerBundleIdentifier:(id)arg3 metricsRequest:(id)arg4 ;


@end


#endif