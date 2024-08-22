// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef INALARMSEARCH_H
#define INALARMSEARCH_H

@class NSString, NSNumber;
@protocol INJSONSerializable, NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "INSpeakableString.h"
#import "INDateComponentsRange.h"

@interface INAlarmSearch : NSObject <INJSONSerializable, NSCopying, NSSecureCoding>



@property (readonly, nonatomic) NSInteger alarmReferenceType; // ivar: _alarmReferenceType
@property (readonly, nonatomic) NSInteger alarmSearchStatus; // ivar: _alarmSearchStatus
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, copy, nonatomic) NSString *identifier; // ivar: _identifier
@property (readonly, copy, nonatomic) NSNumber *includeSleepAlarm; // ivar: _includeSleepAlarm
@property (readonly, copy, nonatomic) NSNumber *isMeridianInferred; // ivar: _isMeridianInferred
@property (readonly, copy, nonatomic) INSpeakableString *label; // ivar: _label
@property (readonly, nonatomic) NSInteger period; // ivar: _period
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) INDateComponentsRange *time; // ivar: _time


+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg0 codableDescription:(id)arg1 from:(id)arg2 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg0 codableDescription:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)descriptionAtIndent:(NSUInteger)arg0 ;
-(id)initWithAlarmReferenceType:(NSInteger)arg0 identifier:(id)arg1 time:(id)arg2 label:(id)arg3 alarmSearchStatus:(NSInteger)arg4 includeSleepAlarm:(id)arg5 period:(NSInteger)arg6 isMeridianInferred:(id)arg7 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif