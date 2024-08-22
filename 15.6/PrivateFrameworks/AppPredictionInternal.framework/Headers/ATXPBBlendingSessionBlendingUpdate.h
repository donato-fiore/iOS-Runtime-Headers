// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBBLENDINGSESSIONBLENDINGUPDATE_H
#define ATXPBBLENDINGSESSIONBLENDINGUPDATE_H

@class PBCodable, NSString, NSMutableArray;
@protocol NSCopying;


#import "ATXPBBlendingSessionDeviceContext.h"
#import "ATXPBBlendingSessionUICache.h"

@interface ATXPBBlendingSessionBlendingUpdate : PBCodable <NSCopying>



@property (retain, nonatomic) NSString *blendingABGroup; // ivar: _blendingABGroup
@property (retain, nonatomic) NSString *blendingUpdateUUID; // ivar: _blendingUpdateUUID
@property (retain, nonatomic) NSMutableArray *clientModelUpdates; // ivar: _clientModelUpdates
@property (retain, nonatomic) NSString *consumerSubType; // ivar: _consumerSubType
@property (retain, nonatomic) ATXPBBlendingSessionDeviceContext *deviceContext; // ivar: _deviceContext
@property (readonly, nonatomic) BOOL hasBlendingABGroup;
@property (readonly, nonatomic) BOOL hasBlendingUpdateUUID;
@property (readonly, nonatomic) BOOL hasConsumerSubType;
@property (readonly, nonatomic) BOOL hasDeviceContext;
@property (readonly, nonatomic) BOOL hasUiCache;
@property (retain, nonatomic) ATXPBBlendingSessionUICache *uiCache; // ivar: _uiCache


+(Class)clientModelUpdateType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)clientModelUpdateAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addClientModelUpdate:(id)arg0 ;
-(void)clearClientModelUpdates;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif