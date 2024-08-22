// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CBSCLIENT_H
#define CBSCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface CBSClient : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection


+(id)defaultClient;
-(id)init;
-(id)remoteAlertServer;
-(id)systemServicesServer;


@end


#endif