// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NPKPROTOREMOTEPASSUPDATEREQUEST_H
#define NPKPROTOREMOTEPASSUPDATEREQUEST_H

@class PBRequest, NSString, NSData;
@protocol NSCopying;


#import "NPKProtoPass.h"

@interface NPKProtoRemotePassUpdateRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL cancelUpdate; // ivar: _cancelUpdate
@property (nonatomic) BOOL hasCancelUpdate;
@property (readonly, nonatomic) BOOL hasPass;
@property (nonatomic) BOOL hasRequestAuthorization;
@property (nonatomic) BOOL hasShouldNotifyUser;
@property (readonly, nonatomic) BOOL hasUpdateRequestData;
@property (retain, nonatomic) NPKProtoPass *pass; // ivar: _pass
@property (retain, nonatomic) NSString *passID; // ivar: _passID
@property (nonatomic) BOOL requestAuthorization; // ivar: _requestAuthorization
@property (nonatomic) BOOL shouldNotifyUser; // ivar: _shouldNotifyUser
@property (retain, nonatomic) NSData *updateRequestData; // ivar: _updateRequestData


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