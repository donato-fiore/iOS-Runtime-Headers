// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INCALENDAREVENT_H
#define INCALENDAREVENT_H

@class NSString, NSNumber, CLPlacemark, NSArray;
@protocol INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INDateComponentsRange.h"

@interface INCalendarEvent : NSObject <INCacheableContainer, INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSString *calendarPunchoutURI; // ivar: _calendarPunchoutURI
@property (readonly, copy, nonatomic) INDateComponentsRange *dateTimeRange; // ivar: _dateTimeRange
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *eventIdentifier; // ivar: _eventIdentifier
@property (readonly) NSUInteger hash;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSNumber *isContactBirthday; // ivar: _isContactBirthday
@property (readonly, copy, nonatomic) CLPlacemark *location; // ivar: _location
@property (readonly, copy, nonatomic) NSArray *participants; // ivar: _participants
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *title; // ivar: _title


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_cacheableObjects;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventIdentifier:(id)arg0 title:(id)arg1 dateTimeRange:(id)arg2 participants:(id)arg3 location:(id)arg4 isContactBirthday:(id)arg5 calendarPunchoutURI:(id)arg6 ;
-(void)_intents_updateContainerWithCache:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif