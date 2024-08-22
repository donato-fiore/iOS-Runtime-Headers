// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef PHASESTREAMINFOIMPL_H
#define PHASESTREAMINFOIMPL_H

@class AVAudioFormat;
@protocol PHASEStreamInfo;

#import <Foundation/Foundation.h>


@interface PHASEStreamInfoImpl : NSObject <PHASEStreamInfo>



@property (readonly, nonatomic) AVAudioFormat *format; // ivar: _format
@property (readonly, nonatomic) unsigned int latencyInFrames; // ivar: _latencyInFrames


-(id)initWithFormat:(id)arg0 latencyInFrames:(unsigned int)arg1 ;


@end


#endif