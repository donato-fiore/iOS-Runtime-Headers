// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REVIDEOPAYLOAD_H
#define REVIDEOPAYLOAD_H

@class NSString;


#import "RESharedResourcePayload.h"

@interface REVideoPayload : RESharedResourcePayload

@property (readonly, nonatomic) unsigned char audioInputMode; // ivar: _audioInputMode
@property (readonly, nonatomic) NSString *audioLabel; // ivar: _audioLabel
@property (readonly, nonatomic) float reverbSendLevel; // ivar: _reverbSendLevel


+(BOOL)supportsSecureCoding;
-(id)initWithAudioLabel:(id)arg0 audioInputMode:(unsigned char)arg1 reverbSendLevel:(float)arg2 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif