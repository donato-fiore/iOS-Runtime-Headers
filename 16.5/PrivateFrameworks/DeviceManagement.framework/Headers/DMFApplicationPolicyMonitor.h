// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef DMFAPPLICATIONPOLICYMONITOR_H
#define DMFAPPLICATIONPOLICYMONITOR_H

@class NSMutableDictionary, NSUUID, NSArray;

#import <Foundation/Foundation.h>

#import "DMFPolicyRegistration.h"

@interface DMFApplicationPolicyMonitor : NSObject {
    NSMutableDictionary *_lastRequestDateByBundleIdentifiers;
}


@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *policyTypes; // ivar: _policyTypes
@property (readonly, nonatomic) DMFPolicyRegistration *registration; // ivar: _registration


+(id)_fetchCategoriesForBundleIdentifiers:(id)arg0 withError:(*id)arg1 ;
+(id)fetchParentBundleIdentifiersForBundleIdentifiers:(id)arg0 ;
+(void)_fetchCategoriesForBundleIdentifiers:(id)arg0 completionHandler:(id)arg1 ;
// +(void)createPolicyMonitorWithPolicyChangeHandler:(id)arg0 completionHandler:(unk)arg1  ;
// -(id)_initWithPolicyChangeHandler:(id)arg0 addingRegistration:(unk)arg1  ;
-(id)initWithPolicyChangeHandler:(id)arg0 ;
-(id)requestPoliciesForBundleIdentifiers:(id)arg0 withError:(*id)arg1 ;
-(void)dealloc;
-(void)requestPoliciesForBundleIdentifiers:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif