// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PKPAYLATERCARDMAGNITUDES_H
#define PKPAYLATERCARDMAGNITUDES_H

@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface PKPayLaterCardMagnitudes : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSUInteger foodAndDrinksCount; // ivar: _foodAndDrinksCount
@property (nonatomic) NSUInteger funCount; // ivar: _funCount
@property (nonatomic) NSUInteger healthCount; // ivar: _healthCount
@property (nonatomic) NSUInteger servicesCount; // ivar: _servicesCount
@property (nonatomic) NSUInteger shoppingCount; // ivar: _shoppingCount
@property (nonatomic) NSUInteger transportcount; // ivar: _transportcount
@property (nonatomic) NSUInteger travelCount; // ivar: _travelCount
@property (nonatomic) NSUInteger unknownCount; // ivar: _unknownCount


+(BOOL)supportsSecureCoding;
+(id)emptyMangitudes;
+(id)fullMagnitude;
+(id)magnitudesFromFinancingPlans:(id)arg0 ;
+(id)randomMagnitude;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMaximumCount:(NSUInteger)arg0 ;
-(id)initWithUnknownCount:(NSUInteger)arg0 foodAndDrinksCount:(NSUInteger)arg1 shoppingCount:(NSUInteger)arg2 travelCount:(NSUInteger)arg3 servicesCount:(NSUInteger)arg4 funCount:(NSUInteger)arg5 healthCount:(NSUInteger)arg6 transportCount:(NSUInteger)arg7 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif