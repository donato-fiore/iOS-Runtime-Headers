// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXBLENDINGMODELUICACHEUPDATE_H
#define ATXBLENDINGMODELUICACHEUPDATE_H

@class NSDate, NSDictionary, NSString, NSUUID;
@protocol NSSecureCoding, BMStoreData, ATXProtoBufWrapper, ATXUICacheProtocol;

#import <Foundation/Foundation.h>


@interface ATXBlendingModelUICacheUpdate : NSObject <NSSecureCoding, BMStoreData, ATXProtoBufWrapper>

 {
    CGFloat _absoluteCacheCreationDate;
}


@property (readonly, nonatomic) NSDate *cacheCreationDate;
@property (readonly, nonatomic) NSDictionary *clientModelCacheUpdateUUIDs; // ivar: _clientModelCacheUpdateUUIDs
@property (readonly, nonatomic) unsigned char consumerSubType; // ivar: _consumerSubType
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<ATXUICacheProtocol> *uiCache; // ivar: _uiCache
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForint:(int)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXBlendingModelUICacheUpdate:(id)arg0 ;
-(id)_initWithCoder:(id)arg0 ;
-(id)clientModelCacheUpdateUUIDsDictionaryFromProto:(id)arg0 ;
-(id)clientModelCacheUpdateUUIDsFromCacheUpdates:(id)arg0 ;
-(id)encodeAsProto;
-(id)encodeAsProtoForBiome;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithHomeScreenCachedSuggestions:(id)arg0 consumerSubType:(unsigned char)arg1 clientModelCacheUpdates:(id)arg2 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSpotlightSuggestionLayout:(id)arg0 consumerSubType:(unsigned char)arg1 clientModelCacheUpdates:(id)arg2 ;
-(id)initWithSuggestionLayout:(id)arg0 consumerSubType:(unsigned char)arg1 clientModelCacheUpdates:(id)arg2 ;
-(id)initWithUICache:(id)arg0 consumerSubType:(unsigned char)arg1 clientModelCacheUpdateUUIDs:(id)arg2 uuid:(id)arg3 cacheCreationDate:(id)arg4 ;
-(id)initWithUICache:(id)arg0 consumerSubType:(unsigned char)arg1 clientModelCacheUpdates:(id)arg2 ;
-(id)json;
-(id)jsonRawData;
-(id)proto;
-(id)protoForBiome;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;
-(void)setUICacheObjectOnProto:(id)arg0 ;
-(void)setUICacheObjectOnProtoForBiome:(id)arg0 ;


@end


#endif