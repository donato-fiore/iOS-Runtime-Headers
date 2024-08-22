// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ICLIGHTWEIGHTMUSICSUBSCRIPTIONSTATUS_H
#define ICLIGHTWEIGHTMUSICSUBSCRIPTIONSTATUS_H

@class NSArray, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICLightweightMusicSubscriptionStatus : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger capabilities;
@property (readonly, copy, nonatomic) NSArray *eligibleOffers; // ivar: _eligibleOffers
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) NSInteger reasonType; // ivar: _reasonType
@property (readonly, nonatomic) NSInteger statusType; // ivar: _statusType


+(BOOL)supportsSecureCoding;
-(BOOL)hasCapability:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithExtendedSubscriptionStatus:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif