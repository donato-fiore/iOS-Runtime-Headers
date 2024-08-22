// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKACCOUNTPROMOTIONBEHAVIOR_H
#define PKACCOUNTPROMOTIONBEHAVIOR_H

@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface PKAccountPromotionBehavior : NSObject <NSSecureCoding, NSCopying>



@property (nonatomic) NSInteger maxImpressionCount; // ivar: _maxImpressionCount
@property (nonatomic) CGFloat minRefreshPeriod; // ivar: _minRefreshPeriod
@property (nonatomic) CGFloat timeVisibleAfterCompleted; // ivar: _timeVisibleAfterCompleted


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAccountPromotionBehavior:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithMinRefreshPeriod:(id)arg0 maxImpressionCount:(id)arg1 timeVisibleAfterCompleted:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif