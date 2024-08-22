// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AVAUDIOCLOCK_H
#define AVAUDIOCLOCK_H


#import <Foundation/Foundation.h>

#import "AVAudioTime.h"

@interface AVAudioClock : NSObject {
    *void _impl;
}


@property (readonly, nonatomic) AVAudioTime *currentTime;


-(NSInteger)currentIONumberFrames;
-(id)awaitIOCycle:(*unsigned int)arg0 ;
-(id)init;
-(id)initWithNode:(*void)arg0 ;
-(struct AudioTimeStamp )currentAudioTimeStamp;
-(void)dealloc;


@end


#endif