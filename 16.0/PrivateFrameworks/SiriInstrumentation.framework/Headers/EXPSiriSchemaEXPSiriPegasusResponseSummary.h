// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef EXPSIRISCHEMAEXPSIRIPEGASUSRESPONSESUMMARY_H
#define EXPSIRISCHEMAEXPSIRIPEGASUSRESPONSESUMMARY_H

@class NSArray, NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface EXPSiriSchemaEXPSiriPegasusResponseSummary : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *canonicalIds; // ivar: _canonicalIds
@property (copy, nonatomic) NSString *catId; // ivar: _catId
@property (nonatomic) BOOL hasCatId; // ivar: _hasCatId
@property (nonatomic) BOOL hasResponseStatus;
@property (nonatomic) BOOL hasResultDomain;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int responseStatus; // ivar: _responseStatus
@property (nonatomic) int resultDomain; // ivar: _resultDomain


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)canonicalIdsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addCanonicalIds:(id)arg0 ;
-(void)clearCanonicalIds;
-(void)deleteCanonicalIds;
-(void)deleteCatId;
-(void)deleteResponseStatus;
-(void)deleteResultDomain;
-(void)writeTo:(id)arg0 ;


@end


#endif