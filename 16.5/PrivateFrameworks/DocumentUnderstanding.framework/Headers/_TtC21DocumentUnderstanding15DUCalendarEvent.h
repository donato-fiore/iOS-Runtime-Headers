// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21DOCUMENTUNDERSTANDING15DUCALENDAREVENT_H
#define _TTC21DOCUMENTUNDERSTANDING15DUCALENDAREVENT_H

@class NSDateComponents, NSTimeZone;
@protocol NSCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface _TtC21DocumentUnderstanding15DUCalendarEvent : NSObject <NSCoding, NSCopying>

 {
    ? startDateComponents;
    ? startTimezone;
    ? endDateComponents;
    ? endTimezone;
}


@property (nonatomic, copy) NSDateComponents *endDateComponents;
@property (nonatomic, copy) NSTimeZone *endTimezone;
@property (nonatomic) BOOL isAllDay; // ivar: isAllDay
@property (nonatomic, copy) NSDateComponents *startDateComponents;
@property (nonatomic, copy) NSTimeZone *startTimezone;


-(id)copyWithZone:(*void)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif