// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DTTAPSERVICE_H
#define DTTAPSERVICE_H

@class DTXService, NSString;
@protocol DTTapAuthorizedAPI, DTTapBulkDataReceiver, DTTapServiceDelegate, OS_dispatch_queue;


#import "DTTapConfig.h"
#import "DTTapLocal.h"
#import "DTTapServiceMessageSender.h"

@interface DTTapService : DTXService <DTTapAuthorizedAPI, DTTapBulkDataReceiver>

 {
    id<DTTapServiceDelegate> *_delegate;
    DTTapConfig *_config;
    DTTapLocal *_tap;
    BOOL _tapIsRunning;
    unsigned int _tapServiceID;
    NSObject<OS_dispatch_queue> *_serialQueue;
    DTTapServiceMessageSender *_messageSender;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(void)registerCapabilities:(id)arg0 forDelegateClass:(Class)arg1 forConnection:(id)arg2 ;
-(id)initWithChannel:(id)arg0 ;
-(void)fetchDataNow;
-(void)handleBulkData:(*void)arg0 size:(NSUInteger)arg1 destructor:(id)arg2 ;
-(void)handleBulkData:(id)arg0 ;
-(void)messageReceived:(id)arg0 ;
-(void)pause;
-(void)sendFrameMessage:(id)arg0 ;
-(void)sendHeartbeatTime:(NSUInteger)arg0 ;
-(void)setConfig:(id)arg0 ;
-(void)start;
-(void)stop;
-(void)unpause;


@end


#endif