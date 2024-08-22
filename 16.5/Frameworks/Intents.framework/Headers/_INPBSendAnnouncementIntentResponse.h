// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _INPBSENDANNOUNCEMENTINTENTRESPONSE_H
#define _INPBSENDANNOUNCEMENTINTENTRESPONSE_H

@class PBCodable, NSString, NSArray;
@protocol _INPBSendAnnouncementIntentResponse, NSSecureCoding, NSCopying;



@interface _INPBSendAnnouncementIntentResponse : PBCodable <_INPBSendAnnouncementIntentResponse, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (copy, nonatomic) NSArray *sentAnnouncements; // ivar: _sentAnnouncements
@property (readonly, nonatomic) NSUInteger sentAnnouncementsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)sentAnnouncementsAtIndex:(NSUInteger)arg0 ;
-(void)addSentAnnouncements:(id)arg0 ;
-(void)clearSentAnnouncements;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif