// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPNOTIFICATIONSYNCREQUEST_H
#define CKDPNOTIFICATIONSYNCREQUEST_H

@class PBRequest, NSData;
@protocol NSCopying;



@interface CKDPNotificationSyncRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasMaxChanges;
@property (readonly, nonatomic) BOOL hasServerChangeToken;
@property (nonatomic) BOOL hasWantsChanges;
@property (nonatomic) unsigned int maxChanges; // ivar: _maxChanges
@property (retain, nonatomic) NSData *serverChangeToken; // ivar: _serverChangeToken
@property (nonatomic) BOOL wantsChanges; // ivar: _wantsChanges


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned int)requestTypeCode;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif