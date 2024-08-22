// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLSEKCALENDAR_H
#define CLSEKCALENDAR_H

@class NSString, NSSet;
@protocol NSCoding;

#import <Foundation/Foundation.h>


@interface CLSEKCalendar : NSObject <NSCoding>



@property (readonly) NSString *calendarIdentifier; // ivar: _calendarIdentifier
@property (readonly) BOOL hasSharees; // ivar: _hasSharees
@property (readonly) NSSet *shareesAndOwner; // ivar: _shareesAndOwner


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEKCalendar:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif