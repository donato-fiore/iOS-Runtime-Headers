// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBCLIENTMODELCACHEUPDATE_H
#define ATXPBCLIENTMODELCACHEUPDATE_H

@class PBCodable, NSString, NSData, NSMutableArray;
@protocol NSCopying;


#import "ATXPBResponseForRequestForSuggestions.h"

@interface ATXPBClientModelCacheUpdate : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat cacheCreationDate; // ivar: _cacheCreationDate
@property (retain, nonatomic) NSString *clientModelId; // ivar: _clientModelId
@property (retain, nonatomic) NSData *feedbackMetadata; // ivar: _feedbackMetadata
@property (nonatomic) BOOL hasCacheCreationDate;
@property (readonly, nonatomic) BOOL hasClientModelId;
@property (readonly, nonatomic) BOOL hasFeedbackMetadata;
@property (readonly, nonatomic) BOOL hasResponseForRequestForSuggestions;
@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) ATXPBResponseForRequestForSuggestions *responseForRequestForSuggestions; // ivar: _responseForRequestForSuggestions
@property (retain, nonatomic) NSMutableArray *suggestions; // ivar: _suggestions
@property (retain, nonatomic) NSString *uuidString; // ivar: _uuidString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)suggestionsAtIndex:(NSUInteger)arg0 ;
-(void)addSuggestions:(id)arg0 ;
-(void)clearSuggestions;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif