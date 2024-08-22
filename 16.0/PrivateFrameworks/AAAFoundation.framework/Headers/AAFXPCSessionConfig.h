// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AAFXPCSESSIONCONFIG_H
#define AAFXPCSESSIONCONFIG_H

@class Protocol, NSXPCInterface, NSString;

#import <Foundation/Foundation.h>


@interface AAFXPCSessionConfig : NSObject

@property (retain, nonatomic) Protocol *exportedProtocol; // ivar: _exportedProtocol
@property (nonatomic) NSUInteger options; // ivar: _options
@property (retain, nonatomic) NSXPCInterface *remoteObjectInterface; // ivar: _remoteObjectInterface
@property (retain, nonatomic) Protocol *remoteProtocol; // ivar: _remoteProtocol
@property (copy, nonatomic) NSString *serviceName; // ivar: _serviceName


-(id)initWithServiceName:(id)arg0 remoteProtocol:(id)arg1 exportedProtocol:(id)arg2 options:(NSUInteger)arg3 ;
-(id)initWithServiceName:(id)arg0 remoteProtocol:(id)arg1 options:(NSUInteger)arg2 ;


@end


#endif