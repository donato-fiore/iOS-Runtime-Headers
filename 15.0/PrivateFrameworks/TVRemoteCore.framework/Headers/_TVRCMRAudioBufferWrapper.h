// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _TVRCMRAUDIOBUFFERWRAPPER_H
#define _TVRCMRAUDIOBUFFERWRAPPER_H

@class NSString;
@protocol _TVRCAudioBuffer;

#import <Foundation/Foundation.h>


@interface _TVRCMRAudioBufferWrapper : NSObject <_TVRCAudioBuffer>

 {
    *void _buffer;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) float gain; // ivar: _gain
@property (readonly) NSUInteger hash;
@property (nonatomic) NSUInteger packetCount;
@property (nonatomic) CGFloat sampleRate; // ivar: _sampleRate
@property (readonly) Class superclass;
@property (nonatomic) CGFloat timestamp; // ivar: _timestamp


-(*void)audioBuffer;
-(id)initWithSettings:(id)arg0 packetCapacity:(NSUInteger)arg1 maxPacketSize:(NSUInteger)arg2 ;
-(void)dealloc;
-(void)writeAudioData:(*void)arg0 length:(NSUInteger)arg1 ;
-(void)writePacketDescriptions:(*void)arg0 length:(NSUInteger)arg1 ;


@end


#endif