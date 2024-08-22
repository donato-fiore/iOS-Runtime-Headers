// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFICLOUDPOLICYMONITOR_H
#define DMFICLOUDPOLICYMONITOR_H

@class NSUUID, NSArray;

#import <Foundation/Foundation.h>


@interface DMFiCloudPolicyMonitor : NSObject

@property (nonatomic) NSInteger iCloudLogoutPolicy; // ivar: _iCloudLogoutPolicy
@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *policyTypes; // ivar: _policyTypes


+(id)iCloudLogoutPolicyForPoliciesByType:(id)arg0 ;
+(id)new;
-(id)init;
-(id)initWithPolicyChangeHandler:(id)arg0 ;
-(id)requestiCloudLogoutPolicyWithError:(*id)arg0 ;
-(void)dealloc;
-(void)requestiCloudLogoutPolicyWithCompletionHandler:(id)arg0 ;


@end


#endif