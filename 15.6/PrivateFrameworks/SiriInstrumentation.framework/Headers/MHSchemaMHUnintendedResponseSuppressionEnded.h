// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MHSCHEMAMHUNINTENDEDRESPONSESUPPRESSIONENDED_H
#define MHSCHEMAMHUNINTENDEDRESPONSESUPPRESSIONENDED_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"

@interface MHSchemaMHUnintendedResponseSuppressionEnded : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasModelVersion; // ivar: _hasModelVersion
@property (nonatomic) BOOL hasScore;
@property (nonatomic) BOOL hasThreshold;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *modelVersion; // ivar: _modelVersion
@property (nonatomic) float score; // ivar: _score
@property (nonatomic) float threshold; // ivar: _threshold


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteModelVersion;
-(void)deleteScore;
-(void)deleteThreshold;
-(void)writeTo:(id)arg0 ;


@end


#endif