// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AWDHOMEKITCAMERAIDSSESSIONSETUP_H
#define AWDHOMEKITCAMERAIDSSESSIONSETUP_H

@class PBCodable;
@protocol NSCopying;



@interface AWDHomeKitCameraIDSSessionSetup : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL hasIdsSessionInvitationReceived;
@property (nonatomic) BOOL hasIdsSessionInvitationSent;
@property (nonatomic) BOOL hasIdsSessionStartedOnReceiver;
@property (nonatomic) BOOL hasIdsSessionStartedOnResident;
@property (nonatomic) unsigned int idsSessionInvitationReceived; // ivar: _idsSessionInvitationReceived
@property (nonatomic) unsigned int idsSessionInvitationSent; // ivar: _idsSessionInvitationSent
@property (nonatomic) unsigned int idsSessionStartedOnReceiver; // ivar: _idsSessionStartedOnReceiver
@property (nonatomic) unsigned int idsSessionStartedOnResident; // ivar: _idsSessionStartedOnResident


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