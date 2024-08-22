// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FPSUPPORT_VIDEORANGESINGLETON_H
#define FPSUPPORT_VIDEORANGESINGLETON_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface FPSupport_VideoRangeSingleton : NSObject {
    NSObject<OS_dispatch_queue> *_notificationQ;
}




+(id)sharedFPSupportSingleton;
-(id)init;
-(void)dealloc;
-(void)observeValueForKeyPath:(id)arg0 ofObject:(id)arg1 change:(id)arg2 context:(*void)arg3 ;
-(void)postNotification;


@end


#endif