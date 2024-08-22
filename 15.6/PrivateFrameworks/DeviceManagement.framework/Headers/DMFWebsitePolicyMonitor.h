// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFWEBSITEPOLICYMONITOR_H
#define DMFWEBSITEPOLICYMONITOR_H

@class NSUUID, NSArray;

#import <Foundation/Foundation.h>


@interface DMFWebsitePolicyMonitor : NSObject

@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *policyTypes; // ivar: _policyTypes


-(id)initWithPolicyChangeHandler:(id)arg0 ;
-(void)_fetchCategoriesIfNeededForWebsiteURLs:(id)arg0 response:(id)arg1 ;
-(void)dealloc;
-(void)requestPoliciesForWebsites:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif