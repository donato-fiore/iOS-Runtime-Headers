// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LSDATABASEBLOCKINGFETCHCLIENT_H
#define LSDATABASEBLOCKINGFETCHCLIENT_H

@class NSXPCConnection;
@protocol LSDatabaseBlockingFetchProtocol;

#import <Foundation/Foundation.h>


@interface LSDatabaseBlockingFetchClient : NSObject <LSDatabaseBlockingFetchProtocol>

 {
    NSXPCConnection *_connection;
}




-(id)initWithXPCConnection:(id)arg0 ;
-(void)getServerStoreBlockingWithCompletionHandler:(id)arg0 ;


@end


#endif