// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PLUSSCHEMAPLUSTMDCGROUNDTRUTH_H
#define PLUSSCHEMAPLUSTMDCGROUNDTRUTH_H

@class NSData, NSString;


#import "SISchemaInstrumentationMessage.h"
#import "SISchemaUUID.h"

@interface PLUSSchemaPLUSTMDCGroundTruth : SISchemaInstrumentationMessage {
    ? _has;
}


@property (retain, nonatomic) SISchemaUUID *asrPostItnLinkId; // ivar: _asrPostItnLinkId
@property (retain, nonatomic) SISchemaUUID *asrRawRecognitionLinkId; // ivar: _asrRawRecognitionLinkId
@property (retain, nonatomic) SISchemaUUID *groundTruthId; // ivar: _groundTruthId
@property (nonatomic) BOOL hasAsrPostItnLinkId; // ivar: _hasAsrPostItnLinkId
@property (nonatomic) BOOL hasAsrRawRecognitionLinkId; // ivar: _hasAsrRawRecognitionLinkId
@property (nonatomic) BOOL hasGroundTruthId; // ivar: _hasGroundTruthId
@property (nonatomic) BOOL hasIsTTSMispronounced;
@property (nonatomic) BOOL hasPhonemesToPhonemesDistance;
@property (nonatomic) BOOL hasTtsCurrentPhonemes; // ivar: _hasTtsCurrentPhonemes
@property (nonatomic) BOOL isTTSMispronounced; // ivar: _isTTSMispronounced
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) CGFloat phonemesToPhonemesDistance; // ivar: _phonemesToPhonemesDistance
@property (copy, nonatomic) NSString *ttsCurrentPhonemes; // ivar: _ttsCurrentPhonemes


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAsrPostItnLinkId;
-(void)deleteAsrRawRecognitionLinkId;
-(void)deleteGroundTruthId;
-(void)deleteIsTTSMispronounced;
-(void)deletePhonemesToPhonemesDistance;
-(void)deleteTtsCurrentPhonemes;
-(void)writeTo:(id)arg0 ;


@end


#endif