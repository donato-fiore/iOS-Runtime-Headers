// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NNMKPROTOHALTSYNCREQUEST_H
#define NNMKPROTOHALTSYNCREQUEST_H

@class PBRequest, NSString;
@protocol NSCopying;



@interface NNMKProtoHaltSyncRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int fullSyncVersion; // ivar: _fullSyncVersion
@property (nonatomic) BOOL hasFullSyncVersion;
@property (readonly, nonatomic) BOOL hasMailboxId;
@property (retain, nonatomic) NSString *mailboxId; // ivar: _mailboxId


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