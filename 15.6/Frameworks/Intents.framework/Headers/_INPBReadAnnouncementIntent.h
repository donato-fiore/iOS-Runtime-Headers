// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _INPBREADANNOUNCEMENTINTENT_H
#define _INPBREADANNOUNCEMENTINTENT_H

@class PBCodable, NSString;
@protocol _INPBReadAnnouncementIntent, NSSecureCoding, NSCopying;


#import "_INPBIntentMetadata.h"

@interface _INPBReadAnnouncementIntent : PBCodable <_INPBReadAnnouncementIntent, NSSecureCoding, NSCopying>

 {
    ? _has;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (nonatomic) BOOL hasReadType;
@property (readonly, nonatomic) BOOL hasStartAnnouncementIdentifier;
@property (nonatomic) BOOL hasUserNotificationType;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) _INPBIntentMetadata *intentMetadata; // ivar: _intentMetadata
@property (nonatomic) int readType; // ivar: _readType
@property (copy, nonatomic) NSString *startAnnouncementIdentifier; // ivar: _startAnnouncementIdentifier
@property (readonly) Class superclass;
@property (nonatomic) int userNotificationType; // ivar: _userNotificationType


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithCoder:(id)arg0 ;
-(id)readTypeAsString:(int)arg0 ;
-(id)userNotificationTypeAsString:(int)arg0 ;
-(int)StringAsReadType:(id)arg0 ;
-(int)StringAsUserNotificationType:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif