// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef AXMVARIABLEPITCHTONE_H
#define AXMVARIABLEPITCHTONE_H

@class NSArray;


#import "AXMTone.h"

@interface AXMVariablePitchTone : AXMTone {
    NSArray *_keyPitches;
}




-(NSUInteger)_bufferFrameForKeyPitch:(id)arg0 ;
-(id)initWithKeyPitches:(id)arg0 sampleRate:(CGFloat)arg1 envelope:(id)arg2 ;
-(id)initWithSampleRate:(CGFloat)arg0 envelope:(id)arg1 ;
-(void)renderInBuffer:(*void)arg0 atFrame:(NSUInteger)arg1 ;


@end


#endif