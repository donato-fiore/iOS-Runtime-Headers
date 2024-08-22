// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SFSSAUDIODATA_H
#define SFSSAUDIODATA_H

@class NSData;

#import <Foundation/Foundation.h>


@interface SFSSAudioData : NSObject

@property (nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (retain, nonatomic) NSData *audioData; // ivar: _audioData
@property (nonatomic) NSInteger packetCount; // ivar: _packetCount
@property (retain, nonatomic) NSData *packetDescriptions; // ivar: _packetDescriptions


-(BOOL)populateWithOpusData:(id)arg0 ;
-(BOOL)populateWithPCMData:(id)arg0 ;
-(CGFloat)duration;
-(id)initWithASBD:(struct AudioStreamBasicDescription )arg0 rawData:(id)arg1 ;


@end


#endif