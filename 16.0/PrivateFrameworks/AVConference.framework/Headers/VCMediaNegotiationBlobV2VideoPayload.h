// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMEDIANEGOTIATIONBLOBV2VIDEOPAYLOAD_H
#define VCMEDIANEGOTIATIONBLOBV2VIDEOPAYLOAD_H

@class PBCodable, NSArray;
@protocol NSCopying;



@interface VCMediaNegotiationBlobV2VideoPayload : PBCodable <NSCopying>

 {
    ? _has;
}


@property (nonatomic) unsigned int decodeFormats; // ivar: _decodeFormats
@property (readonly, nonatomic) NSArray *decodeVideoRules;
@property (nonatomic) unsigned int encodeFormats; // ivar: _encodeFormats
@property (readonly, nonatomic) NSArray *encodeVideoRules;
@property (nonatomic) BOOL hasDecodeFormats;
@property (nonatomic) BOOL hasEncodeFormats;
@property (nonatomic) BOOL hasParameterSet;
@property (nonatomic) BOOL hasVideoPayload;
@property (nonatomic) unsigned int parameterSet; // ivar: _parameterSet
@property (readonly, nonatomic) int payload;
@property (readonly, nonatomic) unsigned int videoParameterSupport;
@property (nonatomic) unsigned int videoPayload; // ivar: _videoPayload


+(int)payloadWithRTPPayload:(int)arg0 ;
+(int)rtpPayloadWithPayload:(int)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)readFrom:(id)arg0 ;
-(BOOL)setupEncode:(BOOL)arg0 videoRules:(id)arg1 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithPayload:(int)arg0 encodeVideoRules:(id)arg1 decodeVideoRules:(id)arg2 videoParameterSupport:(unsigned int)arg3 ;
-(id)videoRulesWithBitmap:(unsigned int)arg0 ;
-(void)copyTo:(id)arg0 ;
-(void)mergeFrom:(id)arg0 ;
-(void)printWithLogFile:(*void)arg0 prefix:(id)arg1 ;
-(void)setupVideoParameterSupport:(unsigned int)arg0 ;
-(void)writeTo:(id)arg0 ;


@end


#endif