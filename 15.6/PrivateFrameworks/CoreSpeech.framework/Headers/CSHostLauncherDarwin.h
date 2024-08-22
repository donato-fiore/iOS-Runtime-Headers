// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CSHOSTLAUNCHERDARWIN_H
#define CSHOSTLAUNCHERDARWIN_H

@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface CSHostLauncherDarwin : NSObject {
    *__IOHIDUserDevice _device;
    NSObject<OS_dispatch_queue> *_hidCallbackQueue;
}




+(id)propertyDictForDarwin;
+(id)sharedInstance;
-(BOOL)wakeHostForVoiceTrigger;
-(id)init;
-(void)dealloc;


@end


#endif