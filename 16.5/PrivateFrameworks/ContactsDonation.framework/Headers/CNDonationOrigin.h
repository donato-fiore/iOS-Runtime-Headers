// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CNDONATIONORIGIN_H
#define CNDONATIONORIGIN_H

@class NSString, NSDate, NSDictionary;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CNDonationOrigin : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // ivar: _bundleIdentifier
@property (readonly, copy, nonatomic) NSString *clusterIdentifier; // ivar: _clusterIdentifier
@property (readonly, copy, nonatomic) NSDate *donationDate; // ivar: _donationDate
@property (readonly, copy, nonatomic) NSString *donationIdentifier; // ivar: _donationIdentifier
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, copy, nonatomic) NSDictionary *propertyListRepresentation;


+(BOOL)supportsSecureCoding;
+(id)originWithUpdatedDonationIdentifier:(id)arg0 fromOrigin:(id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithBundleIdentifier:(id)arg0 donationIdentifier:(id)arg1 clusterIdentifier:(id)arg2 donationDate:(id)arg3 expirationDate:(id)arg4 ;
-(id)initWithBundleIdentifier:(id)arg0 donationIdentifier:(id)arg1 donationDate:(id)arg2 expirationDate:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDonationOrigin:(id)arg0 ;
-(id)initWithPropertyListRepresentation:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif