// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CSSIRIPREFERENCES_H
#define CSSIRIPREFERENCES_H

@class AFInstanceContext;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSSiriPreferences : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    AFInstanceContext *_instanceContext;
}




+(id)sharedPreferences;
-(NSUInteger)internalUserClassification;
-(id)init;
-(id)initWithInstanceContext:(id)arg0 ;
-(id)overrideAudioSessionActiveDelay;
-(id)serverAudioSessionActivationDelay;
-(id)serverAudioSessionActivationDelayAboveMediaPlaybackVolumeThreshold;
-(id)serverMediaPlaybackVolumeThresholdForAudioSessionActivationDelay;


@end


#endif