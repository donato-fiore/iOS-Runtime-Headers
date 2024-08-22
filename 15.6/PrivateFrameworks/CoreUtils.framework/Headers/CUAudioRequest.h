// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CUAUDIOREQUEST_H
#define CUAUDIOREQUEST_H

@class AVAudioPlayer, NSString;

#import <Foundation/Foundation.h>


@interface CUAudioRequest : NSObject

@property (retain, nonatomic) AVAudioPlayer *audioPlayer; // ivar: _audioPlayer
@property (copy, nonatomic) id *completion; // ivar: _completion
@property (copy, nonatomic) NSString *label; // ivar: _label




@end


#endif