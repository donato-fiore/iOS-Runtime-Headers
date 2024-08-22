// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKACCOUNTENHANCEDMERCHANTBEHAVIOR_H
#define PKACCOUNTENHANCEDMERCHANTBEHAVIOR_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKAccountEnhancedMerchantBehavior : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) CGFloat longMinRefreshPeriod; // ivar: _longMinRefreshPeriod
@property (nonatomic) CGFloat minRefreshPeriod; // ivar: _minRefreshPeriod
@property (nonatomic) CGFloat shortMinRefreshPeriod; // ivar: _shortMinRefreshPeriod


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccountEnhancedMerchantBehavior:(id)arg0 ;
-(CGFloat)cooldownPeriodForLevel:(NSUInteger)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMinRefreshPeriod:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif