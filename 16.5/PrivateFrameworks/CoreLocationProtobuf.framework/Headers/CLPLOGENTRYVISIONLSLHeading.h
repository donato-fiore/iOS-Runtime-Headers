// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CLPLOGENTRYVISIONLSLHEADING_H
#define CLPLOGENTRYVISIONLSLHEADING_H

@class PBCodable;
@protocol NSCopying;


#import "CLPLOGENTRYVISIONLSLLocation.h"
#import "CLPLOGENTRYVISIONSimdDoubleMxN.h"
#import "CLPLOGENTRYVISIONSimdDoubleM.h"
#import "CLPLOGENTRYVISIONLSLHeadingSupplInfo.h"
#import "CLPLOGENTRYVISIONTimeStamp.h"

@interface CLPLOGENTRYVISIONLSLHeading : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) CGFloat confidence; // ivar: _confidence
@property (nonatomic) int globalReferenceFrame; // ivar: _globalReferenceFrame
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasGlobalReferenceFrame;
@property (readonly, nonatomic) BOOL hasLocation;
@property (readonly, nonatomic) BOOL hasRotationFromGlobalToCameraFrame;
@property (readonly, nonatomic) BOOL hasRotationFromGlobalToDeviceFrame;
@property (readonly, nonatomic) BOOL hasRotationalAccuracyInRadians;
@property (readonly, nonatomic) BOOL hasSupplemantaryInfo;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (retain, nonatomic) CLPLOGENTRYVISIONLSLLocation *location; // ivar: _location
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleMxN *rotationFromGlobalToCameraFrame; // ivar: _rotationFromGlobalToCameraFrame
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleMxN *rotationFromGlobalToDeviceFrame; // ivar: _rotationFromGlobalToDeviceFrame
@property (retain, nonatomic) CLPLOGENTRYVISIONSimdDoubleM *rotationalAccuracyInRadians; // ivar: _rotationalAccuracyInRadians
@property (retain, nonatomic) CLPLOGENTRYVISIONLSLHeadingSupplInfo *supplemantaryInfo; // ivar: _supplemantaryInfo
@property (retain, nonatomic) CLPLOGENTRYVISIONTimeStamp *timestamp; // ivar: _timestamp


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)globalReferenceFrameAsString:(int)arg0 ;
-(int)StringAsGlobalReferenceFrame:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif