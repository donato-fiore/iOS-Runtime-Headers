// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOPDMODULECONFIGURATIONVALUE_H
#define GEOPDMODULECONFIGURATIONVALUE_H

@class PBCodable, PBDataReader, PBUnknownFields;
@protocol NSCopying;


#import "GEOPDBusinessInfosModuleConfiguration.h"
#import "GEOPDButtonModuleConfiguration.h"
#import "GEOPDHeaderButtonsConfiguration.h"
#import "GEOPDPlaceInfosModuleConfiguration.h"
#import "GEOPDRelatedPlaceModuleConfiguration.h"
#import "GEOPDPlaceRibbonConfiguration.h"
#import "GEOPDTemplatePlaceModuleConfiguration.h"
#import "GEOPDUnifiedActionModuleConfiguration.h"
#import "GEOPDWebModuleConfiguration.h"

@interface GEOPDModuleConfigurationValue : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    GEOPDBusinessInfosModuleConfiguration *_businessInfosModuleConfiguration;
    GEOPDButtonModuleConfiguration *_buttonModuleConfiguration;
    GEOPDHeaderButtonsConfiguration *_headerButtonsConfiguration;
    GEOPDPlaceInfosModuleConfiguration *_placeInfosModuleConfiguration;
    GEOPDRelatedPlaceModuleConfiguration *_relatedPlaceModuleConfiguration;
    GEOPDPlaceRibbonConfiguration *_ribbonModuleConfiguration;
    GEOPDTemplatePlaceModuleConfiguration *_templatePlaceModuleConfiguration;
    GEOPDUnifiedActionModuleConfiguration *_unifiedActionModuleConfiguration;
    GEOPDWebModuleConfiguration *_webModuleConfiguration;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)jsonRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif