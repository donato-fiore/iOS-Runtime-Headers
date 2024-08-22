// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASPERACCOUNTPOLICYDATA_H
#define ASPERACCOUNTPOLICYDATA_H

@class NSString, NSDictionary;

#import <Foundation/Foundation.h>


@interface ASPerAccountPolicyData : NSObject {
    NSString *_accountPersistentUUID;
}


@property (readonly, nonatomic) NSString *policyKey;
@property (readonly, nonatomic) NSDictionary *policyValues;


-(id)description;
-(id)initWithAccountPersistentUUID:(id)arg0 ;


@end


#endif