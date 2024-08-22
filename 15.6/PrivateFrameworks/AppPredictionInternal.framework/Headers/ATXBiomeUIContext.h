// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXBIOMEUICONTEXT_H
#define ATXBIOMEUICONTEXT_H

@class NSMutableDictionary, NSMutableOrderedSet, NSUUID;
@protocol NSSecureCoding, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>

#import "ATXPredictionContext.h"

@interface ATXBiomeUIContext : NSObject <NSSecureCoding, ATXProtoBufWrapper>



@property (readonly, nonatomic) NSMutableDictionary *blendingModelCacheUpdates; // ivar: _blendingModelCacheUpdates
@property (readonly, nonatomic) NSMutableOrderedSet *cacheUpdateOrdering; // ivar: _cacheUpdateOrdering
@property (readonly, nonatomic) NSMutableDictionary *clientModelCacheUpdates; // ivar: _clientModelCacheUpdates
@property (readonly, nonatomic) ATXPredictionContext *context; // ivar: _context
@property (readonly, nonatomic) NSUUID *pinnedBlendingModelUICacheUpdateUUID; // ivar: _pinnedBlendingModelUICacheUpdateUUID


+(BOOL)supportsSecureCoding;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXBiomeUIContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)_initWithCoder:(id)arg0 ;
-(id)_referencedClientModelCaches;
-(id)blendingModelUICacheUpdateForUUID:(id)arg0 ;
-(id)clientModelCacheUpdatesForBlendingModelUICacheUpdateUUID:(id)arg0 ;
-(id)encodeAsProto;
-(id)initWithBlendingModelCacheUpdateOrdering:(id)arg0 blendingModelCacheUpdates:(id)arg1 clientModelCacheUpdates:(id)arg2 context:(id)arg3 pinnedBlendingModelUICacheUpdateUUID:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithContext:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(void)_pruneBlendingModelCachesOlderThanUUID:(id)arg0 ;
-(void)_validateCacheUpdateOrderingAndCacheDictMapping;
-(void)addBlendingModelUICacheUpdate:(id)arg0 ;
-(void)addClientModelCacheUpdate:(id)arg0 ;
-(void)addContext:(id)arg0 ;
-(void)clearExistingPinnedBlendingModelCache;
-(void)encodeWithCoder:(id)arg0 ;
-(void)pinBlendingModelUICacheUpdateWithUUID:(id)arg0 ;
-(void)pruneBlendingModelCachesOverMaxNum;
-(void)pruneContextStateOlderThanBlendingUUID:(id)arg0 ;
-(void)pruneUnreferencedClientModelCachesIfPossible;


@end


#endif