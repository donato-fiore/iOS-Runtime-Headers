// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AMSMEDIATOKEN_H
#define AMSMEDIATOKEN_H

@class NSDate, NSString;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AMSMediaToken : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic) CGFloat lifetime; // ivar: _lifetime
@property (readonly, copy, nonatomic) NSString *tokenString; // ivar: _tokenString
@property (readonly, nonatomic, getter=isValid) BOOL valid; // ivar: _valid


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isExpired;
-(BOOL)willExpireWithin:(CGFloat)arg0 ;
-(CGFloat)percentageOfLifetimeRemaining;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithString:(id)arg0 expirationDate:(id)arg1 lifetime:(CGFloat)arg2 ;
-(id)initWithString:(id)arg0 expirationDate:(id)arg1 lifetime:(CGFloat)arg2 valid:(BOOL)arg3 ;
-(id)invalidCopy;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif