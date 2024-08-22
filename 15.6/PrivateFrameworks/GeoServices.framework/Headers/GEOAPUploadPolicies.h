// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOAPUPLOADPOLICIES_H
#define GEOAPUPLOADPOLICIES_H

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface GEOAPUploadPolicies : NSObject {
    NSObject<OS_dispatch_queue> *_isoQueue;
    NSMutableDictionary *_policyDict;
}




+(id)sharedPolicies;
-(CGFloat)ttlForUploadPolicyType:(int)arg0 ;
-(id)init;
-(id)uploadPolicyForUploadPolicyType:(int)arg0 ;
-(void)_updatePolicyConfigForUploadPolicyConfigType:(int)arg0 configKey:(struct ? )arg1 ;


@end


#endif