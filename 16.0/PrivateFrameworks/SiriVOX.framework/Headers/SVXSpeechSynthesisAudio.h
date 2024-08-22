// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SVXSPEECHSYNTHESISAUDIO_H
#define SVXSPEECHSYNTHESISAUDIO_H

@class NSData;
@protocol NSCopying, NSSecureCoding;

#import <Foundation/Foundation.h>

#import "SVXAudioStreamBasicDescription.h"

@interface SVXSpeechSynthesisAudio : NSObject <NSCopying, NSSecureCoding>



@property (readonly, copy, nonatomic) NSData *data; // ivar: _data
@property (readonly, copy, nonatomic) SVXAudioStreamBasicDescription *decoderASBD; // ivar: _decoderASBD
@property (readonly, copy, nonatomic) SVXAudioStreamBasicDescription *playerASBD; // ivar: _playerASBD


+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_descriptionWithIndent:(NSUInteger)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithData:(id)arg0 decoderASBD:(id)arg1 playerASBD:(id)arg2 ;
-(id)mutatedCopyWithMutator:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif