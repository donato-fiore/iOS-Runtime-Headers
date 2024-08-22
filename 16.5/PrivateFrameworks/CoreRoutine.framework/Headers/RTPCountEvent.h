// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RTPCOUNTEVENT_H
#define RTPCOUNTEVENT_H

@class NSDate, NSUUID;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>


@interface RTPCountEvent : NSObject <NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSDate *endDate; // ivar: _endDate
@property (readonly, nonatomic) NSUUID *eventID; // ivar: _eventID
@property (readonly, nonatomic) NSUInteger familyCount; // ivar: _familyCount
@property (readonly, nonatomic) NSUInteger friendsCount; // ivar: _friendsCount
@property (readonly, nonatomic) NSDate *startDate; // ivar: _startDate
@property (readonly, nonatomic) NSUInteger totalCount; // ivar: _totalCount


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionDictionary;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventID:(id)arg0 startDate:(id)arg1 endDate:(id)arg2 totalCount:(NSUInteger)arg3 familyCount:(NSUInteger)arg4 friendsCount:(NSUInteger)arg5 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif