// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ASCLIENTPOLICYMANAGER_H
#define ASCLIENTPOLICYMANAGER_H

@class NSString;


#import "ASPolicyManager.h"

@interface ASClientPolicyManager : ASPolicyManager

@property (retain, nonatomic) NSString *powerAssertionGroupIdentifier; // ivar: _powerAssertionGroupIdentifier


-(void)dealloc;
-(void)policyFailedToUpdate;
-(void)policyKeyChanged:(id)arg0 ;
-(void)requestPolicyUpdate;
-(void)setDelegate:(id)arg0 ;


@end


#endif