// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FLOWSCHEMAFLOWMAPSEXECUTION_H
#define FLOWSCHEMAFLOWMAPSEXECUTION_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface FLOWSchemaFLOWMapsExecution : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) BOOL hasIsProxySearchResult;
@property (nonatomic) BOOL hasIsSearchAlongRouteRequest;
@property (nonatomic) BOOL hasIsSpellCorrected;
@property (nonatomic) BOOL hasMapsFeature;
@property (nonatomic) BOOL hasMapsQueryLabel;
@property (nonatomic) BOOL isProxySearchResult; // ivar: _isProxySearchResult
@property (nonatomic) BOOL isSearchAlongRouteRequest; // ivar: _isSearchAlongRouteRequest
@property (nonatomic) BOOL isSpellCorrected; // ivar: _isSpellCorrected
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int mapsFeature; // ivar: _mapsFeature
@property (nonatomic) int mapsQueryLabel; // ivar: _mapsQueryLabel


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteIsProxySearchResult;
-(void)deleteIsSearchAlongRouteRequest;
-(void)deleteIsSpellCorrected;
-(void)deleteMapsFeature;
-(void)deleteMapsQueryLabel;
-(void)writeTo:(id)arg0 ;


@end


#endif