// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MRCONTENTITEMMETADATAAUDIOFORMAT_H
#define MRCONTENTITEMMETADATAAUDIOFORMAT_H

@class NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "_MRAudioFormatProtobuf.h"

@interface MRContentItemMetadataAudioFormat : NSObject <NSCopying>



@property (retain, nonatomic) NSString *audioChannelLayoutDescription; // ivar: _audioChannelLayoutDescription
@property (nonatomic) NSInteger bitDepth; // ivar: _bitDepth
@property (nonatomic) NSInteger bitrate; // ivar: _bitrate
@property (nonatomic) unsigned int channelLayout; // ivar: _channelLayout
@property (nonatomic) unsigned int codec; // ivar: _codec
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (retain, nonatomic) NSString *groupID; // ivar: _groupID
@property (readonly, nonatomic) BOOL hasBitDepth; // ivar: _hasBitDepth
@property (readonly, nonatomic) BOOL hasBitrate; // ivar: _hasBitrate
@property (readonly, nonatomic) BOOL hasChannelLayout; // ivar: _hasChannelLayout
@property (readonly, nonatomic) BOOL hasCodec; // ivar: _hasCodec
@property (readonly, nonatomic) BOOL hasMultiChannel; // ivar: _hasMultiChannel
@property (readonly, nonatomic) BOOL hasSampleRate; // ivar: _hasSampleRate
@property (readonly, nonatomic) BOOL hasSpatialized; // ivar: _hasSpatialized
@property (readonly, nonatomic) BOOL hasTier; // ivar: _hasTier
@property (nonatomic, getter=isMultiChannel) BOOL multiChannel; // ivar: _multiChannel
@property (readonly, nonatomic) _MRAudioFormatProtobuf *protobuf;
@property (nonatomic) NSInteger sampleRate; // ivar: _sampleRate
@property (nonatomic, getter=isSpatialized) BOOL spatialized; // ivar: _spatialized
@property (retain, nonatomic) NSString *stableVariantID; // ivar: _stableVariantID
@property (nonatomic) NSInteger tier; // ivar: _tier


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)initWithProtobuf:(id)arg0 ;


@end


#endif