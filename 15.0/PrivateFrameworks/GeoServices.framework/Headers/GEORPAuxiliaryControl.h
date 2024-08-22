// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef GEORPAUXILIARYCONTROL_H
#define GEORPAUXILIARYCONTROL_H

@class PBCodable, PBDataReader;
@protocol NSCopying;


#import "GEORPCarPlayAuxiliaryControl.h"
#import "GEORPWatchAuxiliaryControl.h"

@interface GEORPAuxiliaryControl : PBCodable <NSCopying>

 {
    PBDataReader *_reader;
    GEORPCarPlayAuxiliaryControl *_car;
    GEORPWatchAuxiliaryControl *_watch;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    os_unfair_lock_s _readerLock;
    ? _flags;
}


@property (retain, nonatomic) GEORPCarPlayAuxiliaryControl *car;
@property (readonly, nonatomic) BOOL hasCar;
@property (readonly, nonatomic) BOOL hasWatch;
@property (retain, nonatomic) GEORPWatchAuxiliaryControl *watch;


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