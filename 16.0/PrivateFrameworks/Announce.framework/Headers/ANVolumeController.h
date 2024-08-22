// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ANVOLUMECONTROLLER_H
#define ANVOLUMECONTROLLER_H


#import <Foundation/Foundation.h>


@interface ANVolumeController : NSObject



+(id)sharedController;
-(float)smartSiriVolume;
-(void)setVolumeWithOptions:(NSUInteger)arg0 ;


@end


#endif