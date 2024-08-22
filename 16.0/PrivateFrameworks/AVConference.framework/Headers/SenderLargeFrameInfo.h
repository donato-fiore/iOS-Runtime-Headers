// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SENDERLARGEFRAMEINFO_H
#define SENDERLARGEFRAMEINFO_H


#import <Foundation/Foundation.h>


@interface SenderLargeFrameInfo : NSObject {
    CGFloat probingInterval;
}


@property (nonatomic) BOOL isLargeFrameRequestDisabled; // ivar: isLargeFrameRequestDisabled
@property (nonatomic) BOOL isLastFrameProbingSequence; // ivar: isLastFrameProbingSequence
@property (nonatomic) unsigned int largeFrameSizeAtCurrentBandwidth; // ivar: largeFrameSizeAtCurrentBandwidth
@property (nonatomic) unsigned int largeFrameSizeRequested; // ivar: largeFrameSizeRequested
@property (nonatomic) CGFloat lastProbingSequenceTimeActual; // ivar: lastProbingSequenceTimeActual
@property (nonatomic) CGFloat lastProbingSequenceTimeExpect; // ivar: lastProbingSequenceTimeExpect
@property (nonatomic) int probingSequenceCount; // ivar: probingSequenceCount
@property (nonatomic) unsigned int probingSequencePacketCount; // ivar: probingSequencePacketCount
@property (nonatomic) unsigned int probingSequencePacketSize; // ivar: probingSequencePacketSize
@property (nonatomic) CGFloat startTime; // ivar: startTime
@property (nonatomic) int totalLargeFrameWaste; // ivar: totalLargeFrameWaste




@end


#endif