// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef IDSPHONESUBSCRIPTION_H
#define IDSPHONESUBSCRIPTION_H

@class NSString;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface IDSPhoneSubscription : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *labelID; // ivar: _labelID
@property (nonatomic) NSInteger subscriptionSlot; // ivar: _subscriptionSlot


+(BOOL)supportsSecureCoding;
+(id)CTSIMSFromPhoneSubscriptions:(id)arg0 ;
+(id)phoneSubscriptionWithLabelID:(id)arg0 ;
+(id)phoneSubscriptionWithSIM:(id)arg0 ;
+(id)phoneSubscriptionWithSubscriptionSlot:(NSInteger)arg0 ;
+(id)phoneSubscriptionWithSubscriptionSlot:(NSInteger)arg0 andLabelID:(id)arg1 ;
+(id)phoneSubscriptionsFromCTSIMs:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToPhoneSubscription:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithSubscriptionSlot:(NSInteger)arg0 labelID:(id)arg1 ;
-(id)matchingSim;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif