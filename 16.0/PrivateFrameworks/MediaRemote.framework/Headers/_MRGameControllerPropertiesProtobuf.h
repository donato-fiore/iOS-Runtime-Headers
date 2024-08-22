// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MRGAMECONTROLLERPROPERTIESPROTOBUF_H
#define _MRGAMECONTROLLERPROPERTIESPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;



@interface _MRGameControllerPropertiesProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) int buttonAUpDelay; // ivar: _buttonAUpDelay
@property (nonatomic) BOOL hasButtonAUpDelay;
@property (nonatomic) BOOL hasPlayerIndex;
@property (nonatomic) BOOL hasProfile;
@property (nonatomic) BOOL hasSupportsExtendedMotion;
@property (readonly, nonatomic) BOOL hasVendorName;
@property (nonatomic) unsigned int playerIndex; // ivar: _playerIndex
@property (nonatomic) int profile; // ivar: _profile
@property (nonatomic) BOOL supportsExtendedMotion; // ivar: _supportsExtendedMotion
@property (retain, nonatomic) NSString *vendorName; // ivar: _vendorName


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)profileAsString:(int)arg0 ;
-(int)StringAsProfile:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif