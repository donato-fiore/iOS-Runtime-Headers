// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef AFAUDIOPOWERXPCPROVIDER_H
#define AFAUDIOPOWERXPCPROVIDER_H

@class NSString;
@protocol AFAudioPowerProviding;

#import <Foundation/Foundation.h>

#import "_AFAudioPowerXPCSharedMemory.h"

@interface AFAudioPowerXPCProvider : NSObject <AFAudioPowerProviding>

 {
    _AFAudioPowerXPCSharedMemory *_sharedMemory;
}


@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


-(BOOL)getAveragePower:(*float)arg0 andPeakPower:(*float)arg1 ;
-(id)initWithXPCWrapper:(id)arg0 ;
-(void)didEndAccessPower;
-(void)willBeginAccessPower;


@end


#endif