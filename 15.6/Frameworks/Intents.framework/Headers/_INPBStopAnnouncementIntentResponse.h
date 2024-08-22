// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBSTOPANNOUNCEMENTINTENTRESPONSE_H
#define _INPBSTOPANNOUNCEMENTINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBStopAnnouncementIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBStopAnnouncementIntentResponse : PBCodable <_INPBStopAnnouncementIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *stoppedAnnouncementRecords; // ivar: _stoppedAnnouncementRecords
@property (readonly, nonatomic) NSUInteger stoppedAnnouncementRecordsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)stoppedAnnouncementRecordsAtIndex:(NSUInteger)arg0 ;
-(void)addStoppedAnnouncementRecords:(id)arg0 ;
-(void)clearStoppedAnnouncementRecords;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif