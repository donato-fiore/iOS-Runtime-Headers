// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MPGAPLESSINFO_H
#define MPGAPLESSINFO_H


#import <Foundation/Foundation.h>


@interface MPGaplessInfo : NSObject

@property (nonatomic) NSUInteger durationInFrames; // ivar: _durationInFrames
@property (nonatomic) unsigned int encodingDelayInFrames; // ivar: _encodingDelayInFrames
@property (nonatomic) unsigned int encodingDrainInFrames; // ivar: _encodingDrainInFrames
@property (nonatomic) unsigned int heuristicInfo; // ivar: _heuristicInfo
@property (nonatomic) NSUInteger lastPacketsResync; // ivar: _lastPacketsResync




@end


#endif