// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef VTSIRINOTIFICATIONS_H
#define VTSIRINOTIFICATIONS_H


#import <Foundation/Foundation.h>

#import "VTSiriPHash.h"

@interface VTSiriNotifications : NSObject {
    *__CFNotificationCenter _center;
    VTSiriPHash *_hasher;
}




-(id)init;
-(void)broadcastAudioPayload:(id)arg0 numSamples:(NSUInteger)arg1 superVectorScore:(CGFloat)arg2 absoluteTime:(NSUInteger)arg3 ;


@end


#endif