// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _DECPREDICTIONEXPIRY_H
#define _DECPREDICTIONEXPIRY_H

@class NSDate;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _DECPredictionExpiry : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDate *date; // ivar: _date
@property (readonly, nonatomic) NSUInteger type; // ivar: _type
@property (readonly, nonatomic) NSInteger value; // ivar: _value


+(BOOL)supportsSecureCoding;
+(id)expireAfter:(NSInteger)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithType:(NSUInteger)arg0 value:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif