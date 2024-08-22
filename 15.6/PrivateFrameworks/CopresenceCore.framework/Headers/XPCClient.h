// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef XPCCLIENT_H
#define XPCCLIENT_H

@class NSString, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface XPCClient : NSObject

@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) int processID; // ivar: _processID


-(id)initWithConnection:(id)arg0 ;


@end


#endif