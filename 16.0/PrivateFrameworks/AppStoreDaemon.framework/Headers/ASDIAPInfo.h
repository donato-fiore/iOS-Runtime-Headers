// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ASDIAPINFO_H
#define ASDIAPINFO_H

@class NSNumber, NSDate, NSString;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ASDIAPInfo : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (retain, nonatomic) NSNumber *adamId; // ivar: _adamId
@property (retain, nonatomic) NSNumber *appAdamId; // ivar: _appAdamId
@property (nonatomic) BOOL autoRenewStatus; // ivar: _autoRenewStatus
@property (retain, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) NSNumber *expirationTimestamp;
@property (nonatomic) BOOL hasUsedFreeOffer; // ivar: _hasUsedFreeOffer
@property (nonatomic) BOOL hasUsedIntroPricingOffer; // ivar: _hasUsedIntroPricingOffer
@property (retain, nonatomic) NSDate *lastModifiedDate; // ivar: _lastModifiedDate
@property (readonly, nonatomic) NSNumber *lastModifiedTimestamp;
@property (retain, nonatomic) NSDate *purchaseDate; // ivar: _purchaseDate
@property (readonly, nonatomic) NSNumber *purchaseTimestamp;
@property (retain, nonatomic) NSString *subscriptionFamilyId; // ivar: _subscriptionFamilyId
@property (nonatomic) unsigned char type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif