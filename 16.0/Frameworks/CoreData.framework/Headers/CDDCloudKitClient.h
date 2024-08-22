// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CDDCLOUDKITCLIENT_H
#define CDDCLOUDKITCLIENT_H

@class NSXPCConnection;

#import <Foundation/Foundation.h>


@interface CDDCloudKitClient : NSObject {
    BOOL _interrupted;
    BOOL _invalidated;
    NSXPCConnection *_connection;
}




-(BOOL)_valid;
-(id)initWithMachServiceName:(id)arg0 ;
-(void)dealloc;
-(void)handleMessage:(id)arg0 reply:(id)arg1 ;


@end


#endif