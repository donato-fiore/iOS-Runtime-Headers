// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SISCHEMAABEXPERIMENTASSETRETRIEVALSTATUSCHANGED_H
#define SISCHEMAABEXPERIMENTASSETRETRIEVALSTATUSCHANGED_H

@class NSString, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface SISchemaABExperimentAssetRetrievalStatusChanged : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSString *assetId; // ivar: _assetId
@property (copy, nonatomic) NSString *experimentId; // ivar: _experimentId
@property (nonatomic) BOOL hasAssetId; // ivar: _hasAssetId
@property (nonatomic) BOOL hasExperimentId; // ivar: _hasExperimentId
@property (nonatomic) BOOL hasRetrievalStatusCode;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int retrievalStatusCode; // ivar: _retrievalStatusCode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif