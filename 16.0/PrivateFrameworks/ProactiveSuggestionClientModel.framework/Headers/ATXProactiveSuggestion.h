// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPROACTIVESUGGESTION_H
#define ATXPROACTIVESUGGESTION_H

@class NSString, NSDate, INIntent, NSDictionary, NSUUID;
@protocol NSSecureCoding, ATXProtoBufWrapper, NSCopying;

#import <Foundation/Foundation.h>

#import "ATXProactiveSuggestionClientModelSpecification.h"
#import "ATXProactiveSuggestionExecutableSpecification.h"
#import "ATXInfoSuggestion.h"
#import "ATXProactiveSuggestionScoreSpecification.h"
#import "ATXProactiveSuggestionUISpecification.h"

@interface ATXProactiveSuggestion : NSObject <NSSecureCoding, ATXProtoBufWrapper, NSCopying>

 {
    NSUInteger _hash;
}


@property (readonly, nonatomic) NSString *appBundleIdentifier;
@property (readonly, nonatomic) NSUInteger applicableLayouts;
@property (readonly, nonatomic) ATXProactiveSuggestionClientModelSpecification *clientModelSpecification; // ivar: _clientModelSpecification
@property (readonly, nonatomic) NSString *criterion;
@property (readonly, nonatomic) NSDate *endDate;
@property (readonly, nonatomic) ATXProactiveSuggestionExecutableSpecification *executableSpecification; // ivar: _executableSpecification
@property (retain, nonatomic) ATXInfoSuggestion *infoSuggestion; // ivar: _infoSuggestion
@property (readonly, nonatomic) INIntent *intent;
@property (readonly, nonatomic) NSDictionary *metadata;
@property (readonly, nonatomic) ATXProactiveSuggestionScoreSpecification *scoreSpecification; // ivar: _scoreSpecification
@property (readonly, nonatomic) NSDate *startDate;
@property (readonly, nonatomic) NSString *suggestionIdentifier;
@property (readonly, nonatomic) ATXProactiveSuggestionUISpecification *uiSpecification; // ivar: _uiSpecification
@property (readonly, nonatomic) NSUUID *uuid; // ivar: _uuid
@property (readonly, nonatomic) NSString *widgetBundleIdentifier;


+(BOOL)suggestionsHaveChangedFromPreviousSuggestions:(id)arg0 newSuggestions:(id)arg1 ;
+(BOOL)supportsSecureCoding;
+(id)protoSuggestionsFromSuggestions:(id)arg0 ;
+(id)suggestionsFromProtoSuggestions:(id)arg0 ;
-(BOOL)checkAndReportDecodingFailureIfNeededForid:(id)arg0 key:(id)arg1 coder:(id)arg2 errorDomain:(id)arg3 errorCode:(NSInteger)arg4 ;
-(BOOL)fuzzyIsEqualToProactiveSuggestion:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isValidForSuggestionsWidget;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)encodeAsProto;
-(id)initWithClientModelSpecification:(id)arg0 executableSpecification:(id)arg1 uiSpecification:(id)arg2 scoreSpecification:(id)arg3 ;
-(id)initWithClientModelSpecification:(id)arg0 executableSpecification:(id)arg1 uiSpecification:(id)arg2 scoreSpecification:(id)arg3 uuid:(id)arg4 ;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProto:(id)arg0 ;
-(id)initWithProtoData:(id)arg0 ;
-(id)jsonRawData;
-(id)proto;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif