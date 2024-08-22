// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HMFLOGEVENTSESSIONFACTORY_H
#define HMFLOGEVENTSESSIONFACTORY_H


#import <Foundation/Foundation.h>


@interface HMFLogEventSessionFactory : NSObject



+(id)backendWithServiceName:(id)arg0 samplingUUID:(id)arg1 ;
+(id)logCategory;
+(id)sessionWithUUID:(id)arg0 serviceName:(id)arg1 parent:(id)arg2 ;
+(id)sessionWithUUID:(id)arg0 serviceName:(id)arg1 rootUUID:(id)arg2 ;


@end


#endif