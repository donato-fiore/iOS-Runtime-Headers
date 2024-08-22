// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBNOTIFICATIONTIMESENSITIVESTATUS_H
#define ATXPBNOTIFICATIONTIMESENSITIVESTATUS_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface ATXPBNotificationTimeSensitiveStatus : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasIsTimeSensitiveAndEngagedNotification;
@property (nonatomic) BOOL hasIsTimeSensitiveNotification;
@property (nonatomic) BOOL isTimeSensitiveAndEngagedNotification; // ivar: _isTimeSensitiveAndEngagedNotification
@property (nonatomic) BOOL isTimeSensitiveNotification; // ivar: _isTimeSensitiveNotification


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