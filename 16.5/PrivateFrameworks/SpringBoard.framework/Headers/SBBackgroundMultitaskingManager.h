// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SBBACKGROUNDMULTITASKINGMANAGER_H
#define SBBACKGROUNDMULTITASKINGMANAGER_H

@class NSMutableDictionary;

#import <Foundation/Foundation.h>


@interface SBBackgroundMultitaskingManager : NSObject {
    os_unfair_lock_s _lock;
    NSMutableDictionary *_lock_appToBackgroundTasks;
}




+(id)sharedInstance;
-(id)_createBackgroundFetchTaskForAppInfo:(id)arg0 ;
-(id)init;
-(void)_appProcessStateDidChange:(id)arg0 ;
-(void)_backgroundTaskFinished:(id)arg0 forAppInfo:(id)arg1 ;


@end


#endif