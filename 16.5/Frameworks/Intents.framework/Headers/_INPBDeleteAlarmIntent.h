// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBDELETEALARMINTENT_H
#define _INPBDELETEALARMINTENT_H

@class PBCodable, NSArray, NSString;
@protocol _INPBDeleteAlarmIntent, NSSecureCoding, NSCopying;


#import "_INPBAlarmSearch.h"
#import "_INPBIntentMetadata.h"

@interface _INPBDeleteAlarmIntent : PBCodable <_INPBDeleteAlarmIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBAlarmSearch *alarmSearch; // ivar: _alarmSearch
@property (copy, nonatomic) NSArray *alarms; // ivar: _alarms
@property (readonly, nonatomic) NSUInteger alarmsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAlarmSearch;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)alarmsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addAlarms:(id)arg0 ;
-(void)clearAlarms;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif