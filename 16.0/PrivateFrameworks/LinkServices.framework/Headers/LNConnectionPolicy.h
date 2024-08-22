// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef LNCONNECTIONPOLICY_H
#define LNCONNECTIONPOLICY_H


#import <Foundation/Foundation.h>


@interface LNConnectionPolicy : NSObject



+(BOOL)shouldExecuteActionOnApplicationWithBundleIdentifier:(id)arg0 ;
+(id)policyWithActionMetadata:(id)arg0 ;
+(id)policyWithActionMetadata:(id)arg0 effectiveBundleIdentifier:(id)arg1 ;
+(id)policyWithEntityMetadata:(id)arg0 ;
+(id)policyWithEntityMetadata:(id)arg0 effectiveBundleIdentifier:(id)arg1 ;
+(id)policyWithEntityQueryMetadata:(id)arg0 ;
+(id)policyWithQueryMetadata:(id)arg0 effectiveBundleIdentifier:(id)arg1 ;


@end


#endif