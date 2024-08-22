// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AITRANSACTIONLOG_H
#define AITRANSACTIONLOG_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>


@interface AITransactionLog : NSObject {
    NSObject<OS_os_log> *_log;
}




+(id)_defaultLog;
+(void)initializeWithLog:(id)arg0 ;
+(void)logScenario:(id)arg0 step:(NSUInteger)arg1 success:(BOOL)arg2 forBundleID:(id)arg3 description:(id)arg4 ;
+(void)logStep:(NSUInteger)arg0 byParty:(NSUInteger)arg1 phase:(NSUInteger)arg2 success:(BOOL)arg3 forBundleID:(id)arg4 description:(id)arg5 ;
-(id)_initWithLog:(id)arg0 ;
-(void)_logScenario:(id)arg0 step:(NSUInteger)arg1 success:(BOOL)arg2 forBundleID:(id)arg3 description:(id)arg4 ;


@end


#endif