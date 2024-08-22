// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _MRVOICEINPUTDEVICEDESCRIPTORPROTOBUF_H
#define _MRVOICEINPUTDEVICEDESCRIPTORPROTOBUF_H

@class PBCodable, NSMutableArray;
@protocol NSCopying;


#import "_MRAudioFormatSettingsProtobuf.h"

@interface _MRVoiceInputDeviceDescriptorProtobuf : PBCodable <NSCopying>



@property (retain, nonatomic) _MRAudioFormatSettingsProtobuf *defaultFormat; // ivar: _defaultFormat
@property (readonly, nonatomic) BOOL hasDefaultFormat;
@property (retain, nonatomic) NSMutableArray *supportedFormats; // ivar: _supportedFormats


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)supportedFormatsAtIndex:(NSUInteger)arg0 ;
-(void)addSupportedFormats:(id)arg0 ;
-(void)clearSupportedFormats;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif