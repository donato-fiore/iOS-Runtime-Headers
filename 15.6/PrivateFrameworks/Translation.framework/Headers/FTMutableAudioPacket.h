// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef FTMUTABLEAUDIOPACKET_H
#define FTMUTABLEAUDIOPACKET_H

@class NSData;


#import "FTAudioPacket.h"

@interface FTMutableAudioPacket : FTAudioPacket

@property (copy, nonatomic) NSData *audio_bytes;


-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)init;
-(void)audio_bytes:(id)arg0 ;


@end


#endif