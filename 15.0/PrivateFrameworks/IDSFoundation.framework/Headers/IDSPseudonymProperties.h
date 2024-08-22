// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef IDSPSEUDONYMPROPERTIES_H
#define IDSPSEUDONYMPROPERTIES_H

@class NSArray, NSDictionary, NSDate, NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface IDSPseudonymProperties : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSArray *allowedServices; // ivar: _allowedServices
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSDate *expirationDate;
@property (readonly, nonatomic) CGFloat expiryEpoch; // ivar: _expiryEpoch
@property (readonly, nonatomic) NSString *featureID; // ivar: _featureID
@property (readonly, nonatomic) NSString *scopeID; // ivar: _scopeID


+(BOOL)supportsSecureCoding;
-(BOOL)hasBeenExpiredForAtLeast:(CGFloat)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPseudonymProperties:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;
-(id)initWithFeatureID:(id)arg0 scopeID:(id)arg1 expiryEpoch:(CGFloat)arg2 allowedServices:(id)arg3 ;
-(id)withUpdatedAllowedServices:(id)arg0 ;
-(id)withUpdatedExpiryEpoch:(CGFloat)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif