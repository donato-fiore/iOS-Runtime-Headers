// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKSHAREDACCOUNTCLOUDSTOREZONE_H
#define PKSHAREDACCOUNTCLOUDSTOREZONE_H

@class NSString, NSSet;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKSharedAccountCloudStoreZone : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSUInteger access; // ivar: _access
@property (copy, nonatomic) NSString *accountIdentifier; // ivar: _accountIdentifier
@property (nonatomic) NSUInteger accountType; // ivar: _accountType
@property (nonatomic) NSUInteger mode; // ivar: _mode
@property (copy, nonatomic) NSString *originatorAltDSID; // ivar: _originatorAltDSID
@property (copy, nonatomic) NSSet *sharedUsersAltDSIDs; // ivar: _sharedUsersAltDSIDs
@property (copy, nonatomic) NSString *zoneName; // ivar: _zoneName


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToSharedAccountCloudStoreZone:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)zoneType;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif