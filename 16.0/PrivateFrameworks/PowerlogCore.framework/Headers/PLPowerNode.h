// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PLPOWERNODE_H
#define PLPOWERNODE_H

@class NSString, NSArray;

#import <Foundation/Foundation.h>


@interface PLPowerNode : NSObject

@property CGFloat bgAudioTime; // ivar: _bgAudioTime
@property CGFloat bgEnergy; // ivar: _bgEnergy
@property CGFloat bgLocationTime; // ivar: _bgLocationTime
@property CGFloat bgTime; // ivar: _bgTime
@property CGFloat fgEnergy; // ivar: _fgEnergy
@property CGFloat fgTime; // ivar: _fgTime
@property (retain) NSString *name; // ivar: _name
@property (retain) NSArray *rootNodeEnergyRows; // ivar: _rootNodeEnergyRows


-(id)energy;
-(id)initWithName:(id)arg0 withFGEnergy:(CGFloat)arg1 withBGEnergy:(CGFloat)arg2 withFGTime:(CGFloat)arg3 withBGTime:(CGFloat)arg4 withBGAudioTime:(CGFloat)arg5 withBGLocationTime:(CGFloat)arg6 withRootNodeEnergyRows:(id)arg7 ;
-(id)serialize;
-(id)time;


@end


#endif