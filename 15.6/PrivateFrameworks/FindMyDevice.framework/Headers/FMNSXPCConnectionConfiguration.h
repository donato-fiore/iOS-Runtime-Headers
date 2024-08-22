// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMNSXPCCONNECTIONCONFIGURATION_H
#define FMNSXPCCONNECTIONCONFIGURATION_H

@class NSString, NSXPCInterface;
@protocol FMNSXPCConnectionConfigurable;

#import <Foundation/Foundation.h>


@interface FMNSXPCConnectionConfiguration : NSObject <FMNSXPCConnectionConfigurable>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSXPCInterface *exportedInterface; // ivar: _exportedInterface
@property (readonly) NSUInteger hash;
@property (nonatomic) BOOL machService; // ivar: _machService
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) NSXPCInterface *remoteInterface; // ivar: _remoteInterface
@property (retain, nonatomic) NSString *serviceName; // ivar: _serviceName
@property (readonly) Class superclass;


+(id)btDiscoveryConfiguration;
+(id)emergencyCallInfoPublisherConfiguration;
+(id)eraseDeviceServiceConfiguration;
+(id)fmipConfiguration;
+(id)helperConfiguration;
+(id)identityConfiguration;
+(id)userNotificationConfiguration;


@end


#endif