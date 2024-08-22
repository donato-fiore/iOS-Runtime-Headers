// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTENHANCEDMERCHANTBEHAVIOR_H
#define PKACCOUNTENHANCEDMERCHANTBEHAVIOR_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKAccountEnhancedMerchantBehavior : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) CGFloat minRefreshPeriod; // ivar: _minRefreshPeriod


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccountEnhancedMerchantBehavior:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMinRefreshPeriod:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif