// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CPMESSAGINGCONVERSATIONACTIVITYSESSION_H
#define CPMESSAGINGCONVERSATIONACTIVITYSESSION_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "CPMessagingConversationActivity.h"

@interface CPMessagingConversationActivitySession : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) CPMessagingConversationActivity *activity; // ivar: _activity
@property (nonatomic) CGFloat creationDateEpochTime; // ivar: _creationDateEpochTime
@property (readonly, nonatomic) BOOL hasActivity;
@property (nonatomic) BOOL hasCreationDateEpochTime;
@property (readonly, nonatomic) BOOL hasIdentifierUUIDString;
@property (retain, nonatomic) NSString *identifierUUIDString; // ivar: _identifierUUIDString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif