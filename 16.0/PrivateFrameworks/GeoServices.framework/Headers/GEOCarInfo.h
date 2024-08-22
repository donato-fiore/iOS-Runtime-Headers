// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOCARINFO_H
#define GEOCARINFO_H

@class PBCodable, PBDataReader, PBUnknownFields, NSString;
@protocol NSCopying;


#import "GEOScreenDimension.h"

@interface GEOCarInfo : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    ? _engineTypes;
    ? _inputMethods;
    GEOScreenResolution _screenResolution;
    NSString *_carName;
    NSString *_manufacturer;
    NSString *_model;
    GEOScreenDimension *_screenDimension;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    int _brightness;
    int _colorRange;
    int _deviceConnection;
    int _navAidedDrivingStatus;
    BOOL _destinationSharingEnabled;
    BOOL _isInstructionCardEnabled;
    BOOL _isInstrumentClusterEnabled;
    BOOL _isMapviewEnabled;
    ? _flags;
}


@property (nonatomic) int brightness;
@property (retain, nonatomic) NSString *carName;
@property (nonatomic) int colorRange;
@property (nonatomic) BOOL destinationSharingEnabled;
@property (nonatomic) int deviceConnection;
@property (readonly, nonatomic) *int engineTypes;
@property (readonly, nonatomic) NSUInteger engineTypesCount;
@property (nonatomic) BOOL hasBrightness;
@property (readonly, nonatomic) BOOL hasCarName;
@property (nonatomic) BOOL hasColorRange;
@property (nonatomic) BOOL hasDestinationSharingEnabled;
@property (nonatomic) BOOL hasDeviceConnection;
@property (nonatomic) BOOL hasIsInstructionCardEnabled;
@property (nonatomic) BOOL hasIsInstrumentClusterEnabled;
@property (nonatomic) BOOL hasIsMapviewEnabled;
@property (readonly, nonatomic) BOOL hasManufacturer;
@property (readonly, nonatomic) BOOL hasModel;
@property (nonatomic) BOOL hasNavAidedDrivingStatus;
@property (readonly, nonatomic) BOOL hasScreenDimension;
@property (nonatomic) BOOL hasScreenResolution;
@property (readonly, nonatomic) *int inputMethods;
@property (readonly, nonatomic) NSUInteger inputMethodsCount;
@property (nonatomic) BOOL isInstructionCardEnabled;
@property (nonatomic) BOOL isInstrumentClusterEnabled;
@property (nonatomic) BOOL isMapviewEnabled;
@property (retain, nonatomic) NSString *manufacturer;
@property (retain, nonatomic) NSString *model;
@property (nonatomic) int navAidedDrivingStatus;
@property (retain, nonatomic) GEOScreenDimension *screenDimension;
@property (nonatomic) GEOScreenResolution screenResolution;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;


+(BOOL)isValid:(id)arg0 ;
+(id)carInfoWithTraits:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)deviceConnectionAsString:(int)arg0 ;
-(id)dictionaryRepresentation;
-(id)engineTypesAsString:(int)arg0 ;
-(id)init;
-(id)initWithData:(id)arg0 ;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)initWithTraits:(id)arg0 ;
-(id)inputMethodsAsString:(int)arg0 ;
-(id)jsonRepresentation;
-(id)navAidedDrivingStatusAsString:(int)arg0 ;
-(int)StringAsDeviceConnection:(id)arg0 ;
-(int)StringAsEngineTypes:(id)arg0 ;
-(int)StringAsInputMethods:(id)arg0 ;
-(int)StringAsNavAidedDrivingStatus:(id)arg0 ;
-(int)engineTypeAtIndex:(NSUInteger)arg0 ;
-(int)inputMethodAtIndex:(NSUInteger)arg0 ;
-(void)addEngineType:(int)arg0 ;
-(void)addInputMethod:(int)arg0 ;
-(void)clearEngineTypes;
-(void)clearInputMethods;
-(void)clearUnknownFields:(BOOL)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)dealloc;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif