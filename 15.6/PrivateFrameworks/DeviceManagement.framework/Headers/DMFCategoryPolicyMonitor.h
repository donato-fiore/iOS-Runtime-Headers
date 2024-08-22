// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DMFCATEGORYPOLICYMONITOR_H
#define DMFCATEGORYPOLICYMONITOR_H

@class NSUUID, NSArray;

#import <Foundation/Foundation.h>


@interface DMFCategoryPolicyMonitor : NSObject

@property (readonly, copy, nonatomic) NSUUID *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSArray *policyTypes; // ivar: _policyTypes


-(id)initWithPolicyChangeHandler:(id)arg0 ;
-(void)dealloc;
-(void)requestPoliciesForCategoryIdentifiers:(id)arg0 completionHandler:(id)arg1 ;


@end


#endif