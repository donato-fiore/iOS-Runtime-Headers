// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDXPCCLIENT_H
#define HDXPCCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>

#import "HDXPCProcess.h"

@interface HDXPCClient : NSObject

@property (readonly) NSXPCConnection *connection; // ivar: _connection
@property (readonly) HDXPCProcess *process; // ivar: _process


+(id)clientWithConnection:(id)arg0 error:(*id)arg1 ;
-(id)_initWithConnection:(id)arg0 process:(id)arg1 ;
-(id)description;
-(id)initWithConnection:(id)arg0 process:(id)arg1 ;
-(id)initWithProcess:(id)arg0 ;


@end


#endif