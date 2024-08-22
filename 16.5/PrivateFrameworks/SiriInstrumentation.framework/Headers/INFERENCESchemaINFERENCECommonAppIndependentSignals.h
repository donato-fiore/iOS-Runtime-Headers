// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef INFERENCESCHEMAINFERENCECOMMONAPPINDEPENDENTSIGNALS_H
#define INFERENCESCHEMAINFERENCECOMMONAPPINDEPENDENTSIGNALS_H

@class NSData;


#import "SISchemaInstrumentationMessage.h"

@interface INFERENCESchemaINFERENCECommonAppIndependentSignals : SISchemaInstrumentationMessage {
    ? _has;
}


@property (nonatomic) int appResolutionType; // ivar: _appResolutionType
@property (nonatomic) int appSelectionUses; // ivar: _appSelectionUses
@property (nonatomic) int clientDayOfWeek; // ivar: _clientDayOfWeek
@property (nonatomic) BOOL hasAppResolutionType;
@property (nonatomic) BOOL hasAppSelectionUses;
@property (nonatomic) BOOL hasClientDayOfWeek;
@property (nonatomic) BOOL hasIsClientDaylight;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) BOOL hasRawClientHourOfDay;
@property (nonatomic) BOOL hasRawCountry;
@property (nonatomic) BOOL hasRawLanguage;
@property (nonatomic) BOOL hasRawLocale;
@property (nonatomic) BOOL hasRawRequestDeviceCategory;
@property (nonatomic) BOOL hasRawStateOrProvince;
@property (nonatomic) BOOL hasSirikitResponseCode;
@property (nonatomic) BOOL isClientDaylight; // ivar: _isClientDaylight
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned int modelVersion; // ivar: _modelVersion
@property (nonatomic) int rawClientHourOfDay; // ivar: _rawClientHourOfDay
@property (nonatomic) NSInteger rawCountry; // ivar: _rawCountry
@property (nonatomic) NSInteger rawLanguage; // ivar: _rawLanguage
@property (nonatomic) NSInteger rawLocale; // ivar: _rawLocale
@property (nonatomic) NSInteger rawRequestDeviceCategory; // ivar: _rawRequestDeviceCategory
@property (nonatomic) NSInteger rawStateOrProvince; // ivar: _rawStateOrProvince
@property (nonatomic) int sirikitResponseCode; // ivar: _sirikitResponseCode


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)suppressMessageUnderConditions;
-(void)deleteAppResolutionType;
-(void)deleteAppSelectionUses;
-(void)deleteClientDayOfWeek;
-(void)deleteIsClientDaylight;
-(void)deleteModelVersion;
-(void)deleteRawClientHourOfDay;
-(void)deleteRawCountry;
-(void)deleteRawLanguage;
-(void)deleteRawLocale;
-(void)deleteRawRequestDeviceCategory;
-(void)deleteRawStateOrProvince;
-(void)deleteSirikitResponseCode;
-(void)writeTo:(id)arg0 ;


@end


#endif