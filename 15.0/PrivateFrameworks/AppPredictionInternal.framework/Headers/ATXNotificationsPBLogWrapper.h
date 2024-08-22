// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONSPBLOGWRAPPER_H
#define ATXNOTIFICATIONSPBLOGWRAPPER_H

@class PBCodable;
@protocol NSCopying;


#import "ATXNotificationsPBGradedRecord.h"
#import "ATXNotificationsPBPeriodicLog.h"
#import "ATXNotificationsPBRecord.h"
#import "ATXNotificationsPBResponse.h"
#import "ATXNotificationsPBSettingLog.h"

@interface ATXNotificationsPBLogWrapper : PBCodable <NSCopying>



@property (retain, nonatomic) ATXNotificationsPBGradedRecord *grecord; // ivar: _grecord
@property (readonly, nonatomic) BOOL hasGrecord;
@property (readonly, nonatomic) BOOL hasPeriodiclog;
@property (readonly, nonatomic) BOOL hasRecord;
@property (readonly, nonatomic) BOOL hasResponse;
@property (readonly, nonatomic) BOOL hasSettinglog;
@property (retain, nonatomic) ATXNotificationsPBPeriodicLog *periodiclog; // ivar: _periodiclog
@property (retain, nonatomic) ATXNotificationsPBRecord *record; // ivar: _record
@property (retain, nonatomic) ATXNotificationsPBResponse *response; // ivar: _response
@property (retain, nonatomic) ATXNotificationsPBSettingLog *settinglog; // ivar: _settinglog


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