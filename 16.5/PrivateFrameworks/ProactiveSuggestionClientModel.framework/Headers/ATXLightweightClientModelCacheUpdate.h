// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXLIGHTWEIGHTCLIENTMODELCACHEUPDATE_H
#define ATXLIGHTWEIGHTCLIENTMODELCACHEUPDATE_H

@class NSDate, NSString, NSArray, NSUUID;
@protocol BMStoreData, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXLightweightClientModelCacheUpdate : NSObject <BMStoreData, ATXProtoBufWrapper>



@property (readonly, nonatomic) NSDate *cacheCreationDate; // ivar: _cacheCreationDate
@property (readonly, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *suggestions; // ivar: _suggestions
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXLightweightClientModelCacheUpdate:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithClientModelCacheUpdate:(id)arg0 ;
-(id)initWithClientModelId:(id)arg0 suggestions:(id)arg1 uuid:(id)arg2 cacheCreationDate:(id)arg3 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;


@end


#endif