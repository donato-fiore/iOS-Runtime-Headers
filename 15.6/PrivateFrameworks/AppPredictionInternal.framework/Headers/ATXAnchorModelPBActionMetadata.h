// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXANCHORMODELPBACTIONMETADATA_H
#define ATXANCHORMODELPBACTIONMETADATA_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "ATXAnchorModelPBActionKeyMetadata.h"
#import "ATXAnchorModelPBAppLaunchMetadata.h"

@interface ATXAnchorModelPBActionMetadata : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ATXAnchorModelPBActionKeyMetadata *actionKeyMetadata; // ivar: _actionKeyMetadata
@property (nonatomic) int actionType; // ivar: _actionType
@property (retain, nonatomic) NSMutableArray *actionUUIDMetadatas; // ivar: _actionUUIDMetadatas
@property (retain, nonatomic) ATXAnchorModelPBAppLaunchMetadata *appLaunchMetadata; // ivar: _appLaunchMetadata
@property (readonly, nonatomic) BOOL hasActionKeyMetadata;
@property (nonatomic) BOOL hasActionType;
@property (readonly, nonatomic) BOOL hasAppLaunchMetadata;


+(Class)actionUUIDMetadataType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)actionTypeAsString:(int)arg0 ;
-(id)actionUUIDMetadataAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(int)StringAsActionType:(id)arg0 ;
-(void)addActionUUIDMetadata:(id)arg0 ;
-(void)clearActionUUIDMetadatas;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif