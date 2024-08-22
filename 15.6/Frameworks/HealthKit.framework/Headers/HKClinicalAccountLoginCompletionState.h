// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCLINICALACCOUNTLOGINCOMPLETIONSTATE_H
#define HKCLINICALACCOUNTLOGINCOMPLETIONSTATE_H

@class NSNumber;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HKClinicalAccount.h"

@interface HKClinicalAccountLoginCompletionState : NSObject <NSSecureCoding>



@property (readonly, nonatomic) HKClinicalAccount *account; // ivar: _account
@property (copy, nonatomic) NSNumber *alternateCredentialPersistentID; // ivar: _alternateCredentialPersistentID
@property (readonly, nonatomic) BOOL wasRelogin; // ivar: _wasRelogin


+(BOOL)supportsSecureCoding;
-(id)description;
-(id)initWithAccount:(id)arg0 wasRelogin:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif