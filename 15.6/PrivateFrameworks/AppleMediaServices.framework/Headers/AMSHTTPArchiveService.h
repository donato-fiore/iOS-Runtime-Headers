// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AMSHTTPARCHIVESERVICE_H
#define AMSHTTPARCHIVESERVICE_H

@class NSXPCConnection;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSHTTPArchiveService : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (copy, nonatomic) id *errorHandler; // ivar: _errorHandler
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


+(id)_sharedProxy;
+(void)recordTrafficWithTaskInfo:(id)arg0 ;
-(id)_createProxy;
-(id)_createRemoteConnection;
-(id)init;
-(void)_removeRemoteConnection;
-(void)dealloc;


@end


#endif