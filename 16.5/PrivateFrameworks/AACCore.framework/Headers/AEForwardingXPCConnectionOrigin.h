// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AEFORWARDINGXPCCONNECTIONORIGIN_H
#define AEFORWARDINGXPCCONNECTIONORIGIN_H

@class NSXPCConnection;
@protocol AEXPCConnectionOrigin;

#import <Foundation/Foundation.h>


@interface AEForwardingXPCConnectionOrigin : NSObject <AEXPCConnectionOrigin>

 {
    NSXPCConnection *_connection;
}




-(id)makeConnection;


@end


#endif