// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef BMCOMPUTESOURCECLIENT_H
#define BMCOMPUTESOURCECLIENT_H

@class NSXPCConnection, NSXPCListenerEndpoint, NSString;

#import <Foundation/Foundation.h>


@interface BMComputeSourceClient : NSObject {
    os_unfair_lock_s _lock;
    NSXPCConnection *_connection;
    NSXPCListenerEndpoint *_listenerEndpoint;
}


@property (readonly, nonatomic) NSXPCConnection *connection;
@property (readonly, copy, nonatomic) NSString *streamIdentifier; // ivar: _streamIdentifier


+(void)setUseSynchronousXPCMessageSending:(BOOL)arg0 ;
-(id)description;
-(id)init;
-(id)initWithStreamIdentifier:(id)arg0 ;
-(id)initWithStreamIdentifier:(id)arg0 listenerEndpoint:(id)arg1 ;
-(void)dealloc;
-(void)sendEvent:(id)arg0 timestamp:(CGFloat)arg1 signpostID:(NSUInteger)arg2 sendFullEvent:(BOOL)arg3 ;


@end


#endif