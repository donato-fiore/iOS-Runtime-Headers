// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VCMEDIANEGOTIATORMULTIWAYAUDIOSTREAM_H
#define VCMEDIANEGOTIATORMULTIWAYAUDIOSTREAM_H

@class NSSet;
@protocol NSCopying;


#import "VCMediaNegotiatorMultiwayMediaStream.h"

@interface VCMediaNegotiatorMultiwayAudioStream : VCMediaNegotiatorMultiwayMediaStream <NSCopying>



@property (retain, nonatomic) NSSet *supportedAudioPayloads; // ivar: _supportedAudioPayloads


-(BOOL)isEqual:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)addPayload:(int)arg0 ;
-(void)dealloc;


@end


#endif