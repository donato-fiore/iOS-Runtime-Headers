// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTPROXIMITYEVENT_H
#define RTPROXIMITYEVENT_H

@class NSDate, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTProximityEvent : NSObject <NSCopying, NSSecureCoding>



@property (nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSUUID *eventID; // ivar: _eventID
@property (readonly, nonatomic) NSInteger proximity; // ivar: _proximity
@property (readonly, nonatomic) NSInteger relationship; // ivar: _relationship
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventID:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 relationship:(NSInteger)arg3 proximity:(NSInteger)arg4 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif