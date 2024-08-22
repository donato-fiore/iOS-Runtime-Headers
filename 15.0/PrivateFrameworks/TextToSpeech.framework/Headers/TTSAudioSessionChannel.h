// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TTSAUDIOSESSIONCHANNEL_H
#define TTSAUDIOSESSIONCHANNEL_H

@class AVAudioSessionChannelDescription, NSString;

#import <Foundation/Foundation.h>


@interface TTSAudioSessionChannel : NSObject

@property (retain, nonatomic) AVAudioSessionChannelDescription *channel; // ivar: _channel
@property (nonatomic) unsigned int channelLabel; // ivar: _channelLabel
@property (retain, nonatomic) NSString *channelName; // ivar: _channelName
@property (nonatomic) NSUInteger channelNumber; // ivar: _channelNumber
@property (retain, nonatomic) NSString *owningPortUID; // ivar: _owningPortUID


+(id)channelWithChannel:(id)arg0 ;
+(id)convertChannels:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(id)description;
-(id)init;
-(void)dealloc;


@end


#endif