// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef AUDIOPLAYBACKCLIENTSERVICE_H
#define AUDIOPLAYBACKCLIENTSERVICE_H

@class NSXPCConnection, NSString;
@protocol REAudioPlaybackClientService, OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface AudioPlaybackClientService : NSObject <REAudioPlaybackClientService>

 {
    NSXPCConnection *_connection;
    NSObject<OS_dispatch_queue> *_engineQueue;
    atomic<unsigned long long> _connectionIdentifier;
}


@property (readonly) BOOL connected;
@property (readonly) NSUInteger connectionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) id *streamTokenDidCompleteCallback; // ivar: _streamTokenDidCompleteCallback
@property (readonly) Class superclass;


-(id)initWithXPCEndpoint:(id)arg0 queue:(id)arg1 ;
-(void)didReceiveConnectionIdentifier:(NSUInteger)arg0 ;
-(void)streamTokenDidComplete:(NSUInteger)arg0 ;


@end


#endif