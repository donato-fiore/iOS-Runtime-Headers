// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECOMMSAPPSELECTIONTRAININGAPPINDEPENDENTSIGNALS_H
#define INFERENCESCHEMAINFERENCECOMMSAPPSELECTIONTRAININGAPPINDEPENDENTSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCECommsAppSelectionTrainingAppIndependentSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int appResolutionType; // ivar: _appResolutionType
@property (nonatomic) NSInteger communicationType; // ivar: _communicationType
@property (nonatomic) BOOL hasAppResolutionType;
@property (nonatomic) BOOL hasCommunicationType;
@property (nonatomic) BOOL hasRequestOriginLanguage;
@property (nonatomic) BOOL hasRequestOriginLocale;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) NSInteger requestOriginLanguage; // ivar: _requestOriginLanguage
@property (nonatomic) NSInteger requestOriginLocale; // ivar: _requestOriginLocale


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppResolutionType;
-(void)deleteCommunicationType;
-(void)deleteRequestOriginLanguage;
-(void)deleteRequestOriginLocale;
-(void)writeTo:(id)arg0 ;


@end


#endif