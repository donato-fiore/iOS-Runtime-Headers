// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef NEIPCWRAPPER_H
#define NEIPCWRAPPER_H

@class NSUUID;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "NEIPC.h"

@interface NEIPCWrapper : NSObject

@property (readonly) NSUUID *identifier; // ivar: _identifier
@property (readonly) NEIPC *ipc; // ivar: _ipc
@property (readonly) NSObject<OS_dispatch_queue> *ipcQueue; // ivar: _ipcQueue
@property (readonly) NSObject<OS_dispatch_queue> *sendQueue; // ivar: _sendQueue


+(id)sharedWrapperForSession:(*void)arg0 ;
+(void)cancelSharedWrapperForSession:(*void)arg0 ;
-(id)initWithSession:(*void)arg0 identifier:(id)arg1 ;
-(void)cancel;


@end


#endif