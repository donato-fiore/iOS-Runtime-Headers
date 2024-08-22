// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef FLEXSEGMENTAUDIOFILEINFO_H
#define FLEXSEGMENTAUDIOFILEINFO_H

@class NSArray;

#import <Foundation/Foundation.h>


@interface FlexSegmentAudioFileInfo : NSObject

@property (nonatomic) NSInteger bars; // ivar: _bars
@property (nonatomic) NSInteger bpm; // ivar: _bpm
@property (retain, nonatomic) NSArray *customBarMarkers; // ivar: _customBarMarkers
@property (nonatomic) NSInteger sampleCount; // ivar: _sampleCount
@property (nonatomic) NSInteger sampleRate; // ivar: _sampleRate
@property (nonatomic) NSInteger samplesPerBar; // ivar: _samplesPerBar




@end


#endif