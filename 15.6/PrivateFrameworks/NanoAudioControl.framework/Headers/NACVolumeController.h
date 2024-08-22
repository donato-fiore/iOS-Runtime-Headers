// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NACVOLUMECONTROLLER_H
#define NACVOLUMECONTROLLER_H


#import <Foundation/Foundation.h>


@interface NACVolumeController : NSObject



+(id)demoVolumeControllerWithAudioCategory:(id)arg0 ;
+(id)localVolumeControllerWithAudioCategory:(id)arg0 ;
+(id)localVolumeControllerWithRoute:(id)arg0 ;
+(id)proxyVolumeControllerWithAudioCategory:(id)arg0 ;
+(id)proxyVolumeControllerWithTarget:(id)arg0 ;


@end


#endif