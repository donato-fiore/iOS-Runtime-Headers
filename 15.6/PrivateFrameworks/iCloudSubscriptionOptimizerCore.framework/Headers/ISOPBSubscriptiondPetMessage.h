// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ISOPBSUBSCRIPTIONDPETMESSAGE_H
#define ISOPBSUBSCRIPTIONDPETMESSAGE_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ISOPBSubscriptionLabelMessage.h"

@interface ISOPBSubscriptiondPetMessage : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger avgWeeklyScreenTimeSeconds2w; // ivar: _avgWeeklyScreenTimeSeconds2w
@property (nonatomic) NSInteger cameraAppLaunchCount1w; // ivar: _cameraAppLaunchCount1w
@property (nonatomic) NSInteger daemonVersion; // ivar: _daemonVersion
@property (nonatomic) NSInteger dailyScreenTimeSeconds; // ivar: _dailyScreenTimeSeconds
@property (nonatomic) NSInteger diskStorageCapacityBytes; // ivar: _diskStorageCapacityBytes
@property (nonatomic) NSInteger dropboxAppLaunchCount1w; // ivar: _dropboxAppLaunchCount1w
@property (nonatomic) NSInteger filesAppLaunchCount1w; // ivar: _filesAppLaunchCount1w
@property (nonatomic) NSInteger googleDriveAppLaunchCount1w; // ivar: _googleDriveAppLaunchCount1w
@property (nonatomic) NSInteger googlePhotoAppLaunchCount1w; // ivar: _googlePhotoAppLaunchCount1w
@property (nonatomic) BOOL hasAvgWeeklyScreenTimeSeconds2w;
@property (nonatomic) BOOL hasCameraAppLaunchCount1w;
@property (nonatomic) BOOL hasDaemonVersion;
@property (nonatomic) BOOL hasDailyScreenTimeSeconds;
@property (nonatomic) BOOL hasDiskStorageCapacityBytes;
@property (nonatomic) BOOL hasDropboxAppLaunchCount1w;
@property (nonatomic) BOOL hasFilesAppLaunchCount1w;
@property (nonatomic) BOOL hasGoogleDriveAppLaunchCount1w;
@property (nonatomic) BOOL hasGooglePhotoAppLaunchCount1w;
@property (nonatomic) BOOL hasHourOfDay;
@property (readonly, nonatomic) BOOL hasICloudNotificationUsageTypeTop1;
@property (readonly, nonatomic) BOOL hasICloudNotificationUsageTypeTop2;
@property (readonly, nonatomic) BOOL hasICloudNotificationUsageTypeTop3;
@property (nonatomic) BOOL hasIsDoNotDisturbOn;
@property (nonatomic) BOOL hasIsDrivingModeOn;
@property (nonatomic) BOOL hasIsSleepModeOn;
@property (readonly, nonatomic) BOOL hasLabelMessage;
@property (nonatomic) BOOL hasLastOpenedAppHour24h;
@property (readonly, nonatomic) BOOL hasLastOpenedAppId24h;
@property (nonatomic) BOOL hasMlServerScore;
@property (readonly, nonatomic) BOOL hasNotificationUsageTypeTop1;
@property (readonly, nonatomic) BOOL hasNotificationUsageTypeTop2;
@property (readonly, nonatomic) BOOL hasNotificationUsageTypeTop3;
@property (nonatomic) BOOL hasOBSOLETETrafficType;
@property (nonatomic) BOOL hasOffsetMins;
@property (nonatomic) BOOL hasOpenedICloudNotificationRatio1w;
@property (nonatomic) BOOL hasOpenedICloudNotificationRatio2w;
@property (nonatomic) BOOL hasOpenedNotificationRatio1w;
@property (nonatomic) BOOL hasOpenedNotificationRatio24h;
@property (nonatomic) BOOL hasPhotosAppLaunchCount1w;
@property (nonatomic) BOOL hasTimestampMillis;
@property (nonatomic) BOOL hasTotalNotificationCount1w;
@property (nonatomic) BOOL hasTotalOpenedNotificationCount1w;
@property (nonatomic) BOOL hasTrafficType;
@property (nonatomic) BOOL hasUsedDiskCapacityBytes;
@property (nonatomic) int hourOfDay; // ivar: _hourOfDay
@property (retain, nonatomic) NSString *iCloudNotificationUsageTypeTop1; // ivar: _iCloudNotificationUsageTypeTop1
@property (retain, nonatomic) NSString *iCloudNotificationUsageTypeTop2; // ivar: _iCloudNotificationUsageTypeTop2
@property (retain, nonatomic) NSString *iCloudNotificationUsageTypeTop3; // ivar: _iCloudNotificationUsageTypeTop3
@property (nonatomic) BOOL isDoNotDisturbOn; // ivar: _isDoNotDisturbOn
@property (nonatomic) BOOL isDrivingModeOn; // ivar: _isDrivingModeOn
@property (nonatomic) BOOL isSleepModeOn; // ivar: _isSleepModeOn
@property (retain, nonatomic) ISOPBSubscriptionLabelMessage *labelMessage; // ivar: _labelMessage
@property (nonatomic) NSInteger lastOpenedAppHour24h; // ivar: _lastOpenedAppHour24h
@property (retain, nonatomic) NSString *lastOpenedAppId24h; // ivar: _lastOpenedAppId24h
@property (nonatomic) CGFloat mlServerScore; // ivar: _mlServerScore
@property (retain, nonatomic) NSString *notificationUsageTypeTop1; // ivar: _notificationUsageTypeTop1
@property (retain, nonatomic) NSString *notificationUsageTypeTop2; // ivar: _notificationUsageTypeTop2
@property (retain, nonatomic) NSString *notificationUsageTypeTop3; // ivar: _notificationUsageTypeTop3
@property (nonatomic) int oBSOLETETrafficType; // ivar: _oBSOLETETrafficType
@property (nonatomic) NSInteger offsetMins; // ivar: _offsetMins
@property (nonatomic) CGFloat openedICloudNotificationRatio1w; // ivar: _openedICloudNotificationRatio1w
@property (nonatomic) CGFloat openedICloudNotificationRatio2w; // ivar: _openedICloudNotificationRatio2w
@property (nonatomic) CGFloat openedNotificationRatio1w; // ivar: _openedNotificationRatio1w
@property (nonatomic) CGFloat openedNotificationRatio24h; // ivar: _openedNotificationRatio24h
@property (nonatomic) NSInteger photosAppLaunchCount1w; // ivar: _photosAppLaunchCount1w
@property (nonatomic) NSInteger timestampMillis; // ivar: _timestampMillis
@property (nonatomic) NSInteger totalNotificationCount1w; // ivar: _totalNotificationCount1w
@property (nonatomic) NSInteger totalOpenedNotificationCount1w; // ivar: _totalOpenedNotificationCount1w
@property (nonatomic) int trafficType; // ivar: _trafficType
@property (nonatomic) NSInteger usedDiskCapacityBytes; // ivar: _usedDiskCapacityBytes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)oBSOLETETrafficTypeAsString:(int)arg0 ;
-(id)trafficTypeAsString:(int)arg0 ;
-(int)StringAsOBSOLETETrafficType:(id)arg0 ;
-(int)StringAsTrafficType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif