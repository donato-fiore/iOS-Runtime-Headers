// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TTSSYNTHESISPROVIDERPLAYABLEBUFFER_H
#define TTSSYNTHESISPROVIDERPLAYABLEBUFFER_H

@class NSArray, AVAudioPCMBuffer;

#import <Foundation/Foundation.h>


@interface TTSSynthesisProviderPlayableBuffer : NSObject

@property (retain, nonatomic) NSArray *associatedMarkers; // ivar: _associatedMarkers
@property (retain, nonatomic) AVAudioPCMBuffer *buffer; // ivar: _buffer
@property (nonatomic) unsigned int startFrameOffset; // ivar: _startFrameOffset




@end


#endif