// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INALARM_H
#define INALARM_H

@class NSDateComponents, NSString, NSNumber;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INSpeakableString.h"
#import "INSleepAlarmAttribute.h"

@interface INAlarm : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSUInteger alarmRepeatScheduleOptions; // ivar: _alarmRepeatScheduleOptions
@property (readonly, copy, nonatomic) NSDateComponents *dateTime; // ivar: _dateTime
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSNumber *enabled; // ivar: _enabled
@property (readonly, copy, nonatomic) NSNumber *firing; // ivar: _firing
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) INSpeakableString *label; // ivar: _label
@property (readonly, copy, nonatomic) INSleepAlarmAttribute *sleepAlarmAttribute; // ivar: _sleepAlarmAttribute
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 dateTime:(id)arg1 label:(id)arg2 enabled:(id)arg3 firing:(id)arg4 alarmRepeatScheduleOptions:(NSUInteger)arg5 sleepAlarmAttribute:(id)arg6 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif