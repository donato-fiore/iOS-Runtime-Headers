// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef AVCAUDIOSTREAMCONFIG_H
#define AVCAUDIOSTREAMCONFIG_H


#import <Foundation/Foundation.h>


@interface AVCAudioStreamConfig : NSObject

@property (nonatomic) NSInteger audioStreamMode; // ivar: _audioStreamMode
@property (nonatomic) NSUInteger channelAwareOffset; // ivar: _channelAwareOffset
@property (nonatomic, getter=isCNEnabled) BOOL cnEnabled; // ivar: _cnEnabled
@property (nonatomic) NSUInteger cnPayloadType; // ivar: _cnPayloadType
@property (nonatomic) unsigned int codecRateModeMask; // ivar: _codecRateModeMask
@property (nonatomic) NSInteger codecType; // ivar: _codecType
@property (nonatomic) NSUInteger dtmfPayloadType; // ivar: _dtmfPayloadType
@property (nonatomic) NSUInteger dtmfTimestampRate; // ivar: _dtmfTimestampRate
@property (nonatomic, getter=isDTXEnabled) BOOL dtxEnabled; // ivar: _dtxEnabled
@property (nonatomic) BOOL enableMaxBitrateOnNoChangeCMR; // ivar: _enableMaxBitrateOnNoChangeCMR
@property (nonatomic, getter=isHeaderFullOnly) BOOL headerFullOnly; // ivar: _headerFullOnly
@property (nonatomic, getter=isLatencySensitiveMode) BOOL latencySensitiveMode; // ivar: _latencySensitiveMode
@property (nonatomic) NSUInteger maxPtime; // ivar: _maxPtime
@property (nonatomic) NSUInteger numRedundantPayloads; // ivar: _numRedundantPayloads
@property (nonatomic, getter=isOctectAligned) BOOL octetAligned; // ivar: _octetAligned
@property (nonatomic) NSInteger preferredCodecRateMode; // ivar: _preferredCodecRateMode
@property (nonatomic) NSUInteger ptime; // ivar: _ptime
@property (nonatomic) NSUInteger rxRedPayloadType; // ivar: _rxRedPayloadType
@property (nonatomic) NSUInteger txRedPayloadType; // ivar: _txRedPayloadType
@property (nonatomic) float volume; // ivar: _volume


+(NSInteger)clientCodecRateModeForCodecRateMode:(int)arg0 ;
+(NSInteger)clientCodecTypeWithCodecType:(NSInteger)arg0 ;
+(NSInteger)clientStreamModeWithStreamMode:(NSInteger)arg0 ;
+(NSInteger)codecTypeWithClientCodecType:(NSInteger)arg0 ;
+(NSInteger)streamModeWithClientStreamMode:(NSInteger)arg0 ;
+(int)codecRateModeForClientCodecRateMode:(NSInteger)arg0 ;
+(unsigned int)clientCodecRateMaskForCodecRateMode:(unsigned int)arg0 ;
+(unsigned int)codecRateMaskForClientCodecRateMode:(unsigned int)arg0 ;
-(BOOL)isCNValid;
-(BOOL)isDTMFValid;
-(BOOL)isRedValid;
-(BOOL)isValid;
-(id)dictionary;
-(id)init;
-(void)setUpWithDictionary:(id)arg0 ;


@end


#endif