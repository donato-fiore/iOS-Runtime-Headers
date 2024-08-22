// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBUPDATEALARMINTENT_H
#define _INPBUPDATEALARMINTENT_H

@class PBCodable, NSString;
@protocol _INPBUpdateAlarmIntent, NSSecureCoding, NSCopying;


#import "_INPBAlarm.h"
#import "_INPBAlarmSearch.h"
#import "_INPBIntentMetadata.h"
#import "_INPBDataString.h"
#import "_INPBDateTimeRange.h"

@interface _INPBUpdateAlarmIntent : PBCodable <_INPBUpdateAlarmIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBAlarm *alarm; // ivar: _alarm
@property (retain, nonatomic) _INPBAlarmSearch *alarmSearch; // ivar: _alarmSearch
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAlarm;
@property (readonly, nonatomic) BOOL hasAlarmSearch;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasOperation;
@property (readonly, nonatomic) BOOL hasProposedLabel;
@property (readonly, nonatomic) BOOL hasProposedTime;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) int operation; // ivar: _operation
@property (retain, nonatomic) _INPBDataString *proposedLabel; // ivar: _proposedLabel
@property (retain, nonatomic) _INPBDateTimeRange *proposedTime; // ivar: _proposedTime
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)operationAsString:(int)arg0 ;
-(int)StringAsOperation:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif