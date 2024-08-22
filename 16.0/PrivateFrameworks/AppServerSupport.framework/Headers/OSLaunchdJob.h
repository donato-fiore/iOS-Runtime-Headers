// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef OSLAUNCHDJOB_H
#define OSLAUNCHDJOB_H

@class NSUUID;
@protocol OS_xpc_object, OS_dispatch_source, OS_dispatch_queue;

#import <Foundation/Foundation.h>

#import "OSLaunchdDomain.h"

@interface OSLaunchdJob : NSObject {
    NSObject<OS_xpc_object> *_plist;
    OSLaunchdDomain *_domain;
    NSObject<OS_dispatch_source> *_monitor_source;
    id *_monitor_handler;
    NSObject<OS_dispatch_queue> *_monitor_queue;
}


@property (readonly, nonatomic) NSUUID *handle; // ivar: _handle


+(BOOL)disableLogging_4watchdogd;
+(BOOL)submitAll:(id)arg0 error:(*id)arg1 ;
+(NSInteger)jobStateFromMessage:(id)arg0 ;
+(id)_createJobFromReplyHandle:(id)arg0 ;
+(id)copyJobWithHandle:(id)arg0 ;
+(id)copyJobWithLabel:(id)arg0 domain:(id)arg1 ;
+(id)copyJobWithPid:(int)arg0 ;
+(id)copyJobsManagedBy:(id)arg0 error:(*id)arg1 ;
+(id)jobInfoFromMessage:(id)arg0 ;
+(id)submitExtension:(id)arg0 overlay:(id)arg1 domain:(id)arg2 error:(*id)arg3 ;
+(int)_monitorNormalizeError:(int)arg0 ;
+(void)setDisableLogging_4watchdogd:(BOOL)arg0 ;
-(BOOL)remove:(*id)arg0 ;
-(BOOL)submit:(*id)arg0 ;
-(id)_initWithHandle:(id)arg0 ;
-(id)_newRequest;
-(id)_newSubmitRequest;
-(id)createInstance:(unsigned char)arg0 error:(*id)arg1 ;
-(id)description;
-(id)getCurrentJobInfo;
-(id)initWithPlist:(id)arg0 ;
-(id)initWithPlist:(id)arg0 domain:(id)arg1 ;
-(id)start:(*id)arg0 ;
-(id)submitAndStart:(*id)arg0 ;
-(void)_populateHandle:(id)arg0 ;
-(void)_setupMonitorSourceWithPort:(unsigned int)arg0 onQueue:(id)arg1 withHandler:(id)arg2 ;
-(void)_startMonitoringAfterSubmit:(id)arg0 ;
-(void)cancelMonitor;
-(void)monitorOnQueue:(id)arg0 withHandler:(id)arg1 ;
-(void)processSubmitReply:(id)arg0 ;


@end


#endif