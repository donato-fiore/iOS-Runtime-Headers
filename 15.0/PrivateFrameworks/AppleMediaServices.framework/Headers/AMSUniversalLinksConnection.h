// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSUNIVERSALLINKSCONNECTION_H
#define AMSUNIVERSALLINKSCONNECTION_H

@class NSXPCConnection;
@protocol AMSUniversalLinksServiceProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AMSUniversalLinksConnection : NSObject

@property (retain, nonatomic) NSXPCConnection *connection; // ivar: _connection
@property (readonly, nonatomic) NSObject<AMSUniversalLinksServiceProtocol> *proxy;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // ivar: _queue


-(id)_makeRemoteConnectionInterface;
-(id)_newRemoteConnection;
-(id)init;
-(void)_removeRemoteConnection;
-(void)dealloc;


@end


#endif