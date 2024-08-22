// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef NEIPCWRAPPER_H
#define NEIPCWRAPPER_H

@class NSUUID;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NEIPC.h"

@interface NEIPCWrapper : NSObject {
    NSObject<OS_dispatch_queue> *_sendQueue;
    NSObject<OS_dispatch_queue> *_ipcQueue;
    NEIPC *_ipc;
    NSUUID *_identifier;
}






@end


#endif