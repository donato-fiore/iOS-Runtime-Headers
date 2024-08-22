// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCESPEECHALTERNATIVERANKS_H
#define INFERENCESCHEMAINFERENCESPEECHALTERNATIVERANKS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCESpeechAlternativeRanks : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) unsigned int familyNameRank; // ivar: _familyNameRank
@property (nonatomic) unsigned int fullNameRank; // ivar: _fullNameRank
@property (nonatomic) unsigned int givenNameRank; // ivar: _givenNameRank
@property (nonatomic) BOOL hasFamilyNameRank;
@property (nonatomic) BOOL hasFullNameRank;
@property (nonatomic) BOOL hasGivenNameRank;
@property (nonatomic) BOOL hasIsError;
@property (nonatomic) BOOL hasMiddleNameRank;
@property (nonatomic) BOOL hasVersion;
@property (nonatomic) BOOL isError; // ivar: _isError
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int middleNameRank; // ivar: _middleNameRank
@property (nonatomic) unsigned int version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteFamilyNameRank;
-(void)deleteFullNameRank;
-(void)deleteGivenNameRank;
-(void)deleteIsError;
-(void)deleteMiddleNameRank;
-(void)deleteVersion;
-(void)writeTo:(id)arg0 ;


@end


#endif