// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SNANALYSISCLIENT_H
#define SNANALYSISCLIENT_H

@class NSXPCConnection, NSMutableArray;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SNAnalysisClient : NSObject {
    id *_connectionToServerGenerator;
    NSXPCConnection *_xpcConnectionToServer;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_pendingInvalidationHandlers;
}




-(id)init;


@end


#endif