// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DTXPCREGISTRATION_H
#define DTXPCREGISTRATION_H

@class NSString;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface DTXPCRegistration : NSObject

@property (retain, nonatomic) id *client; // ivar: _client
@property (copy, nonatomic) id *oneshotHandler; // ivar: _oneshotHandler
@property (retain, nonatomic) id *pkHandle; // ivar: _pkHandle
@property (copy, nonatomic) NSString *serviceIdentifier; // ivar: _serviceIdentifier
@property (retain, nonatomic) NSObject<OS_xpc_object> *xpcObject; // ivar: _xpcObject




@end


#endif