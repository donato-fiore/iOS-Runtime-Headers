// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MRMUTABLEAUDIODATABLOCK_H
#define MRMUTABLEAUDIODATABLOCK_H



#import "MRAudioDataBlock.h"
#import "MRAudioBuffer.h"

@interface MRMutableAudioDataBlock : MRAudioDataBlock

@property (retain, nonatomic) MRAudioBuffer *buffer;
@property (nonatomic) float gain;
@property (nonatomic) ? time;




@end


#endif