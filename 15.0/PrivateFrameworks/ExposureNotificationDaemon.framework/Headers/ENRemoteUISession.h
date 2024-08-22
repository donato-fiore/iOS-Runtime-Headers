// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ENREMOTEUISESSION_H
#define ENREMOTEUISESSION_H

@class NSUUID;
@protocol OS_xpc_object;

#import <Foundation/Foundation.h>

#import "ENXPCConnection.h"

@interface ENRemoteUISession : NSObject

@property (weak, nonatomic) ENXPCConnection *connection; // ivar: _connection
@property (retain, nonatomic) NSObject<OS_xpc_object> *originalRequest; // ivar: _originalRequest
@property (copy, nonatomic) NSUUID *sessionID; // ivar: _sessionID




@end


#endif