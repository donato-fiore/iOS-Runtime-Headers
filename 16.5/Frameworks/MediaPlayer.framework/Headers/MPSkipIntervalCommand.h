// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPSKIPINTERVALCOMMAND_H
#define MPSKIPINTERVALCOMMAND_H

@class NSArray;


#import "MPRemoteCommand.h"

@interface MPSkipIntervalCommand : MPRemoteCommand

@property (copy, nonatomic) NSArray *preferredIntervals; // ivar: _preferredIntervals


-(id)_mediaRemoteCommandInfoOptions;
-(id)initWithMediaRemoteCommandType:(unsigned int)arg0 ;
-(id)newCommandEventWithInterval:(CGFloat)arg0 ;


@end


#endif