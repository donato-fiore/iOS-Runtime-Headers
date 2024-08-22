// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ML3CLIENT_H
#define ML3CLIENT_H

@class NSString, NSXPCConnection;

#import <Foundation/Foundation.h>


@interface ML3Client : NSObject

@property (readonly, nonatomic) NSString *bundleID; // ivar: _bundleID
@property (readonly, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic, getter=isDaemonClient) BOOL daemonClient;
@property (readonly, nonatomic) int processID; // ivar: _processID


+(id)daemonClient;
+(id)processClient;
-(id)description;
-(id)init;
-(id)initWithConnection:(id)arg0 ;


@end


#endif