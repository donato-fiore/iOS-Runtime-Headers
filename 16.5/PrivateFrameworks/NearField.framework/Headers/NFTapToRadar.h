// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NFTAPTORADAR_H
#define NFTAPTORADAR_H

@class NSString, NSUserDefaults;
@protocol OS_dispatch_queue;

#import <Foundation/Foundation.h>


@interface NFTapToRadar : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    Class _lsApplicationWorkspace;
    NSString *_pendingRequest;
    NSUserDefaults *_userDefaults;
    *__CFRunLoopSource _runLoopSource;
    *__CFUserNotification _userNotification;
}




+(id)_getInstance;
+(void)handleCallback:(NSUInteger)arg0 ;
+(void)requestTapToRadar:(id)arg0 preferences:(id)arg1 ;
-(id)init;
-(void)_handleCallbackSync:(NSUInteger)arg0 ;
-(void)_requestTapToRadarSync:(id)arg0 prefs:(id)arg1 ;


@end


#endif