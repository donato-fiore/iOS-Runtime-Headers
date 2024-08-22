// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXLIGHTWEIGHTPROACTIVESUGGESTION_H
#define ATXLIGHTWEIGHTPROACTIVESUGGESTION_H

@class NSString;
@protocol ATXProtoBufWrapper;

#import <Foundation/Foundation.h>

#import "ATXProactiveSuggestionScoreSpecification.h"

@interface ATXLightweightProactiveSuggestion : NSObject <ATXProtoBufWrapper>



@property (nonatomic) unsigned char consumerSubType; // ivar: _consumerSubType
@property (readonly, nonatomic) NSString *executableIdentifier; // ivar: _executableIdentifier
@property (readonly, nonatomic) NSInteger executableType; // ivar: _executableType
@property (readonly, nonatomic) NSUInteger predictionReasons; // ivar: _predictionReasons
@property (readonly, nonatomic) ATXProactiveSuggestionScoreSpecification *scoreSpecification; // ivar: _scoreSpecification


+(id)lightWeightSuggestionDescriptionsFromLightWeightSuggestions:(id)arg0 ;
+(id)lightWeightSuggestionsFromProtoLightWeightSuggestions:(id)arg0 ;
+(id)lightWeightSuggestionsFromSuggestions:(id)arg0 ;
+(id)protoLightWeightSuggestionsFromLightWeightSuggestions:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToATXLightweightProactiveSuggestion:(id)arg0 ;
-(id)description;
-(id)encodeAsProto;
-(id)init;
-(id)initWithExecutableIdentifier:(id)arg0 executableType:(NSInteger)arg1 scoreSpecification:(id)arg2 predictionReasons:(NSUInteger)arg3 ;
-(id)initWithProactiveSuggestion:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)proto;


@end


#endif