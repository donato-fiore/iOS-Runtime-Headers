// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICCONNECTIONCONFIGURATION_H
#define ICCONNECTIONCONFIGURATION_H

@class NSURL, NSString, NSNumber;
@protocol NSSecureCoding, NSCopying, OS_tcc_identity;

#import <Foundation/Foundation.h>

#import "ICUserIdentity.h"
#import "ICUserIdentityStore.h"

@interface ICConnectionConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *buildIdentifier; // ivar: _buildIdentifier
@property (readonly, nonatomic) NSObject<OS_tcc_identity> *clientIdentity; // ivar: _clientIdentity
@property (copy, nonatomic) NSNumber *familyMemberStoreID; // ivar: _familyMemberStoreID
@property (copy, nonatomic) NSString *libraryBagKey; // ivar: _libraryBagKey
@property (copy, nonatomic) NSString *purchaseClientIdentifier; // ivar: _purchaseClientIdentifier
@property (nonatomic) NSInteger requestReason; // ivar: _requestReason
@property (copy, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity
@property (readonly, nonatomic) ICUserIdentityStore *userIdentityStore; // ivar: _userIdentityStore


+(BOOL)supportsSecureCoding;
+(id)configurationFromSourceConfiguration:(id)arg0 userIdentity:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithUserIdentity:(id)arg0 ;
-(id)initWithUserIdentity:(id)arg0 userIdentityStore:(id)arg1 ;
-(id)initWithUserIdentity:(id)arg0 userIdentityStore:(id)arg1 clientIdentity:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif