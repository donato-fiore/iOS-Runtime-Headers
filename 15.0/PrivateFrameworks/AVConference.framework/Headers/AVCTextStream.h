// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AVCTEXTSTREAM_H
#define AVCTEXTSTREAM_H

@class NSDictionary;
@protocol OS_dispatch_queue, AVCTextStreamDelegate;

#import <Foundation/Foundation.h>

#import "AVConferenceXPCClient.h"
#import "AVCMediaStreamConfig.h"

@interface AVCTextStream : NSObject {
    AVConferenceXPCClient *_connection;
    NSObject<OS_dispatch_queue> *_queue;
}


@property (retain, nonatomic) NSDictionary *capabilities; // ivar: _capabilities
@property (retain, nonatomic) AVCMediaStreamConfig *configuration; // ivar: _configuration
@property (nonatomic) NSObject<AVCTextStreamDelegate> *delegate; // ivar: _delegate
@property (nonatomic) NSInteger direction;
@property (nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled;
@property (nonatomic) CGFloat rtcpSendIntervalSec;
@property (nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled;
@property (nonatomic) CGFloat rtcpTimeOutIntervalSec;
@property (nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled;
@property (nonatomic) CGFloat rtpTimeOutIntervalSec;
@property (readonly, nonatomic) NSInteger streamToken; // ivar: _streamToken


-(BOOL)configure:(id)arg0 error:(*id)arg1 ;
-(BOOL)initializeServerWithNetworkSockets:(id)arg0 callID:(id)arg1 error:(*id)arg2 ;
-(BOOL)validateResultsDictionary:(id)arg0 error:(*id)arg1 ;
-(id)initWithNetworkSockets:(id)arg0 callID:(id)arg1 error:(*id)arg2 ;
-(id)newNSErrorWithErrorDictionary:(id)arg0 ;
-(void)dealloc;
-(void)deregisterBlocksForDelegateNotifications;
-(void)pause;
-(void)refreshLoggingParameters;
-(void)registerBlocksForDelegateNotifications;
-(void)resume;
-(void)start;
-(void)stop;


@end


#endif