// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CTCARRIERSPACEPLANGROUPOPTIONINFO_H
#define CTCARRIERSPACEPLANGROUPOPTIONINFO_H

@class NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface CTCarrierSpacePlanGroupOptionInfo : NSObject <NSCopying, NSSecureCoding>



@property (retain, nonatomic) NSString *planDetailsURL; // ivar: _planDetailsURL
@property (retain, nonatomic) NSString *planId; // ivar: _planId
@property (retain, nonatomic) NSString *planLabel; // ivar: _planLabel
@property (nonatomic) BOOL planPurchasable; // ivar: _planPurchasable
@property (retain, nonatomic) NSString *planPurchaseURL; // ivar: _planPurchaseURL
@property (readonly, nonatomic) NSInteger planStatus;
@property (nonatomic) unsigned char planSubscriptionStatus; // ivar: _planSubscriptionStatus
@property (retain, nonatomic) NSString *planTermsURL; // ivar: _planTermsURL
@property (nonatomic) NSInteger planType; // ivar: _planType
@property (retain, nonatomic) NSString *planValue; // ivar: _planValue


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif