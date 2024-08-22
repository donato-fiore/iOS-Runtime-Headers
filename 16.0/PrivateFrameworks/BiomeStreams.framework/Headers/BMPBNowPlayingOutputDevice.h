// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef BMPBNOWPLAYINGOUTPUTDEVICE_H
#define BMPBNOWPLAYINGOUTPUTDEVICE_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface BMPBNowPlayingOutputDevice : PBCodable <NSCopying>

 {
    ? _has;
}


@property (readonly, nonatomic) BOOL hasOutputDeviceId;
@property (nonatomic) BOOL hasOutputDeviceSubType;
@property (nonatomic) BOOL hasOutputDeviceType;
@property (retain, nonatomic) NSString *outputDeviceId; // ivar: _outputDeviceId
@property (nonatomic) int outputDeviceSubType; // ivar: _outputDeviceSubType
@property (nonatomic) int outputDeviceType; // ivar: _outputDeviceType


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)outputDeviceSubTypeAsString:(int)arg0 ;
-(id)outputDeviceTypeAsString:(int)arg0 ;
-(int)StringAsOutputDeviceSubType:(id)arg0 ;
-(int)StringAsOutputDeviceType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif