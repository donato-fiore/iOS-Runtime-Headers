// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef GEOLOGMSGSTATENAVIGATION_H
#define GEOLOGMSGSTATENAVIGATION_H

@class PBCodable;
@protocol NSCopying;


#import "GEONavCameraState.h"

@interface GEOLogMsgStateNavigation : PBCodable <NSCopying>

 {
    CGFloat _distanceToDestination;
    GEONavCameraState *_navCameraState;
    int _lineType;
    int _navState;
    ? _flags;
}


@property (nonatomic) CGFloat distanceToDestination;
@property (nonatomic) BOOL hasDistanceToDestination;
@property (nonatomic) BOOL hasLineType;
@property (readonly, nonatomic) BOOL hasNavCameraState;
@property (nonatomic) BOOL hasNavState;
@property (nonatomic) int lineType;
@property (retain, nonatomic) GEONavCameraState *navCameraState;
@property (nonatomic) int navState;


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
-(id)lineTypeAsString:(int)arg0 ;
-(id)navStateAsString:(int)arg0 ;
-(int)StringAsLineType:(id)arg0 ;
-(int)StringAsNavState:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)readAll:(BOOL)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif