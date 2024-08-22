// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MTXPCCONNECTIONINFO_H
#define MTXPCCONNECTIONINFO_H

@class NSXPCInterface, NSString;

#import <Foundation/Foundation.h>


@interface MTXPCConnectionInfo : NSObject

@property (retain, nonatomic) id *exportedObject; // ivar: _exportedObject
@property (retain, nonatomic) NSXPCInterface *exportedObjectInterface; // ivar: _exportedObjectInterface
@property (copy, nonatomic) NSString *lifecycleNotification; // ivar: _lifecycleNotification
@property (copy, nonatomic) NSString *machServiceName; // ivar: _machServiceName
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface; // ivar: _remoteObjectInterface
@property (copy, nonatomic) NSString *requiredEntitlement; // ivar: _requiredEntitlement


+(id)infoForMachServiceName:(id)arg0 remoteObjectInterface:(id)arg1 exportedObject:(id)arg2 exportedObjectInterface:(id)arg3 lifecycleNotification:(id)arg4 requiredEntitlement:(id)arg5 options:(NSUInteger)arg6 ;
+(id)infoForMachServiceName:(id)arg0 remoteObjectInterface:(id)arg1 options:(NSUInteger)arg2 ;
-(id)description;
-(id)initWithMachServiceName:(id)arg0 remoteObjectInterface:(id)arg1 exportedObject:(id)arg2 exportedObjectInterface:(id)arg3 lifecycleNotification:(id)arg4 requiredEntitlement:(id)arg5 options:(NSUInteger)arg6 ;


@end


#endif