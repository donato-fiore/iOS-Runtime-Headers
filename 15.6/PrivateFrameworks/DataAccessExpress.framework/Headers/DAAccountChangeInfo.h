// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef DAACCOUNTCHANGEINFO_H
#define DAACCOUNTCHANGEINFO_H

@class NSString, NSSet, NSDictionary;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface DAAccountChangeInfo : NSObject <NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (readonly, copy, nonatomic) NSString *accountTypeIdentifier; // ivar: _accountTypeIdentifier
@property (readonly, nonatomic) NSUInteger changeType; // ivar: _changeType
@property (readonly, copy, nonatomic) NSString *clientName; // ivar: _clientName
@property (readonly, copy, nonatomic) NSSet *modifiedDataClasses; // ivar: _modifiedDataClasses
@property (readonly, copy, nonatomic) NSDictionary *oldAccountProperties; // ivar: _oldAccountProperties
@property (readonly, copy, nonatomic) NSString *oldPassword; // ivar: _oldPassword
@property (readonly, copy, nonatomic) NSString *oldUsername; // ivar: _oldUsername
@property (readonly, copy, nonatomic) NSString *password; // ivar: _password
@property (readonly, copy, nonatomic) NSString *username; // ivar: _username


+(BOOL)supportsSecureCoding;
+(id)_stringForChangeType:(NSUInteger)arg0 ;
-(id)description;
-(id)initWithChangeType:(NSUInteger)arg0 accountIdentifier:(id)arg1 accountTypeIdentifier:(id)arg2 oldAccountProperties:(id)arg3 username:(id)arg4 password:(id)arg5 oldUsername:(id)arg6 oldPassword:(id)arg7 modifiedDataClasses:(id)arg8 clientName:(id)arg9 ;
-(id)initWithCoder:(id)arg0 ;
-(id)redactedDescription;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif