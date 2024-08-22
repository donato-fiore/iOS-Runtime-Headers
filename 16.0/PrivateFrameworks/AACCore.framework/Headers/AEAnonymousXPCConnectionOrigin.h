// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AEANONYMOUSXPCCONNECTIONORIGIN_H
#define AEANONYMOUSXPCCONNECTIONORIGIN_H

@class NSXPCListenerEndpoint;
@protocol AEXPCConnectionOrigin;

#import <Foundation/Foundation.h>


@interface AEAnonymousXPCConnectionOrigin : NSObject <AEXPCConnectionOrigin>

 {
    NSXPCListenerEndpoint *_endpoint;
}




-(id)makeConnection;


@end


#endif