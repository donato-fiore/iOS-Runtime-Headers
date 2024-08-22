// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef INFERENCESCHEMAINFERENCEBACKGROUNDCONTACTSIGNALSET_H
#define INFERENCESCHEMAINFERENCEBACKGROUNDCONTACTSIGNALSET_H

@class NSArray, NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCEBackgroundContactSignalSet : SISchemaInstrumentationMessage {
    ? _has;
}


@property (copy, nonatomic) NSArray *handlesWithBgPrivacySignals; // ivar: _handlesWithBgPrivacySignals
@property (nonatomic) BOOL hasIsMatchWithRelationName;
@property (nonatomic) BOOL hasPeopleSuggesterScoreSumForContact;
@property (nonatomic) BOOL isMatchWithRelationName; // ivar: _isMatchWithRelationName
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) float peopleSuggesterScoreSumForContact; // ivar: _peopleSuggesterScoreSumForContact


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)applySensitiveConditionsPolicy:(id)arg0 ;
-(id)dictionaryRepresentation;
-(id)handlesWithBgPrivacySignalsAtIndex:(NSUInteger)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)addHandlesWithBgPrivacySignals:(id)arg0 ;
-(void)clearHandlesWithBgPrivacySignals;
-(void)deleteHandlesWithBgPrivacySignals;
-(void)deleteIsMatchWithRelationName;
-(void)deletePeopleSuggesterScoreSumForContact;
-(void)writeTo:(id)arg0 ;


@end


#endif