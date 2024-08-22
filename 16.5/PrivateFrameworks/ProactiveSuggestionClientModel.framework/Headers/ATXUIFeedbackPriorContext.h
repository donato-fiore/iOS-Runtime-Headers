// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXUIFEEDBACKPRIORCONTEXT_H
#define ATXUIFEEDBACKPRIORCONTEXT_H

@class NSDictionary, NSOrderedSet, NSUUID;
@protocol NSSecureCoding, ATXProtoBufWrapper, ATXProactiveSuggestionFeedbackContextProtocol;

#import <Foundation/Foundation.h>


@interface ATXUIFeedbackPriorContext : NSObject <NSSecureCoding, ATXProtoBufWrapper>



@property (readonly, nonatomic) NSDictionary *blendingModelCacheUpdates; // ivar: _blendingModelCacheUpdates
@property (readonly, nonatomic) NSOrderedSet *cacheUpdateOrdering; // ivar: _cacheUpdateOrdering
@property (readonly, nonatomic) NSDictionary *clientModelCacheUpdates; // ivar: _clientModelCacheUpdates
@property (readonly, nonatomic) NSObject<ATXProactiveSuggestionFeedbackContextProtocol> *context; // ivar: _context
@property (readonly, nonatomic) NSUUID *pinnedBlendingModelUICacheUpdateUUID; // ivar: _pinnedBlendingModelUICacheUpdateUUID


+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXUIFeedbackPriorContext:(id)arg0 ;
-(NSUInteger)hash;
-(id)_referencedClientModelCaches;
-(id)blendingModelUICacheUpdateForUUID:(id)arg0 ;
-(id)clientModelCacheUpdatesForUICacheUpdateUUID:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithCacheUpdateOrdering:(id)arg0 blendingModelCacheUpdates:(id)arg1 clientModelCacheUpdates:(id)arg2 context:(id)arg3 pinnedBlendingModelUICacheUpdateUUID:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;
-(id)validContextClassNames;
-(void)_pruneBlendingModelCachesOlderThanUUID:(id)arg0 ;
-(void)_validateCacheUpdateOrderingAndCacheDictMapping;
-(void)addBlendingModelUICacheUpdate:(id)arg0 ;
-(void)addClientModelCacheUpdate:(id)arg0 ;
-(void)addContext:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;
-(void)pruneBlendingModelCachesOverMaxNum;
-(void)pruneContextStateOlderThanBlendingUUID:(id)arg0 ;
-(void)pruneUnreferencedClientModelCachesIfPossible;
-(void)updatePinnedBlendingModelUICacheUpdateUUID:(id)arg0 ;


@end


#endif