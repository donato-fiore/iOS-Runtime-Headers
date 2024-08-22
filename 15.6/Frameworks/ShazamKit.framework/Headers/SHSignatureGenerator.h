// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SHSIGNATUREGENERATOR_H
#define SHSIGNATUREGENERATOR_H


#import <Foundation/Foundation.h>

#import "SHMutableSignature.h"

@interface SHSignatureGenerator : NSObject

@property (retain, nonatomic) SHMutableSignature *mutableSignature; // ivar: _mutableSignature


+(id)signatureFromAudioFile:(id)arg0 error:(*id)arg1 ;
-(BOOL)appendBuffer:(id)arg0 atTime:(id)arg1 error:(*id)arg2 ;
-(CGFloat)duration;
-(CGFloat)maximumDuration;
-(id)init;
-(id)initSignatureRingBufferWithDuration:(CGFloat)arg0 ;
-(id)initWithMaximumSignatureDuration:(CGFloat)arg0 ;
-(id)signature;


@end


#endif