// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FCKEYVALUESTORESAVEPOLICY_H
#define FCKEYVALUESTORESAVEPOLICY_H


#import <Foundation/Foundation.h>


@interface FCKeyValueStoreSavePolicy : NSObject



+(id)appBackgroundPolicyWithActivityMonitor:(id)arg0 backgroundTaskable:(id)arg1 ;
+(id)defaultPolicy;
+(id)throttlePolicyWithDelay:(CGFloat)arg0 ;
+(id)unthrottledPolicy;
-(void)scheduleSaveOnQueue:(id)arg0 handler:(id)arg1 ;


@end


#endif