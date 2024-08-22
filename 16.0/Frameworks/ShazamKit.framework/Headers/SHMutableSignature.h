// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SHMUTABLESIGNATURE_H
#define SHMUTABLESIGNATURE_H

@class AVAudioFormat;


#import "SHSignature.h"
#import "SigX.h"

@interface SHMutableSignature : SHSignature

@property (readonly, nonatomic) NSInteger clipStyle; // ivar: _clipStyle
@property (nonatomic) unsigned int currentFrameCount; // ivar: _currentFrameCount
@property (retain, nonatomic) AVAudioFormat *format; // ivar: _format
@property (readonly, nonatomic) CGFloat maximumSeconds; // ivar: _maximumSeconds
@property (retain, nonatomic) SigX *sigX; // ivar: _sigX


+(BOOL)supportsSecureCoding;
-(BOOL)appendBuffer:(id)arg0 atTime:(id)arg1 error:(*id)arg2 ;
-(CGFloat)duration;
-(CGFloat)secondsFromFrameCount:(unsigned int)arg0 forFormat:(id)arg1 ;
-(NSInteger)currentPosition;
-(id)clipExcessAudio:(id)arg0 ;
-(id)dataRepresentation;
-(id)generate:(*id)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithMaximumSeconds:(CGFloat)arg0 clipStyle:(NSInteger)arg1 ;
-(int)signatureType;
-(void)configureWithFormat:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif