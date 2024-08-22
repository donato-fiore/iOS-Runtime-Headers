// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef ATXPBPROACTIVESUGGESTION_H
#define ATXPBPROACTIVESUGGESTION_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ATXPBProactiveSuggestionClientModelSpecification.h"
#import "ATXPBProactiveSuggestionExecutableSpecification.h"
#import "ATXPBProactiveSuggestionScoreSpecification.h"
#import "ATXPBProactiveSuggestionUISpecification.h"

@interface ATXPBProactiveSuggestion : PBCodable <NSCopying>



@property (retain, nonatomic) ATXPBProactiveSuggestionClientModelSpecification *clientModelSpecification; // ivar: _clientModelSpecification
@property (retain, nonatomic) ATXPBProactiveSuggestionExecutableSpecification *executableSpecification; // ivar: _executableSpecification
@property (readonly, nonatomic) BOOL hasClientModelSpecification;
@property (readonly, nonatomic) BOOL hasExecutableSpecification;
@property (readonly, nonatomic) BOOL hasScoreSpecification;
@property (readonly, nonatomic) BOOL hasUiSpecification;
@property (readonly, nonatomic) BOOL hasUuidString;
@property (retain, nonatomic) ATXPBProactiveSuggestionScoreSpecification *scoreSpecification; // ivar: _scoreSpecification
@property (retain, nonatomic) ATXPBProactiveSuggestionUISpecification *uiSpecification; // ivar: _uiSpecification
@property (retain, nonatomic) NSString *uuidString; // ivar: _uuidString


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif