// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONSPBRECORD_H
#define ATXNOTIFICATIONSPBRECORD_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "ATXNotificationsPBContext.h"

@interface ATXNotificationsPBRecord : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (retain, nonatomic) ATXNotificationsPBContext *context; // ivar: _context
@property (retain, nonatomic) NSMutableArray *events; // ivar: _events
@property (readonly, nonatomic) BOOL hasBundleId;
@property (readonly, nonatomic) BOOL hasContext;
@property (nonatomic) BOOL hasSuppActions;
@property (nonatomic) BOOL hasTimezone;
@property (readonly, nonatomic) BOOL hasTopic;
@property (nonatomic) int suppActions; // ivar: _suppActions
@property (nonatomic) int timezone; // ivar: _timezone
@property (retain, nonatomic) NSString *topic; // ivar: _topic


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)eventsAtIndex:(NSUInteger)arg0 ;
-(void)addEvents:(id)arg0 ;
-(void)clearEvents;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif