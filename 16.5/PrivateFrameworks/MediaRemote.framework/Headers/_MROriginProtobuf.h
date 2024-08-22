// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRORIGINPROTOBUF_H
#define _MRORIGINPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "_MRDeviceInfoMessageProtobuf.h"

@interface _MROriginProtobuf : PBCodable <NSCopying>

 {
    ? _has;
}


@property (retain, nonatomic) _MRDeviceInfoMessageProtobuf *deviceInfoDeprecated; // ivar: _deviceInfoDeprecated
@property (retain, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, nonatomic) BOOL hasDeviceInfoDeprecated;
@property (readonly, nonatomic) BOOL hasDisplayName;
@property (nonatomic) BOOL hasIdentifier;
@property (nonatomic) BOOL hasIsLocallyHosted;
@property (nonatomic) BOOL hasType;
@property (nonatomic) int identifier; // ivar: _identifier
@property (nonatomic) BOOL isLocallyHosted; // ivar: _isLocallyHosted
@property (nonatomic) int type; // ivar: _type


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)typeAsString:(int)arg0 ;
-(int)StringAsType:(id)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif