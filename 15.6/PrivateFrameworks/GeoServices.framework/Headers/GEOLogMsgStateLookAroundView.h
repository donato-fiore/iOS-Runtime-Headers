// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOLOGMSGSTATELOOKAROUNDVIEW_H
#define GEOLOGMSGSTATELOOKAROUNDVIEW_H

@class PBCodable;
@protocol NSCopying;


#import "GEOLocation.h"

@interface GEOLogMsgStateLookAroundView : PBCodable <NSCopying>

 {
    GEOLocation *_location;
    CGFloat _zoomLevel;
    unsigned int _heading;
    unsigned int _numberPoisInView;
    BOOL _isLabelingShown;
    ? _flags;
}


@property (nonatomic) BOOL hasHeading;
@property (nonatomic) BOOL hasIsLabelingShown;
@property (readonly, nonatomic) BOOL hasLocation;
@property (nonatomic) BOOL hasNumberPoisInView;
@property (nonatomic) BOOL hasZoomLevel;
@property (nonatomic) unsigned int heading;
@property (nonatomic) BOOL isLabelingShown;
@property (retain, nonatomic) GEOLocation *location;
@property (nonatomic) unsigned int numberPoisInView;
@property (nonatomic) CGFloat zoomLevel;


+(BOOL)isValid:(id)arg0 ;
-(BOOL)hasGreenTeaWithValue:(BOOL)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithDictionary:(id)arg0 ;
-(id)initWithJSON:(id)arg0 ;
-(id)jsonRepresentation;
-(void)clearSensitiveFields:(NSUInteger)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif