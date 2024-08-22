// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PRLIVEPROTOBUFSTREAM_H
#define PRLIVEPROTOBUFSTREAM_H

@class NSXPCConnection, NSUUID, NSString;
@protocol PRProtobufClientProtocol, PRLiveProtobufStreamDelegate, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface PRLiveProtobufStream : NSObject <PRProtobufClientProtocol>

 {
    NSXPCConnection *_conn;
    NSUUID *_uniqueId;
}


@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) NSObject<PRLiveProtobufStreamDelegate> *delegate; // ivar: _delegate
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // ivar: _delegateQueue
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(id)init;
-(id)server;
-(void)consumeProtobufBytes:(id)arg0 ;
-(void)getUniqueClientIdentifier:(id)arg0 ;
-(void)invalidate;
-(void)start;
-(void)stop;


@end


#endif