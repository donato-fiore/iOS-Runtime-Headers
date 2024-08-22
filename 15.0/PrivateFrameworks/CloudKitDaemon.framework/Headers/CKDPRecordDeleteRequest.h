// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef CKDPRECORDDELETEREQUEST_H
#define CKDPRECORDDELETEREQUEST_H

@class PBRequest, NSString, NSMutableArray, CKDPRecordIdentifier;
@protocol NSCopying;



@interface CKDPRecordDeleteRequest : PBRequest <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *etag; // ivar: _etag
@property (readonly, nonatomic) BOOL hasEtag;
@property (nonatomic) BOOL hasParticipantKeyLost;
@property (readonly, nonatomic) BOOL hasRecordIdentifier;
@property (nonatomic) BOOL participantKeyLost; // ivar: _participantKeyLost
@property (retain, nonatomic) NSMutableArray *pluginFields; // ivar: _pluginFields
@property (retain, nonatomic) NSMutableArray *publicKeys; // ivar: _publicKeys
@property (retain, nonatomic) CKDPRecordIdentifier *recordIdentifier; // ivar: _recordIdentifier


+(id)options;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(Class)responseClass;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)pluginFieldsAtIndex:(NSUInteger)arg0 ;
-(id)publicKeysAtIndex:(NSUInteger)arg0 ;
-(unsigned int)requestTypeCode;
-(void)addPluginFields:(id)arg0 ;
-(void)addPublicKeys:(id)arg0 ;
-(void)clearPluginFields;
-(void)clearPublicKeys;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif