// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBSENDANNOUNCEMENTINTENT_H
#define _INPBSENDANNOUNCEMENTINTENT_H

@class PBCodable, NSString, NSArray;
@protocol _INPBSendAnnouncementIntent, NSSecureCoding, NSCopying;


#import "_INPBAnnouncement.h"
#import "_INPBIntentMetadata.h"

@interface _INPBSendAnnouncementIntent : PBCodable <_INPBSendAnnouncementIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _INPBAnnouncement *announcement; // ivar: _announcement
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAnnouncement;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasIsReply;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) BOOL isReply; // ivar: _isReply
@property (copy, nonatomic) NSArray *recipients; // ivar: _recipients
@property (readonly, nonatomic) NSUInteger recipientsCount;
@property (readonly) Class superclass;


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)recipientsAtIndex:(NSUInteger)arg0 ;
-(void)addRecipients:(id)arg0 ;
-(void)clearRecipients;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif