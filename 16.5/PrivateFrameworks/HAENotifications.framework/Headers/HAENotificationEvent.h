// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAENOTIFICATIONEVENT_H
#define HAENOTIFICATIONEVENT_H

@class NSDateInterval, NSDictionary, NSUUID;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface HAENotificationEvent : NSObject <NSSecureCoding, NSCopying>



@property (readonly, nonatomic) NSDateInterval *dateInterval; // ivar: dateInterval
@property (readonly, nonatomic) unsigned int eventType; // ivar: eventType
@property (readonly, nonatomic) CGFloat level; // ivar: level
@property (readonly, nonatomic) NSDictionary *metadata; // ivar: metadata
@property (readonly, nonatomic) NSUUID *uuid; // ivar: uuid


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)getEventTypeString;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventType:(unsigned int)arg0 exposureLevel:(CGFloat)arg1 dateInterval:(id)arg2 metadata:(id)arg3 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif