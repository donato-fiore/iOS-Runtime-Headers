// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SPRMONITORMANAGER_H
#define SPRMONITORMANAGER_H


#import <Foundation/Foundation.h>


@interface SPRMonitorManager : NSObject {
    ? url;
    ? mBroadcast;
    ? mLogger;
    ? mReporter;
    ? timer;
    ? timerCallback;
    ? started;
    ? batchSize;
}




-(BOOL)ping;
-(BOOL)start;
-(BOOL)stop;
-(BOOL)storeAuditLog:(id)arg0 error:(*id)arg1 ;
-(BOOL)storeAuditLogWithData:(id)arg0 error:(*id)arg1 ;
-(id)init;
-(id)initWithUrl:(id)arg0 persist:(id)arg1 channel:(id)arg2 error:(*id)arg3 ;
-(id)initWithUrl:(id)arg0 persist:(id)arg1 error:(*id)arg2 ;
-(id)initWithUrl:(id)arg0 storagePath:(id)arg1 channel:(id)arg2 error:(*id)arg3 ;
-(id)initWithUrl:(id)arg0 storagePath:(id)arg1 channel:(id)arg2 sendRate:(CGFloat)arg3 error:(*id)arg4 ;
-(id)sendAuditLogsAndReturnError:(*id)arg0 ;
-(id)sendIncidentLog:(id)arg0 error:(*id)arg1 ;
-(id)sendIncidentLogWithData:(id)arg0 error:(*id)arg1 ;
-(void)dealloc;


@end


#endif