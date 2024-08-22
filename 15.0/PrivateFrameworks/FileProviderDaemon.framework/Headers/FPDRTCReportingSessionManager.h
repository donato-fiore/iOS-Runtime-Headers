// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FPDRTCREPORTINGSESSIONMANAGER_H
#define FPDRTCREPORTINGSESSIONMANAGER_H

@class RTCReporting, NSMutableArray;
@protocol OS_dispatch_queue, OS_dispatch_source;

#import <Foundation/Foundation.h>


@interface FPDRTCReportingSessionManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _isConnecting;
    timespec _sessionOpenTime;
    RTCReporting *_session;
    timespec _lastPostTime;
    NSMutableArray *_buffer;
    NSUInteger _bufferHead;
}




+(id)defaultManager;
-(BOOL)enqueue:(id)arg0 ;
-(BOOL)hasSessionExpired;
-(id)init;
-(id)sessionForDomainID:(id)arg0 ;
-(id)sessionForProvider:(id)arg0 ;
-(id)sessionForProviderID:(id)arg0 ;
-(void)_flushBuffer;
-(void)flushMessages;
-(void)postReportWithCategory:(NSUInteger)arg0 type:(NSUInteger)arg1 payload:(id)arg2 completion:(id)arg3 ;
-(void)wantsConnection;


@end


#endif