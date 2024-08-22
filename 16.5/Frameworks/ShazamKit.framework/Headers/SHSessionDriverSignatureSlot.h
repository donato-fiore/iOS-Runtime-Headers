// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SHSESSIONDRIVERSIGNATURESLOT_H
#define SHSESSIONDRIVERSIGNATURESLOT_H

@class AVAudioPCMBuffer;

#import <Foundation/Foundation.h>

#import "SHSignature.h"
#import "SHSignatureGenerator.h"

@interface SHSessionDriverSignatureSlot : NSObject

@property (readonly, nonatomic) AVAudioPCMBuffer *excessAudio; // ivar: _excessAudio
@property (readonly, nonatomic) SHSignature *generatedSignature; // ivar: _generatedSignature
@property (readonly, nonatomic) CGFloat maximumSignatureDuration; // ivar: _maximumSignatureDuration
@property (readonly, nonatomic) SHSignature *signature;
@property (readonly, nonatomic) CGFloat signatureDuration;
@property (readonly, nonatomic) SHSignatureGenerator *signatureGenerator; // ivar: _signatureGenerator
@property (nonatomic) NSInteger state; // ivar: _state


-(NSInteger)appendBuffer:(id)arg0 atTime:(id)arg1 error:(*id)arg2 ;
-(id)initWithMaximumSignatureDuration:(CGFloat)arg0 ;
-(void)reset;


@end


#endif