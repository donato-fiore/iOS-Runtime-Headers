// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HAPAUDIOSTREAMCODECPARAMETERS_H
#define HAPAUDIOSTREAMCODECPARAMETERS_H

@class NSString;
@protocol NSCopying, HAPTLVProtocol;

#import <Foundation/Foundation.h>

#import "HAPAudioCodecBitRateWrapper.h"
#import "HAPTLVUnsignedNumberValue.h"
#import "HAPAudioCodecSampleRateWrapper.h"

@interface HAPAudioStreamCodecParameters : NSObject <NSCopying, HAPTLVProtocol>



@property (retain, nonatomic) HAPAudioCodecBitRateWrapper *bitRate; // ivar: _bitRate
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *numAudioChannels; // ivar: _numAudioChannels
@property (retain, nonatomic) HAPTLVUnsignedNumberValue *packetTime; // ivar: _packetTime
@property (retain, nonatomic) HAPAudioCodecSampleRateWrapper *sampleRate; // ivar: _sampleRate
@property (readonly) Class superclass;


+(id)parsedFromData:(id)arg0 error:(*id)arg1 ;
-(BOOL)isEqual:(id)arg0 ;
-(BOOL)parseFromData:(id)arg0 error:(*id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(id)initWithNumAudioChannels:(id)arg0 bitRate:(id)arg1 sampleRate:(id)arg2 packetTime:(id)arg3 ;
-(id)serializeWithError:(*id)arg0 ;


@end


#endif