// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef _AFAUDIOPOWERXPCSHAREDMEMORY_H
#define _AFAUDIOPOWERXPCSHAREDMEMORY_H


#import <Foundation/Foundation.h>


@interface _AFAudioPowerXPCSharedMemory : NSObject {
    NSUInteger _mappedLength;
    *void _sharedRegion;
}


@property (readonly, nonatomic) float averagePower;
@property (readonly, nonatomic) float peakPower;


-(id)initWithXPCObject:(id)arg0 ;
-(void)_destroyMapping;
-(void)dealloc;


@end


#endif