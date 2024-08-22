// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef TUCALLSOUNDPLAYERDESCRIPTOR_H
#define TUCALLSOUNDPLAYERDESCRIPTOR_H

@class NSNumber;

#import <Foundation/Foundation.h>


@interface TUCallSoundPlayerDescriptor : NSObject

@property (nonatomic) NSUInteger iterations; // ivar: _iterations
@property (nonatomic) CGFloat pauseDuration; // ivar: _pauseDuration
@property (retain, nonatomic) NSNumber *sound; // ivar: _sound
@property (nonatomic) NSInteger soundType; // ivar: _soundType


-(id)description;
-(id)initWithSoundType:(NSInteger)arg0 call:(id)arg1 ;
-(id)initWithSoundType:(NSInteger)arg0 provider:(id)arg1 video:(BOOL)arg2 region:(NSInteger)arg3 ;
-(id)initWithSoundType:(NSInteger)arg0 sound:(id)arg1 iterations:(NSUInteger)arg2 pauseDuration:(CGFloat)arg3 ;


@end


#endif