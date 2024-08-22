// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXCLIENTMODELCACHEUPDATE_H
#define ATXCLIENTMODELCACHEUPDATE_H

@class NSDate, NSString, NSData, NSArray, NSUUID;
@protocol NSSecureCoding, BMStoreData, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>

#import "ATXSuggestionRequestResponse.h"

@interface ATXClientModelCacheUpdate : NSObject <NSSecureCoding, BMStoreData, ATXProtoBufWrapper>

 {
    CGFloat _absoluteCacheCreationDate;
}


@property (readonly, nonatomic) NSDate *cacheCreationDate;
@property (readonly, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (retain, nonatomic) NSData *feedbackMetadata; // ivar: _feedbackMetadata
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) ATXSuggestionRequestResponse *suggestionRequestResponse; // ivar: _suggestionRequestResponse
@property (readonly, nonatomic) NSArray *suggestions; // ivar: _suggestions
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid


+(BOOL)supportsSecureCoding;
+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXClientModelCacheUpdate:(id)arg0 ;
-(id)_clientModelFromClientModelId:(id)arg0 suggestions:(id)arg1 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithClientModelId:(id)arg0 suggestions:(id)arg1 feedbackMetadata:(id)arg2 responseForRealTimeRequest:(id)arg3 ;
-(id)initWithClientModelId:(id)arg0 suggestions:(id)arg1 feedbackMetadata:(id)arg2 responseForRealTimeRequest:(id)arg3 uuid:(id)arg4 cacheCreationDate:(id)arg5 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)json;
-(id)jsonRawData;
-(id)proto;
-(id)serialize;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif