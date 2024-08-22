// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXNOTIFICATIONSPBAGGREGATEDATA_H
#define ATXNOTIFICATIONSPBAGGREGATEDATA_H

@class PBCodable;
@protocol NSCopying;



@interface ATXNotificationsPBAggregateData : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int appsAllowed; // ivar: _appsAllowed
@property (nonatomic) int appsAllowedThird; // ivar: _appsAllowedThird
@property (nonatomic) int appsDenied; // ivar: _appsDenied
@property (nonatomic) int appsDeniedThird; // ivar: _appsDeniedThird
@property (nonatomic) int appsInstalled; // ivar: _appsInstalled
@property (nonatomic) int appsInstalledThird; // ivar: _appsInstalledThird
@property (nonatomic) int appsLockscreen; // ivar: _appsLockscreen
@property (nonatomic) int appsLockscreenThird; // ivar: _appsLockscreenThird
@property (nonatomic) BOOL hasAppsAllowed;
@property (nonatomic) BOOL hasAppsAllowedThird;
@property (nonatomic) BOOL hasAppsDenied;
@property (nonatomic) BOOL hasAppsDeniedThird;
@property (nonatomic) BOOL hasAppsInstalled;
@property (nonatomic) BOOL hasAppsInstalledThird;
@property (nonatomic) BOOL hasAppsLockscreen;
@property (nonatomic) BOOL hasAppsLockscreenThird;


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