// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRVIRTUALTOUCHDEVICEDESCRIPTORPROTOBUF_H
#define _MRVIRTUALTOUCHDEVICEDESCRIPTORPROTOBUF_H

@class PBCodable;
@protocol NSCopying;



@interface _MRVirtualTouchDeviceDescriptorProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) BOOL absolute; // ivar: _absolute
@property (nonatomic) BOOL hasAbsolute;
@property (nonatomic) BOOL hasIntegratedDisplay;
@property (nonatomic) BOOL hasScreenSizeHeight;
@property (nonatomic) BOOL hasScreenSizeWidth;
@property (nonatomic) BOOL integratedDisplay; // ivar: _integratedDisplay
@property (nonatomic) float screenSizeHeight; // ivar: _screenSizeHeight
@property (nonatomic) float screenSizeWidth; // ivar: _screenSizeWidth


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