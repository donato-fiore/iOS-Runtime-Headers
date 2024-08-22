// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXNOTIFICATIONSPBGRADEDRECORD_H
#define ATXNOTIFICATIONSPBGRADEDRECORD_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ATXNotificationsPBContext.h"
#import "ATXNotificationsPBGrade.h"

@interface ATXNotificationsPBGradedRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) ATXNotificationsPBContext *context; // ivar: _context
@property (retain, nonatomic) ATXNotificationsPBGrade *grade; // ivar: _grade
@property (readonly, nonatomic) BOOL hasBundleId;
@property (readonly, nonatomic) BOOL hasContext;
@property (readonly, nonatomic) BOOL hasGrade;
@property (readonly, nonatomic) BOOL hasMessage;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (nonatomic) BOOL hasSuppActions;
@property (nonatomic) BOOL hasTimezone;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasTopic;
@property (readonly, nonatomic) BOOL hasUserid;
@property (retain, nonatomic) NSString *message; // ivar: _message
@property (retain, nonatomic) NSString *subtitle; // ivar: _subtitle
@property (nonatomic) int suppActions; // ivar: _suppActions
@property (nonatomic) int timezone; // ivar: _timezone
@property (retain, nonatomic) NSString *title; // ivar: _title
@property (retain, nonatomic) NSString *topic; // ivar: _topic
@property (retain, nonatomic) NSString *userid; // ivar: _userid


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