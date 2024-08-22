// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GEOLOGMSGSTATEPAIREDDEVICE_H
#define GEOLOGMSGSTATEPAIREDDEVICE_H

@class PBCodable;
@protocol NSCopying;


#import "GEOLogMsgStateDeviceIdentifier.h"

@interface GEOLogMsgStatePairedDevice : PBCodable <NSCopying>

 {
    GEOLogMsgStateDeviceIdentifier *_pairedDeviceIdentifier;
    int _type;
    BOOL _isConnected;
    ? _flags;
}


@property (nonatomic) BOOL hasIsConnected;
@property (readonly, nonatomic) BOOL hasPairedDeviceIdentifier;
@property (nonatomic) BOOL hasType;
@property (nonatomic) BOOL isConnected;
@property (retain, nonatomic) GEOLogMsgStateDeviceIdentifier *pairedDeviceIdentifier;
@property (nonatomic) int type;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif