// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _NSHTTPCONNECTIONINFO_H
#define _NSHTTPCONNECTIONINFO_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NSURLSession.h"

@interface _NSHTTPConnectionInfo : NSObject {
    *HTTPConnectionInfo _httpConnectionInfo;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSURLSession *_session;
}


@property (readonly) BOOL isValid;


-(void)sendPingWithReceiveHandler:(id)arg0 ;


@end


#endif