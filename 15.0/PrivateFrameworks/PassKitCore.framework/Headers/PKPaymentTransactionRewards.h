// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef PKPAYMENTTRANSACTIONREWARDS_H
#define PKPAYMENTTRANSACTIONREWARDS_H

@class NSArray;
@protocol NSSecureCoding, PKCloudStoreCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKPaymentTransactionRewards : NSObject <NSSecureCoding, PKCloudStoreCoding, NSCopying>



@property (retain, nonatomic) NSArray *rewardsItems; // ivar: _rewardsItems


+(BOOL)supportsSecureCoding;
+(id)_rewardsItemsSetFromJsonString:(id)arg0 ;
+(id)recordNamePrefix;
-(BOOL)containsItemOfType:(NSUInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToRewards:(id)arg0 ;
-(NSUInteger)hash;
-(NSUInteger)itemType;
-(id)_rewardItemsFromRecord:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCloudStoreCoder:(id)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithJsonString:(id)arg0 ;
-(id)initWithRewardsItems:(id)arg0 ;
-(id)jsonArrayRepresentation;
-(id)jsonString;
-(id)primaryIdentifier;
-(id)recordTypesAndNamesForCodingType:(NSUInteger)arg0 ;
-(id)totalEligibleValueForUnit:(NSUInteger)arg0 ;
-(void)_encodeServerDataWithCloudStoreCoder:(id)arg0 ;
-(void)applyPropertiesFromCloudStoreRecord:(id)arg0 ;
-(void)encodeWithCloudStoreCoder:(id)arg0 codingType:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif