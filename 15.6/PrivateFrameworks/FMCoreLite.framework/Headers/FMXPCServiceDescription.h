// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FMXPCSERVICEDESCRIPTION_H
#define FMXPCSERVICEDESCRIPTION_H

@class NSXPCInterface, NSString;

#import <Foundation/Foundation.h>


@interface FMXPCServiceDescription : NSObject

@property (retain, nonatomic) NSXPCInterface *exportedInterface; // ivar: _exportedInterface
@property (retain, nonatomic) NSObject *exportedObject; // ivar: _exportedObject
@property (copy, nonatomic) id *interruptionHandler; // ivar: _interruptionHandler
@property (copy, nonatomic) id *invalidationHandler; // ivar: _invalidationHandler
@property (copy, nonatomic) NSString *machService; // ivar: _machService
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface; // ivar: _remoteObjectInterface


// -(id)initInternalWithMachServiceName:(id)arg0 options:(NSUInteger)arg1 exportedObject:(id)arg2 exportedInterface:(id)arg3 remoteObjectInterface:(id)arg4 interruptionHandler:(id)arg5 invalidationHandler:(unk)arg6  ;
// -(id)initWithMachServiceName:(id)arg0 options:(NSUInteger)arg1 exportedObject:(id)arg2 exportedInterface:(id)arg3 remoteObjectInterface:(id)arg4 interruptionHandler:(id)arg5 invalidationHandler:(unk)arg6  ;
// -(id)initWithMachServiceName:(id)arg0 options:(NSUInteger)arg1 remoteObjectInterface:(id)arg2 interruptionHandler:(id)arg3 invalidationHandler:(unk)arg4  ;


@end


#endif