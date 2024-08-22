// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCEVIDEOSMARTAPPSELECTIONDISAMBIGUATIONSIGNALSGENERATED_H
#define INFERENCESCHEMAINFERENCEVIDEOSMARTAPPSELECTIONDISAMBIGUATIONSIGNALSGENERATED_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"
#import "INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationIndependentSignals.h"
#import "INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppGroundTruthGenerated.h"

@interface INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationSignalsGenerated : SISchemaInstrumentationMessage

@property (copy, nonatomic) NSArray *dependentSignals; // ivar: _dependentSignals
@property (nonatomic) BOOL hasIndependentSignal; // ivar: _hasIndependentSignal
@property (nonatomic) BOOL hasPlayOnThirdPartyAppSignals; // ivar: _hasPlayOnThirdPartyAppSignals
@property (retain, nonatomic) INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationIndependentSignals *independentSignal; // ivar: _independentSignal
@property (readonly, nonatomic) NSData *jsonData;
@property (retain, nonatomic) INFERENCESchemaINFERENCEVideoPlayOnThirdPartyAppGroundTruthGenerated *playOnThirdPartyAppSignals; // ivar: _playOnThirdPartyAppSignals


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dependentSignalsAtIndex:(NSUInteger)arg0 ;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addDependentSignals:(id)arg0 ;
-(void)clearDependentSignals;
-(void)deleteDependentSignals;
-(void)deleteIndependentSignal;
-(void)deletePlayOnThirdPartyAppSignals;
-(void)writeTo:(id)arg0 ;


@end


#endif