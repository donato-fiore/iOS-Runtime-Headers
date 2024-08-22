// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MPCASSISTANTSETVOLUME_H
#define MPCASSISTANTSETVOLUME_H


#import <Foundation/Foundation.h>


@interface MPCAssistantSetVolume : NSObject



-(void)decreaseVolumeBy:(float)arg0 withUIDs:(id)arg1 completion:(id)arg2 ;
-(void)executeWithUIDs:(id)arg0 action:(NSUInteger)arg1 volumeValue:(float)arg2 completion:(id)arg3 ;
-(void)increaseVolumeBy:(float)arg0 withUIDs:(id)arg1 completion:(id)arg2 ;
-(void)setVolume:(float)arg0 withUIDs:(id)arg1 completion:(id)arg2 ;


@end


#endif