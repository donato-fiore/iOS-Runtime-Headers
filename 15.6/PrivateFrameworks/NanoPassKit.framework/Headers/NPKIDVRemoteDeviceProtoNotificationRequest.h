// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKIDVREMOTEDEVICEPROTONOTIFICATIONREQUEST_H
#define NPKIDVREMOTEDEVICEPROTONOTIFICATIONREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface NPKIDVRemoteDeviceProtoNotificationRequest : PBRequest <NSCopying>



@property (nonatomic) int documentType; // ivar: _documentType
@property (readonly, nonatomic) BOOL hasIssuerName;
@property (retain, nonatomic) NSString *issuerName; // ivar: _issuerName
@property (nonatomic) int notificationType; // ivar: _notificationType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)documentTypeAsString:(int)arg0 ;
-(id)notificationTypeAsString:(int)arg0 ;
-(int)StringAsDocumentType:(id)arg0 ;
-(int)StringAsNotificationType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif