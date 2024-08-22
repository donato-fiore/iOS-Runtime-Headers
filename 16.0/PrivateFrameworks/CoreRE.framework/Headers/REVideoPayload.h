// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef REVIDEOPAYLOAD_H
#define REVIDEOPAYLOAD_H



#import "RESharedResourcePayload.h"

@interface REVideoPayload : RESharedResourcePayload

@property (readonly, nonatomic) unsigned char audioInputMode; // ivar: _audioInputMode
@property (readonly, nonatomic) float reverbSendLevel; // ivar: _reverbSendLevel


+(BOOL)supportsSecureCoding;
-(id)initWithAudioInputMode:(unsigned char)arg0 reverbSendLevel:(float)arg1 ;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif