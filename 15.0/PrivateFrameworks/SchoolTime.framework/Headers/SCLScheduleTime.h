// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SCLSCHEDULETIME_H
#define SCLSCHEDULETIME_H

@class NSDateComponents;
@protocol NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCLScheduleTime : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSDateComponents *dateComponents;
@property (readonly, nonatomic) NSUInteger hour; // ivar: _hour
@property (readonly, nonatomic) NSUInteger minute; // ivar: _minute


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(NSInteger)compare:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHour:(NSUInteger)arg0 minute:(NSUInteger)arg1 ;
-(id)initWithScheduleTime:(id)arg0 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif