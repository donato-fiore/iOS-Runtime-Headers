// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _INPBSEARCHALARMINTENT_H
#define _INPBSEARCHALARMINTENT_H

@class PBCodable, NSArray, NSString;
@protocol _INPBSearchAlarmIntent, NSSecureCoding, NSCopying;


#import "_INPBAlarmSearch.h"
#import "_INPBIntentMetadata.h"

@interface _INPBSearchAlarmIntent : PBCodable <_INPBSearchAlarmIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBAlarmSearch *alarmSearch; // ivar: _alarmSearch
@property (nonatomic) int alarmSearchType; // ivar: _alarmSearchType
@property (copy, nonatomic) NSArray *alarms; // ivar: _alarms
@property (readonly, nonatomic) NSUInteger alarmsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAlarmSearch;
@property (nonatomic) BOOL hasAlarmSearchType;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)alarmSearchTypeAsString:(int)arg0 ;
-(id)alarmsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(int)StringAsAlarmSearchType:(id)arg0 ;
-(void)addAlarms:(id)arg0 ;
-(void)clearAlarms;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif