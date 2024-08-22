// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ICDELEGATETOKEN_H
#define ICDELEGATETOKEN_H

@class NSData, NSDate;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface ICDelegateToken : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy, nonatomic) NSDate *expirationDate; // ivar: _expirationDate
@property (readonly, nonatomic, getter=isExpired) BOOL expired;
@property (readonly, nonatomic) NSInteger type; // ivar: _type


+(BOOL)supportsSecureCoding;
-(BOOL)expiresBeforeDate:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSInteger)arg0 data:(id)arg1 ;
-(id)initWithType:(NSInteger)arg0 data:(id)arg1 expirationDate:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif