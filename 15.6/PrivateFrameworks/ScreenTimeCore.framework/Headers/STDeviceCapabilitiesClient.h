// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef STDEVICECAPABILITIESCLIENT_H
#define STDEVICECAPABILITIESCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface STDeviceCapabilitiesClient : NSObject

@property (readonly) NSXPCConnection *connection; // ivar: _connection


+(id)_newConnection;
-(id)init;
-(void)dealloc;
-(void)isCapabilityEnabledForUser:(id)arg0 capability:(id)arg1 completionHandler:(id)arg2 ;


@end


#endif