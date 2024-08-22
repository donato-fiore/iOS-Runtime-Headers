// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKPAYMENTTRANSACTIONFEES_H
#define PKPAYMENTTRANSACTIONFEES_H

@class NSSet;
@protocol NSSecureCoding, PKCloudStoreCoding;

#import <Foundation/Foundation.h>


@interface PKPaymentTransactionFees : NSObject <NSSecureCoding, PKCloudStoreCoding>



@property (retain, nonatomic) NSSet *fees; // ivar: _fees


+(BOOL)supportsSecureCoding;
+(id)_feesSetFromJsonString:(id)arg0 ;
+(id)recordNamePrefix;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToFees:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)itemType;
-(id)_feeItemsFromRecord:(id)arg0 ;
-(id)description;
-(id)initWithCloudStoreCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFeeItems:(id)arg0 ;
-(id)initWithJsonString:(id)arg0 ;
-(id)jsonArrayRepresentation;
-(id)jsonString;
-(id)primaryIdentifier;
-(id)recordTypesAndNamesForCodingType:(NSUInteger)arg0 ;
-(void)_encodeServerDataWithCloudStoreCoder:(id)arg0 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg0 ;
-(void)encodeWithCloudStoreCoder:(id)arg0 codingType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif