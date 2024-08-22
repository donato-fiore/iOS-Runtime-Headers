// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCEVIDEOSMARTAPPSELECTIONDISAMBIGUATIONDEPENDENTSIGNALS_H
#define INFERENCESCHEMAINFERENCEVIDEOSMARTAPPSELECTIONDISAMBIGUATIONDEPENDENTSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCEVideoSmartAppSelectionDisambiguationDependentSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int disambiguationAppOrdinal; // ivar: _disambiguationAppOrdinal
@property (nonatomic) BOOL hasDisambiguationAppOrdinal;
@property (nonatomic) BOOL hasIsDisambiguatedApp;
@property (nonatomic) BOOL hasModelAppConfidence;
@property (nonatomic) BOOL isDisambiguatedApp; // ivar: _isDisambiguatedApp
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int modelAppConfidence; // ivar: _modelAppConfidence


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteDisambiguationAppOrdinal;
-(void)deleteIsDisambiguatedApp;
-(void)deleteModelAppConfidence;
-(void)writeTo:(id)arg0 ;


@end


#endif