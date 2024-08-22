// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOCHANNELGROUPSEMANTICS_H
#define AVAUDIOCHANNELGROUPSEMANTICS_H

@class AVAudioChannelLayout;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface AVAudioChannelGroupSemantics : NSObject <NSSecureCoding>



@property (nonatomic) unsigned int channelCount; // ivar: _channelCount
@property (copy, nonatomic) AVAudioChannelLayout *layout; // ivar: _layout
@property (nonatomic) unsigned int semantics; // ivar: _semantics
@property (nonatomic) unsigned int terminalType; // ivar: _terminalType


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithAudioChannelGroupSemantics:(struct AudioChannelGroupSemantics *)arg0 ;
-(id)initWithChannelCount:(unsigned int)arg0 semantics:(unsigned int)arg1 terminalType:(unsigned int)arg2 layout:(id)arg3 ;
-(id)initWithCoder:(id)arg0 ;
-(struct AudioChannelGroupSemantics *)createAudioChannelGroupSemantics;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif