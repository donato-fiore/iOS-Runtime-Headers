// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXNOTIFICATIONSPBSETTING_H
#define ATXNOTIFICATIONSPBSETTING_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;



@interface ATXNotificationsPBSetting : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int alert; // ivar: _alert
@property (nonatomic) int alertStyle; // ivar: _alertStyle
@property (nonatomic) int announcement; // ivar: _announcement
@property (nonatomic) int authStatus; // ivar: _authStatus
@property (nonatomic) int badge; // ivar: _badge
@property (retain, nonatomic) NSString *bundleId; // ivar: _bundleId
@property (nonatomic) int carPlay; // ivar: _carPlay
@property (nonatomic) int criticalAlert; // ivar: _criticalAlert
@property (retain, nonatomic) NSString *genre; // ivar: _genre
@property (nonatomic) int group; // ivar: _group
@property (nonatomic) BOOL hasAlert;
@property (nonatomic) BOOL hasAlertStyle;
@property (nonatomic) BOOL hasAnnouncement;
@property (nonatomic) BOOL hasAuthStatus;
@property (nonatomic) BOOL hasBadge;
@property (readonly, nonatomic) BOOL hasBundleId;
@property (nonatomic) BOOL hasCarPlay;
@property (nonatomic) BOOL hasCriticalAlert;
@property (readonly, nonatomic) BOOL hasGenre;
@property (nonatomic) BOOL hasGroup;
@property (nonatomic) BOOL hasLockScreen;
@property (nonatomic) BOOL hasNotificationCenter;
@property (nonatomic) BOOL hasShowPreviews;
@property (nonatomic) BOOL hasSound;
@property (nonatomic) int lockScreen; // ivar: _lockScreen
@property (nonatomic) int notificationCenter; // ivar: _notificationCenter
@property (nonatomic) int showPreviews; // ivar: _showPreviews
@property (nonatomic) int sound; // ivar: _sound
@property (retain, nonatomic) NSMutableArray *topics; // ivar: _topics


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)alertAsString:(int)arg0 ;
-(id)alertStyleAsString:(int)arg0 ;
-(id)announcementAsString:(int)arg0 ;
-(id)authStatusAsString:(int)arg0 ;
-(id)badgeAsString:(int)arg0 ;
-(id)carPlayAsString:(int)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)criticalAlertAsString:(int)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)groupAsString:(int)arg0 ;
-(id)lockScreenAsString:(int)arg0 ;
-(id)notificationCenterAsString:(int)arg0 ;
-(id)showPreviewsAsString:(int)arg0 ;
-(id)soundAsString:(int)arg0 ;
-(id)topicsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsAlert:(id)arg0 ;
-(int)StringAsAlertStyle:(id)arg0 ;
-(int)StringAsAnnouncement:(id)arg0 ;
-(int)StringAsAuthStatus:(id)arg0 ;
-(int)StringAsBadge:(id)arg0 ;
-(int)StringAsCarPlay:(id)arg0 ;
-(int)StringAsCriticalAlert:(id)arg0 ;
-(int)StringAsGroup:(id)arg0 ;
-(int)StringAsLockScreen:(id)arg0 ;
-(int)StringAsNotificationCenter:(id)arg0 ;
-(int)StringAsShowPreviews:(id)arg0 ;
-(int)StringAsSound:(id)arg0 ;
-(void)addTopics:(id)arg0 ;
-(void)clearTopics;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif