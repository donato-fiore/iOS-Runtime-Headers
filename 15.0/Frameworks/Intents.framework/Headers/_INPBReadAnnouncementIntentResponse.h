// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _INPBREADANNOUNCEMENTINTENTRESPONSE_H
#define _INPBREADANNOUNCEMENTINTENTRESPONSE_H

@class PBCodable, NSArray, NSString;
@protocol _INPBReadAnnouncementIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBReadAnnouncementIntentResponse : PBCodable <_INPBReadAnnouncementIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (copy, nonatomic) NSArray *announcementRecords; // ivar: _announcementRecords
@property (readonly, nonatomic) NSUInteger announcementRecordsCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)announcementRecordsAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(void)addAnnouncementRecords:(id)arg0 ;
-(void)clearAnnouncementRecords;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif