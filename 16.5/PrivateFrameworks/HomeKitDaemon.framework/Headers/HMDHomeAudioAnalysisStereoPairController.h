// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef HMDHOMEAUDIOANALYSISSTEREOPAIRCONTROLLER_H
#define HMDHOMEAUDIOANALYSISSTEREOPAIRCONTROLLER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface HMDHomeAudioAnalysisStereoPairController : NSObject {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_audioAnalysisStereoPairDetectedEventsMap;
}




-(id)init;
-(void)compareOrUpdateRecentAudioAnalysisStereoPairEvent:(id)arg0 key:(id)arg1 state:(NSUInteger)arg2 notificationUUID:(id)arg3 window:(NSUInteger)arg4 completion:(id)arg5 ;
-(void)updateAudioAnalysisStereoPairDetectedEvent:(id)arg0 key:(id)arg1 state:(NSUInteger)arg2 notificationUUID:(id)arg3 completion:(id)arg4 ;


@end


#endif