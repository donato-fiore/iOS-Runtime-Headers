// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGSTATEROUTINGSETTINGS_H
#define GEOLOGMSGSTATEROUTINGSETTINGS_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEORoutingSettingsCyclingPrefs.h"
#import "GEORoutingSettingsDrivingPrefs.h"
#import "GEORoutingSettingsVirtualGarageSetttings.h"

@interface GEOLogMsgStateRoutingSettings : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEORoutingSettingsCyclingPrefs *_cyclingPrefs;
    GEORoutingSettingsDrivingPrefs *_drivingPrefs;
    GEORoutingSettingsVirtualGarageSetttings *_virtualGarageSettings;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEORoutingSettingsCyclingPrefs *cyclingPrefs;
@property (retain, nonatomic) GEORoutingSettingsDrivingPrefs *drivingPrefs;
@property (readonly, nonatomic) BOOL hasCyclingPrefs;
@property (readonly, nonatomic) BOOL hasDrivingPrefs;
@property (readonly, nonatomic) BOOL hasVirtualGarageSettings;
@property (retain, nonatomic) GEORoutingSettingsVirtualGarageSetttings *virtualGarageSettings;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif