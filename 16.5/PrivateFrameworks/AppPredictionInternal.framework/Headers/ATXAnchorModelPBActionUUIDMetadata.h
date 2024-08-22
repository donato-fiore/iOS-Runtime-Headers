// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXANCHORMODELPBACTIONUUIDMETADATA_H
#define ATXANCHORMODELPBACTIONUUIDMETADATA_H

@class PBCodable;
@protocol NSCopying;


#import "ATXAnchorModelPBLaunchHistoryMetadata.h"

@interface ATXAnchorModelPBActionUUIDMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) NSInteger actionUUID; // ivar: _actionUUID
@property (retain, nonatomic) ATXAnchorModelPBLaunchHistoryMetadata *actionUUIDLaunchHistory; // ivar: _actionUUIDLaunchHistory
@property (nonatomic) BOOL hasActionUUID;
@property (readonly, nonatomic) BOOL hasActionUUIDLaunchHistory;
@property (nonatomic) BOOL hasParamCount;
@property (nonatomic) BOOL hasSlotHash;
@property (nonatomic) unsigned int paramCount; // ivar: _paramCount
@property (nonatomic) NSInteger slotHash; // ivar: _slotHash


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