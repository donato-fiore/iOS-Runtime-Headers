// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKFHIRCREDENTIALREFRESHRESULT_H
#define HKFHIRCREDENTIALREFRESHRESULT_H

@class NSError;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "HDFHIRAuthResponse.h"
#import "HKFHIRCredential.h"
#import "HKFHIRRequestTaskEndStates.h"

@interface HKFHIRCredentialRefreshResult : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) HDFHIRAuthResponse *authResponse; // ivar: _authResponse
@property (readonly, copy, nonatomic) HKFHIRCredential *credential; // ivar: _credential
@property (readonly, copy, nonatomic) HKFHIRRequestTaskEndStates *endStates; // ivar: _endStates
@property (readonly, copy, nonatomic) NSError *error; // ivar: _error


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithCredential:(id)arg0 authResponse:(id)arg1 endStates:(id)arg2 error:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif