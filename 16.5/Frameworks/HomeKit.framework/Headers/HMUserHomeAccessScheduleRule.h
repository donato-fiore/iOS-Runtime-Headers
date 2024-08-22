// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMUSERHOMEACCESSSCHEDULERULE_H
#define HMUSERHOMEACCESSSCHEDULERULE_H

@class NSArray, NSString, NSDateComponents, NSDate;
@protocol HMFObject, NSCopying, NSMutableCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface HMUserHomeAccessScheduleRule : NSObject <HMFObject, NSCopying, NSMutableCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property NSUInteger daysOfTheWeek; // ivar: _daysOfTheWeek
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy) NSDateComponents *endTime; // ivar: _endTime
@property (readonly) NSUInteger hash;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (copy) NSDateComponents *startTime; // ivar: _startTime
@property (readonly) Class superclass;
@property (copy) NSDate *validFrom; // ivar: _validFrom
@property (copy) NSDate *validThrough; // ivar: _validThrough


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithStartTime:(id)arg0 endTime:(id)arg1 ;
-(id)initWithStartTime:(id)arg0 endTime:(id)arg1 daysOfTheWeek:(NSUInteger)arg2 validFrom:(id)arg3 validThrough:(id)arg4 ;
-(id)mutableCopyWithZone:(struct _NSZone *)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif