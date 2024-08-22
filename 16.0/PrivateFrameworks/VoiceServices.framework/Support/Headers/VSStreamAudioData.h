// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef VSSTREAMAUDIODATA_H
#define VSSTREAMAUDIODATA_H

@class NSMutableArray, VSMappedData;

#import <Foundation/Foundation.h>


@interface VSStreamAudioData : NSObject

@property (readonly, nonatomic) AudioStreamBasicDescription asbd; // ivar: _asbd
@property (retain, nonatomic) NSMutableArray *mappedAudioInfo; // ivar: _mappedAudioInfo
@property (retain, nonatomic) VSMappedData *mappedData; // ivar: _mappedData


-(BOOL)writeWaveToFilePath:(id)arg0 ;
-(CGFloat)duration;
-(id)initWithASBD:(struct AudioStreamBasicDescription )arg0 ;
-(void)appendAudioData:(id)arg0 packetCount:(NSUInteger)arg1 packetDescriptions:(id)arg2 ;
-(void)enumerateAudioWithBlock:(id)arg0 ;


@end


#endif