// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSUSERACCOUNT_H
#define VSUSERACCOUNT_H

@class NSString, NSDate, NSArray, NSURL;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface VSUserAccount : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSString *accountProviderIdentifier; // ivar: _accountProviderIdentifier
@property (nonatomic) NSInteger accountType; // ivar: _accountType
@property (copy, nonatomic) NSString *authenticationData; // ivar: _authenticationData
@property (copy, nonatomic) NSString *billingIdentifier; // ivar: _billingIdentifier
@property (nonatomic, getter=isDeleted) BOOL deleted; // ivar: _deleted
@property (nonatomic) NSInteger deviceCategory; // ivar: _deviceCategory
@property (nonatomic, getter=isFromCurrentDevice) BOOL fromCurrentDevice; // ivar: _fromCurrentDevice
@property (copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (nonatomic) NSUInteger keychainItemHash; // ivar: _keychainItemHash
@property (nonatomic) BOOL requiresSystemTrust; // ivar: _requiresSystemTrust
@property (retain, nonatomic) NSString *sourceIdentifier; // ivar: _sourceIdentifier
@property (nonatomic) NSInteger sourceType; // ivar: _sourceType
@property (copy, nonatomic) NSDate *subscriptionBillingCycleEndDate; // ivar: _subscriptionBillingCycleEndDate
@property (copy, nonatomic) NSArray *tierIdentifiers; // ivar: _tierIdentifiers
@property (copy, nonatomic) NSURL *updateURL; // ivar: _updateURL


+(BOOL)supportsSecureCoding;
+(id)new;
-(id)description;
-(id)init;
-(id)initWithAccountType:(NSInteger)arg0 updateURL:(id)arg1 ;
-(id)initWithAccountType:(NSInteger)arg0 updateURL:(id)arg1 sourceType:(NSInteger)arg2 sourceIdentifier:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif