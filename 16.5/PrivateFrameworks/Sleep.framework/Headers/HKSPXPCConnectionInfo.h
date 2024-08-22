// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HKSPXPCCONNECTIONINFO_H
#define HKSPXPCCONNECTIONINFO_H

@class NSString, NSXPCInterface;
@protocol BSDescriptionProviding;

#import <Foundation/Foundation.h>


@interface HKSPXPCConnectionInfo : NSObject <BSDescriptionProviding>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id *exportedObject; // ivar: _exportedObject
@property (readonly, nonatomic) NSXPCInterface *exportedObjectInterface; // ivar: _exportedObjectInterface
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *lifecycleNotification; // ivar: _lifecycleNotification
@property (readonly, copy, nonatomic) NSString *machServiceName; // ivar: _machServiceName
@property (readonly, nonatomic) NSUInteger options; // ivar: _options
@property (readonly, nonatomic) NSXPCInterface *remoteObjectInterface; // ivar: _remoteObjectInterface
@property (readonly, copy, nonatomic) NSString *requiredEntitlement; // ivar: _requiredEntitlement
@property (readonly) Class superclass;


+(id)infoForMachServiceName:(id)arg0 remoteObjectInterface:(id)arg1 exportedObject:(id)arg2 exportedObjectInterface:(id)arg3 lifecycleNotification:(id)arg4 requiredEntitlement:(id)arg5 options:(NSUInteger)arg6 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg0 ;
-(id)descriptionWithMultilinePrefix:(id)arg0 ;
-(id)initWithMachServiceName:(id)arg0 remoteObjectInterface:(id)arg1 exportedObject:(id)arg2 exportedObjectInterface:(id)arg3 lifecycleNotification:(id)arg4 requiredEntitlement:(id)arg5 options:(NSUInteger)arg6 ;
-(id)succinctDescription;
-(id)succinctDescriptionBuilder;


@end


#endif