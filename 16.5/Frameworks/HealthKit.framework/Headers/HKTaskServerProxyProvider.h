// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKTASKSERVERPROXYPROVIDER_H
#define HKTASKSERVERPROXYPROVIDER_H

@class NSUUID, NSURL, NSString;


#import "HKProxyProvider.h"
#import "HKTaskConfiguration.h"

@interface HKTaskServerProxyProvider : HKProxyProvider {
    NSUUID *_instanceUUID;
}


@property (copy, nonatomic) NSURL *pluginURL; // ivar: _pluginURL
@property (copy) HKTaskConfiguration *taskConfiguration; // ivar: _taskConfiguration
@property (readonly, copy, nonatomic) NSString *taskIdentifier;
@property (readonly, copy, nonatomic) NSUUID *taskUUID; // ivar: _taskUUID


-(id)debugIdentifier;
-(id)initWithHealthStore:(id)arg0 taskIdentifier:(id)arg1 exportedObject:(id)arg2 exportedInterface:(id)arg3 remoteInterface:(id)arg4 taskUUID:(id)arg5 ;
-(id)initWithHealthStore:(id)arg0 taskIdentifier:(id)arg1 exportedObject:(id)arg2 taskUUID:(id)arg3 ;
-(id)proxyServiceEndpointFromSource:(id)arg0 serviceIdentifier:(id)arg1 error:(*id)arg2 ;
// -(void)fetchProxyServiceEndpointFromSource:(id)arg0 serviceIdentifier:(id)arg1 endpointHandler:(id)arg2 errorHandler:(unk)arg3  ;


@end


#endif