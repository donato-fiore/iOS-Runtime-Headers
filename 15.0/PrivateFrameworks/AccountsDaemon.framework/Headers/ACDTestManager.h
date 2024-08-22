// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ACDTESTMANAGER_H
#define ACDTESTMANAGER_H

@class NSXPCListenerEndpoint;

#import <Foundation/Foundation.h>


@interface ACDTestManager : NSObject

@property (readonly, nonatomic) NSXPCListenerEndpoint *remoteAccountStoreEndpoint;
@property (readonly, nonatomic) NSXPCListenerEndpoint *remoteOAuthSignerEndpoint;


+(id)testServer;
-(void)startTestServer;
-(void)stopTestServer;


@end


#endif