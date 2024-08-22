// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _IDSDEVICECONNECTION_H
#define _IDSDEVICECONNECTION_H

@class NSString, NSInputStream, NSOutputStream, NSNumber, NSMutableDictionary, NSDictionary;
@protocol IDSDaemonListenerProtocol, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface _IDSDeviceConnection : NSObject <IDSDaemonListenerProtocol>

 {
    NSString *_nsuuid;
    NSString *_service;
    NSString *_streamName;
    NSString *_serviceToken;
    NSString *_connectionUUID;
    id *_openSocketCompletionHandler;
    NSObject<OS_dispatch_queue> *_openSocketCompletionHandlerQueue;
    NSString *_openSocketCompletionHandlerID;
    NSInputStream *_inputStreamForSocket;
    NSOutputStream *_outputStreamForSocket;
    NSNumber *_clientTimeout;
    NSMutableDictionary *_awdMetrics;
    NSUInteger _mtu;
    int _socket;
    BOOL _isDefaultPairedDevice;
    BOOL _hasTimedOut;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSInputStream *inputStream;
@property (readonly, nonatomic) NSDictionary *metrics;
@property (readonly, nonatomic) NSUInteger mtu;
@property (readonly, nonatomic) NSOutputStream *outputStream;
@property (readonly, nonatomic) int socket;
@property (readonly) Class superclass;


-(BOOL)updateConnectionWithOptions:(id)arg0 error:(*id)arg1 ;
-(id)deviceConnectionKey;
// -(id)initWithDevice:(id)arg0 options:(id)arg1 completionHandler:(id)arg2 queue:(unk)arg3  ;
-(void)_cleanupCompletionBlock;
-(void)_close;
-(void)_connect;
-(void)_daemonDied:(id)arg0 ;
-(void)close;
-(void)dealloc;
-(void)setStreamPairWithInputStream:(id)arg0 outputStream:(id)arg1 ;
-(void)xpcObject:(id)arg0 objectContext:(id)arg1 ;


@end


#endif