// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef HSCONNECTIONCONFIGURATION_H
#define HSCONNECTIONCONFIGURATION_H

@class NSURL, NSString, NSNumber, ICUserIdentity, ICUserIdentityStore;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HSConnectionConfiguration : NSObject <NSSecureCoding, NSCopying>



@property (copy, nonatomic) NSURL *baseURL; // ivar: _baseURL
@property (copy, nonatomic) NSString *buildIdentifier; // ivar: _buildIdentifier
@property (copy, nonatomic) NSNumber *familyMemberStoreID; // ivar: _familyMemberStoreID
@property (copy, nonatomic) NSString *libraryBagKey; // ivar: _libraryBagKey
@property (copy, nonatomic) NSString *purchaseClientIdentifier; // ivar: _purchaseClientIdentifier
@property (nonatomic) NSInteger requestReason; // ivar: _requestReason
@property (copy, nonatomic) ICUserIdentity *userIdentity; // ivar: _userIdentity
@property (readonly, nonatomic) ICUserIdentityStore *userIdentityStore; // ivar: _userIdentityStore


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif