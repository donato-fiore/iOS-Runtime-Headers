// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef ATXBIOMEPROACTIVESUGGESTIONUIFEEDBACKRESULT_H
#define ATXBIOMEPROACTIVESUGGESTIONUIFEEDBACKRESULT_H

@class NSUUID, NSDate, NSString, NSArray;
@protocol BMStoreData, ATXProtoBufWrapper;

#import <Foundation/Foundation.h>


@interface ATXBiomeProactiveSuggestionUIFeedbackResult : NSObject <BMStoreData, ATXProtoBufWrapper>



@property (readonly, nonatomic) NSUUID *blendingUICacheUpdateUUID; // ivar: _blendingUICacheUpdateUUID
@property (readonly, nonatomic) NSDate *clientModelCacheCreationDate; // ivar: _clientModelCacheCreationDate
@property (readonly, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (readonly, nonatomic) unsigned char consumerSubType; // ivar: _consumerSubType
@property (readonly, nonatomic) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *engagedSuggestions; // ivar: _engagedSuggestions
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) NSArray *rejectedSuggestions; // ivar: _rejectedSuggestions
@property (readonly, nonatomic) NSDate *sessionEndDate; // ivar: _sessionEndDate
@property (readonly, nonatomic) NSString *sessionId; // ivar: _sessionId
@property (readonly, nonatomic) NSDate *sessionStartDate; // ivar: _sessionStartDate
@property (readonly, nonatomic) NSArray *shownSuggestions; // ivar: _shownSuggestions
@property (readonly, nonatomic) NSInteger suggestionExecutableType; // ivar: _suggestionExecutableType
@property (readonly) Class superclass;


+(id)eventWithData:(id)arg0 dataVersion:(unsigned int)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXBiomeProactiveSuggestionUIFeedbackResult:(id)arg0 ;
-(id)encodeAsProto;
-(id)init;
-(id)initWithProactiveSuggestionUIFeedbackResult:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)initWithSessionId:(id)arg0 blendingUICacheUpdateUUID:(id)arg1 clientModelId:(id)arg2 clientModelCacheCreationDate:(id)arg3 consumerSubType:(unsigned char)arg4 sessionStartDate:(id)arg5 sessionEndDate:(id)arg6 shownSuggestions:(id)arg7 engagedSuggestions:(id)arg8 rejectedSuggestions:(id)arg9 ;
-(id)json;
-(id)jsonDict;
-(id)proto;
-(id)serialize;


@end


#endif