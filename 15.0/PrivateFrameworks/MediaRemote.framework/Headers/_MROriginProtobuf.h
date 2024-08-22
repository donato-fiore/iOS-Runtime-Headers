// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _MRORIGINPROTOBUF_H
#define _MRORIGINPROTOBUF_H

@class PBCodable, NSString;
@protocol NSCopying;


#import "_MRDeviceInfoMessageProtobuf.h"

@interface _MROriginProtobuf : PBCodable <NSCopying>

 {
    _MRDeviceInfoMessageProtobuf *_deviceInfoDeprecated;
    NSString *_displayName;
    int _identifier;
    int _type;
    BOOL _isLocallyHosted;
    ? _has;
}




-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(void)writeTo:(id)arg0 ;


@end


#endif