// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CARPFLOGEVENTSESSIONFACTORY_H
#define CARPFLOGEVENTSESSIONFACTORY_H


#import <Foundation/Foundation.h>


@interface CARPFLogEventSessionFactory : NSObject



+(id)backendWithServiceName:(id)arg0 ;
+(id)sessionWithUUID:(id)arg0 serviceName:(id)arg1 parent:(id)arg2 ;
+(id)sessionWithUUID:(id)arg0 serviceName:(id)arg1 rootUUID:(id)arg2 ;


@end


#endif