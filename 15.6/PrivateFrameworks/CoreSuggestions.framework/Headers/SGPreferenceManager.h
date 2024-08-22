// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef SGPREFERENCEMANAGER_H
#define SGPREFERENCEMANAGER_H

@class NSUserDefaults;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface SGPreferenceManager : NSObject {
    NSUserDefaults *_suggestionsDefaults;
    NSObject<OS_dispatch_queue> *_settingsUpdateQueue;
    BOOL _isQueueSuspended;
}




+(id)defaultManager;
-(id)init;
-(int)registerBlock:(id)arg0 ;
-(void)_resumeNotificationQueue;
-(void)_suspendNotificationQueue;


@end


#endif