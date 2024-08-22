// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef RTFETCHFINGERPRINTSOPTIONS_H
#define RTFETCHFINGERPRINTSOPTIONS_H

@class NSDateInterval;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTFetchFingerprintsOptions : NSObject <NSCopying, NSSecureCoding>



@property (copy, nonatomic) NSDateInterval *dateInterval; // ivar: _dateInterval
@property (nonatomic) NSUInteger settledState; // ivar: _settledState


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToOptions:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithDateInterval:(id)arg0 settledState:(NSUInteger)arg1 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif