// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FPDRTCREPORTINGSESSIONMANAGER_H
#define FPDRTCREPORTINGSESSIONMANAGER_H

@protocol OS_dispatch_queue, OS_dispatch_group;

#import <Foundation/Foundation.h>


@interface FPDRTCReportingSessionManager : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
}




+(id)defaultManager;
-(id)init;
-(id)sessionForDomainID:(id)arg0 providerVersion:(id)arg1 ;
-(id)sessionForProvider:(id)arg0 version:(id)arg1 ;
-(id)sessionForProviderID:(id)arg0 version:(id)arg1 ;
-(void)flushMessagesWithCompletion:(id)arg0 ;
-(void)postReportWithCategory:(NSUInteger)arg0 type:(NSUInteger)arg1 payload:(id)arg2 error:(id)arg3 decoratedPayload:(id)arg4 session:(id)arg5 observer:(id)arg6 ;


@end


#endif