// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBUIFEEDBACKPRIORCONTEXT_H
#define ATXPBUIFEEDBACKPRIORCONTEXT_H

@class PBCodable, NSMutableArray, NSData, NSString;
@protocol NSCopying;



@interface ATXPBUIFeedbackPriorContext : PBCodable <NSCopying>



@property (retain, nonatomic) NSMutableArray *blendingModelCacheUpdates; // ivar: _blendingModelCacheUpdates
@property (retain, nonatomic) NSMutableArray *cacheUpdateOrderings; // ivar: _cacheUpdateOrderings
@property (retain, nonatomic) NSMutableArray *clientModelCacheUpdates; // ivar: _clientModelCacheUpdates
@property (retain, nonatomic) NSData *context; // ivar: _context
@property (retain, nonatomic) NSString *contextClassString; // ivar: _contextClassString
@property (readonly, nonatomic) BOOL hasContext;
@property (readonly, nonatomic) BOOL hasContextClassString;
@property (readonly, nonatomic) BOOL hasPinnedBlendingModelUICacheUpdateUUID;
@property (retain, nonatomic) NSString *pinnedBlendingModelUICacheUpdateUUID; // ivar: _pinnedBlendingModelUICacheUpdateUUID


+(Class)cacheUpdateOrderingType;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)blendingModelCacheUpdatesAtIndex:(NSUInteger)arg0 ;
-(id)cacheUpdateOrderingAtIndex:(NSUInteger)arg0 ;
-(id)clientModelCacheUpdatesAtIndex:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)addBlendingModelCacheUpdates:(id)arg0 ;
-(void)addCacheUpdateOrdering:(id)arg0 ;
-(void)addClientModelCacheUpdates:(id)arg0 ;
-(void)clearBlendingModelCacheUpdates;
-(void)clearCacheUpdateOrderings;
-(void)clearClientModelCacheUpdates;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif