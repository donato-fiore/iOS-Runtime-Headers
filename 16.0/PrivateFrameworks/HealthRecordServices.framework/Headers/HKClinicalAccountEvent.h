// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HKCLINICALACCOUNTEVENT_H
#define HKCLINICALACCOUNTEVENT_H

@class NSUUID, NSString, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HKClinicalAccountEvent : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSUUID *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy, nonatomic) NSString *caller; // ivar: _caller
@property (readonly, nonatomic) NSInteger credentialStateAfter; // ivar: _credentialStateAfter
@property (readonly, copy, nonatomic) NSString *credentialStateAfterDescription;
@property (readonly, nonatomic) NSInteger credentialStateBefore; // ivar: _credentialStateBefore
@property (readonly, copy, nonatomic) NSString *credentialStateBeforeDescription;
@property (readonly, copy, nonatomic) NSString *eventDescription; // ivar: _eventDescription
@property (readonly, copy, nonatomic) NSDate *timestamp; // ivar: _timestamp
@property (readonly, nonatomic) NSInteger type; // ivar: _type
@property (readonly, copy, nonatomic) NSString *typeDescription;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToClinicalAccountEvent:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)eventMarkedAsFailedWithError:(id)arg0 ;
-(id)eventWithAppendedEventDescription:(id)arg0 ;
-(id)eventWithAppendedRefreshToken:(id)arg0 description:(id)arg1 ;
-(id)eventWithUpdatedCredentialStateAfter:(NSInteger)arg0 ;
-(id)eventWithUpdatedCredentialStateBefore:(NSInteger)arg0 ;
-(id)init;
-(id)initWithAccountIdentifier:(id)arg0 type:(NSInteger)arg1 caller:(id)arg2 timestamp:(id)arg3 eventDescription:(id)arg4 ;
-(id)initWithAccountIdentifier:(id)arg0 type:(NSInteger)arg1 caller:(id)arg2 timestamp:(id)arg3 eventDescription:(id)arg4 credentialStateBefore:(NSInteger)arg5 credentialStateAfter:(NSInteger)arg6 ;
-(id)initWithAccountIdentifier:(id)arg0 type:(NSInteger)arg1 caller:(id)arg2 timestamp:(id)arg3 eventDescription:(id)arg4 incomingToken:(id)arg5 currentToken:(id)arg6 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif