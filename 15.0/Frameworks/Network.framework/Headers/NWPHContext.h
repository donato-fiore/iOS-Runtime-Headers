// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NWPHCONTEXT_H
#define NWPHCONTEXT_H

@protocol OS_xpc_object;

#import <Foundation/Foundation.h>


@interface NWPHContext : NSObject

@property (retain) NSObject<OS_xpc_object> *connection; // ivar: _connection
@property (readonly, nonatomic) int pid;
@property (retain) NSObject<OS_xpc_object> *reply; // ivar: _reply
@property (retain) NSObject<OS_xpc_object> *request; // ivar: _request


-(id)initWithRequest:(id)arg0 onConnection:(id)arg1 ;


@end


#endif