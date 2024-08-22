// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef HUAUDIOSESSION_H
#define HUAUDIOSESSION_H

@class AVAudioSession;



@interface HUAudioSession : AVAudioSession

@property (nonatomic) NSUInteger currentFeature; // ivar: _currentFeature


-(void)setActive:(BOOL)arg0 forFeature:(NSUInteger)arg1 error:(*id)arg2 ;


@end


#endif