// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef ATXPBLIGHTWEIGHTPROACTIVESUGGESTION_H
#define ATXPBLIGHTWEIGHTPROACTIVESUGGESTION_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "ATXPBProactiveSuggestionScoreSpecification.h"

@interface ATXPBLightweightProactiveSuggestion : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) NSString *executableIdentifier; // ivar: _executableIdentifier
@property (retain, nonatomic) NSString *executableType; // ivar: _executableType
@property (readonly, nonatomic) BOOL hasExecutableIdentifier;
@property (readonly, nonatomic) BOOL hasExecutableType;
@property (nonatomic) BOOL hasPredictionReasons;
@property (readonly, nonatomic) BOOL hasScoreSpecification;
@property (nonatomic) NSUInteger predictionReasons; // ivar: _predictionReasons
@property (retain, nonatomic) ATXPBProactiveSuggestionScoreSpecification *scoreSpecification; // ivar: _scoreSpecification


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