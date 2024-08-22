// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _MRVOICEINPUTDEVICEDESCRIPTORPROTOBUF_H
#define _MRVOICEINPUTDEVICEDESCRIPTORPROTOBUF_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "_MRAudioFormatSettingsProtobuf.h"

@interface _MRVoiceInputDeviceDescriptorProtobuf : PBCodable <NSCopying>

 {
    _MRAudioFormatSettingsProtobuf *_defaultFormat;
    NSMutableArray *_supportedFormats;
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