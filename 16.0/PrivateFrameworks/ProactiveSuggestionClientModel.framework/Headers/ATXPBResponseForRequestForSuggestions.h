// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ATXPBRESPONSEFORREQUESTFORSUGGESTIONS_H
#define ATXPBRESPONSEFORREQUESTFORSUGGESTIONS_H

@class PBCodable, NSData, NSMutableArray, NSString;
@protocol NSCopying;


#import "ATXPBRequestForContextualActionSuggestions.h"
#import "ATXPBRequestForIntentSuggestions.h"
#import "ATXPBRequestForInteractionSuggestions.h"

@interface ATXPBResponseForRequestForSuggestions : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) ATXPBRequestForContextualActionSuggestions *contextualActionSuggestionRequest; // ivar: _contextualActionSuggestionRequest
@property (retain, nonatomic) NSData *errorData; // ivar: _errorData
@property (retain, nonatomic) NSData *feedbackMetadata; // ivar: _feedbackMetadata
@property (readonly, nonatomic) BOOL hasContextualActionSuggestionRequest;
@property (readonly, nonatomic) BOOL hasErrorData;
@property (readonly, nonatomic) BOOL hasFeedbackMetadata;
@property (readonly, nonatomic) BOOL hasIntentSuggestionRequest;
@property (readonly, nonatomic) BOOL hasInteractionSuggestionRequest;
@property (nonatomic) BOOL hasResponseCode;
@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) ATXPBRequestForIntentSuggestions *intentSuggestionRequest; // ivar: _intentSuggestionRequest
@property (retain, nonatomic) ATXPBRequestForInteractionSuggestions *interactionSuggestionRequest; // ivar: _interactionSuggestionRequest
@property (nonatomic) int responseCode; // ivar: _responseCode
@property (retain, nonatomic) NSMutableArray *suggestions; // ivar: _suggestions
@property (retain, nonatomic) NSString *uuidString; // ivar: _uuidString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)responseCodeAsString:(int)arg0 ;
-(id)suggestionsAtIndex:(NSUInteger)arg0 ;
-(int)StringAsResponseCode:(id)arg0 ;
-(void)addSuggestions:(id)arg0 ;
-(void)clearSuggestions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif