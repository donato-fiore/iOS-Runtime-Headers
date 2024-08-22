// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRNOTIFICATIONMESSAGEPROTOBUF_H
#define _MRNOTIFICATIONMESSAGEPROTOBUF_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;



@interface _MRNotificationMessageProtobuf : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *notifications; // ivar: _notifications
@property (retain, nonatomic) NSMutableArray *playerPaths; // ivar: _playerPaths
@property (retain, nonatomic) NSMutableArray *userInfos; // ivar: _userInfos


+(Class)notificationType;
+(Class)playerPathType;
+(Class)userInfoType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)notificationAtIndex:(NSUInteger)arg0 ;
-(id)playerPathAtIndex:(NSUInteger)arg0 ;
-(id)userInfoAtIndex:(NSUInteger)arg0 ;
-(void)addNotification:(id)arg0 ;
-(void)addPlayerPath:(id)arg0 ;
-(void)addUserInfo:(id)arg0 ;
-(void)clearNotifications;
-(void)clearPlayerPaths;
-(void)clearUserInfos;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif