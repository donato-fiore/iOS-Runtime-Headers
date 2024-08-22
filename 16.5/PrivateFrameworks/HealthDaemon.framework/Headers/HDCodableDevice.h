// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HDCODABLEDEVICE_H
#define HDCODABLEDEVICE_H

@class PBCodable, NSString, NSData;
@protocol NSCopying;



@interface HDCodableDevice : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat creationDate; // ivar: _creationDate
@property (retain, nonatomic) NSString *fDAUDI; // ivar: _fDAUDI
@property (retain, nonatomic) NSString *firmwareVersion; // ivar: _firmwareVersion
@property (retain, nonatomic) NSString *hardwareVersion; // ivar: _hardwareVersion
@property (nonatomic) BOOL hasCreationDate;
@property (readonly, nonatomic) BOOL hasFDAUDI;
@property (readonly, nonatomic) BOOL hasFirmwareVersion;
@property (readonly, nonatomic) BOOL hasHardwareVersion;
@property (readonly, nonatomic) BOOL hasLocalIdentifier;
@property (readonly, nonatomic) BOOL hasManufacturer;
@property (readonly, nonatomic) BOOL hasModel;
@property (readonly, nonatomic) BOOL hasName;
@property (readonly, nonatomic) BOOL hasSoftwareVersion;
@property (readonly, nonatomic) BOOL hasUuid;
@property (retain, nonatomic) NSString *localIdentifier; // ivar: _localIdentifier
@property (retain, nonatomic) NSString *manufacturer; // ivar: _manufacturer
@property (retain, nonatomic) NSString *model; // ivar: _model
@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSString *softwareVersion; // ivar: _softwareVersion
@property (retain, nonatomic) NSData *uuid; // ivar: _uuid


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif