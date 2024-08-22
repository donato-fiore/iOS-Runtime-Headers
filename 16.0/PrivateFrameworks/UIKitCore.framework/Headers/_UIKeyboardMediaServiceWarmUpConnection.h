// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _UIKEYBOARDMEDIASERVICEWARMUPCONNECTION_H
#define _UIKEYBOARDMEDIASERVICEWARMUPCONNECTION_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _UIKeyboardMediaServiceWarmUpConnection : NSObject {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}




+(id)sharedConnection;
+(void)warmUp;
-(void)warmUp;


@end


#endif